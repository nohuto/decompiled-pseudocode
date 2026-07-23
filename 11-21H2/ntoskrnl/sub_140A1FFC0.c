/*
 * XREFs of sub_140A1FFC0 @ 0x140A1FFC0
 * Callers:
 *     sub_140A1F420 @ 0x140A1F420 (sub_140A1F420.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A20C90 @ 0x140A20C90 (sub_140A20C90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1FFC0(char *Src, _QWORD *a2, unsigned int *a3)
{
  int v5; // ebx
  char *i; // rbx
  unsigned int v7; // ebx
  _FILE_PATH *PoolWithTag; // rax
  _FILE_PATH *v9; // rsi
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  _DWORD *v12; // rax
  _DWORD *v13; // r14

  if ( (*Src & 0x7F) == 0x7F )
  {
    return (unsigned int)-1073741766;
  }
  else
  {
    for ( i = &Src[*((unsigned __int16 *)Src + 1)];
          (*i & 0x7F) != 0x7F && (*i != 4 || i[1] != 4);
          i += *((unsigned __int16 *)i + 1) )
    {
      ;
    }
    v7 = (_DWORD)i - (_DWORD)Src;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v7 + 16, 0x4B444342u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->Version = 1;
      PoolWithTag->Length = v7 + 16;
      PoolWithTag->Type = 4;
      memmove(PoolWithTag->FilePath, Src, v7);
      *(_DWORD *)&v9->FilePath[v7] = 327551;
      v5 = sub_140A20C90(v9, 3u);
      if ( v5 >= 0 )
      {
        v10 = MEMORY[4] - 12;
        v11 = MEMORY[4] - 12 + 20;
        v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x4B444342u);
        v13 = v12;
        if ( v12 )
        {
          memset(v12, 0, v10 + 20);
          *v13 = 2;
          memmove(v13 + 5, (const void *)0xC, v10);
          *a3 = v11;
          *a2 = v13;
        }
        else
        {
          v5 = -1073741670;
        }
      }
      ExFreePoolWithTag(v9, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}

/*
 * XREFs of sub_140A96450 @ 0x140A96450
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F778 @ 0x140A7F778 (sub_140A7F778.c)
 *     sub_140A96904 @ 0x140A96904 (sub_140A96904.c)
 */

__int64 __fastcall sub_140A96450(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, __int64 a7)
{
  int v9; // ebx
  signed int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  char v15; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( sub_140A7F778(a6) )
  {
    v9 = 257;
  }
  else
  {
    v15 = a5;
    v9 = sub_14042A5E0(a1, a2);
  }
  if ( dword_140D5751C )
  {
    v10 = v9 & 0xFFFFFF7F;
    if ( a5 )
    {
      if ( v9 >= 0 && v10 < (int)a1 )
      {
        v13 = v10;
        v12 = 1LL;
        v11 = a2 + 8 * v13;
        goto LABEL_11;
      }
    }
    else if ( !v10 )
    {
      v11 = a2;
      v12 = a1;
LABEL_11:
      sub_140A96904(v12, v11, a7, retaddr, v15);
    }
  }
  return (unsigned int)v9;
}

/*
 * XREFs of sub_1409FCF40 @ 0x1409FCF40
 * Callers:
 *     sub_1409FE5F4 @ 0x1409FE5F4 (sub_1409FE5F4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FCF40(char *Src, _QWORD *a2, _QWORD *a3, char *a4)
{
  _QWORD *v4; // r14
  char *v5; // r15
  unsigned int v6; // ebp
  int v8; // ebx
  char v9; // r11
  char v10; // al
  char *v11; // r13
  unsigned int v12; // r12d
  char *v13; // r10
  char v14; // cl
  int v15; // eax
  char v16; // al
  unsigned int v17; // ebp
  _WORD *PoolWithTag; // rdi
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned __int64 v22; // rax
  PVOID v23; // rax

  v4 = a3;
  v5 = 0LL;
  v6 = 0;
  v8 = -1073741811;
  v9 = 1;
  while ( 1 )
  {
    v10 = *Src & 0x7F;
    if ( v10 == 127 )
      return (unsigned int)v8;
    if ( v10 == 4 && Src[1] == 1 )
      break;
    Src += *((unsigned __int16 *)Src + 1);
  }
  v11 = Src;
  v8 = 0;
  v12 = *((unsigned __int16 *)Src + 1);
  v13 = &Src[(unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8)];
  v14 = *v13;
  if ( (*v13 & 0x7F) == 4 && v13[1] == 4 )
  {
    v5 = v13;
    while ( 1 )
    {
      v15 = *((unsigned __int16 *)v13 + 1);
      if ( v15 + v6 - 4 < v6 )
        break;
      v6 = v15 + v6 - 4;
      if ( v15 + v12 < v12 )
      {
        v12 = -1;
        goto LABEL_16;
      }
      v12 += v15;
      v8 = 0;
      v13 += (unsigned __int8)v13[2] | (unsigned __int64)((unsigned __int8)v13[3] << 8);
      v14 = *v13;
      if ( (*v13 & 0x7F) != 4 || v13[1] != 4 )
        goto LABEL_17;
    }
    v6 = -1;
LABEL_16:
    v14 = *v13;
    v8 = -1073741675;
  }
LABEL_17:
  if ( (v14 & 0x7F) == 0x7F )
  {
    if ( v8 >= 0 )
    {
      v16 = v11[41];
      if ( v16 != 2 )
      {
        if ( v16 != 1 )
          return 3221225485LL;
        v9 = 0;
      }
      *a4 = v9;
      if ( v6 )
      {
        v17 = v6 + 2;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x72766E45u);
        if ( !PoolWithTag )
          return 3221225626LL;
        v19 = 0;
        while ( (*v5 & 0x7F) != 0x7F )
        {
          v20 = *((unsigned __int16 *)v5 + 1) - 4;
          if ( v20 >= v17 )
            goto LABEL_28;
          memmove((char *)PoolWithTag + v19, v5 + 4, v20);
          v17 -= v20;
          v19 += v20;
          v5 += *((unsigned __int16 *)v5 + 1);
        }
        v22 = v19;
        v4 = a3;
        PoolWithTag[v22 >> 1] = 0;
      }
      else
      {
        PoolWithTag = 0LL;
      }
      v23 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72766E45u);
      *a2 = v23;
      if ( !v23 )
      {
        if ( PoolWithTag )
LABEL_28:
          ExFreePoolWithTag(PoolWithTag, 0);
        return 3221225626LL;
      }
      memmove(v23, v11, v12);
      *v4 = PoolWithTag;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}

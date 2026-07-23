/*
 * XREFs of sub_14037EAF8 @ 0x14037EAF8
 * Callers:
 *     sub_1403815D4 @ 0x1403815D4 (sub_1403815D4.c)
 * Callees:
 *     sub_14037EA5C @ 0x14037EA5C (sub_14037EA5C.c)
 *     sub_140381660 @ 0x140381660 (sub_140381660.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char *__fastcall sub_14037EAF8(_DWORD *a1)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v3; // rdx
  unsigned int v4; // edx
  char *v5; // rbx
  _WORD *v6; // r9
  __int64 v7; // r8
  _WORD *v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x42436D73u);
  if ( !PoolWithTag )
    return 0LL;
  v3 = (unsigned int)a1[136];
  if ( (_DWORD)v3 == -1 )
  {
    v4 = a1[64];
    if ( v4 > a1[65] )
    {
      v5 = 0LL;
      goto LABEL_10;
    }
    v5 = sub_14037EA5C((__int64)a1, v4);
    if ( !v5 )
      goto LABEL_10;
    LODWORD(v3) = a1[64];
    a1[64] = v3 + 1;
  }
  else
  {
    _BitScanReverse((unsigned int *)&v11, v3);
    v5 = (char *)(*(_QWORD *)&a1[2 * v11] + 16 * (v3 ^ (unsigned int)(1 << v11)));
    a1[136] = *((_DWORD *)v5 + 2);
  }
  v6 = v5 + 8;
  *(_OWORD *)PoolWithTag = 0LL;
  PoolWithTag[2] = 0LL;
  v7 = 0LL;
  *((_DWORD *)PoolWithTag + 4) = v3;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  *((_QWORD *)v5 + 1) = 0LL;
  *(_QWORD *)v5 = PoolWithTag;
  v8 = (_WORD *)((char *)PoolWithTag + (unsigned int)a1[70]);
  for ( i = (unsigned __int64)v8 + (unsigned int)a1[68];
        i <= (unsigned __int64)(PoolWithTag + 512);
        i += (unsigned int)a1[68] )
  {
    LOWORD(v7) = v7 + 1;
    *v6 = (_WORD)v8 - (_WORD)PoolWithTag;
    v6 = v8;
    v8 = (_WORD *)i;
  }
  *v6 = -1;
  sub_140381660(a1, v5, v7);
  PoolWithTag = 0LL;
LABEL_10:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v5;
}

/*
 * XREFs of sub_140966C80 @ 0x140966C80
 * Callers:
 *     sub_1406C1810 @ 0x1406C1810 (sub_1406C1810.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 *     sub_1406AC404 @ 0x1406AC404 (sub_1406AC404.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall sub_140966C80(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  __int64 i; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !qword_140D05118 )
  {
    Pool2 = ExAllocatePool2(256LL, 256LL, 1632136257LL);
    v3 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 0LL;
    memset((void *)(Pool2 + 8), 0, 0xF8uLL);
    *v3 = qword_140D06CC0;
    if ( _InterlockedCompareExchange64(&qword_140D05118, (signed __int64)v3, 0LL) )
      ExFreePoolWithTag(v3, 0x61486C41u);
  }
  v4 = 1;
  for ( i = 8LL; ; i += 8LL )
  {
    v6 = *(_QWORD **)(i + qword_140D05118);
    if ( !v6 )
    {
      v7 = sub_1406A6378(0LL, 0LL);
      v6 = (_QWORD *)v7;
      if ( !v7 )
        return 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(qword_140D05118 + 8LL * v4), v7, 0LL) )
      {
        sub_1406AC404(v7);
        sub_1406AC130(v6);
        v6 = *(_QWORD **)(i + qword_140D05118);
      }
    }
    v8 = sub_1407A1CE8((__int64)v6, a1, 0, 0, 0LL);
    if ( v8 )
      break;
    if ( ++v4 >= 0x20 )
      return 0LL;
  }
  return v8 | ((unsigned __int64)v4 << 26);
}

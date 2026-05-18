/*
 * XREFs of sub_180043408 @ 0x180043408
 * Callers:
 *     sub_18003F8F4 @ 0x18003F8F4 (sub_18003F8F4.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 * Callees:
 *     sub_180040BEC @ 0x180040BEC (sub_180040BEC.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043408(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_1800436D4(a1);
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_180043668(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_180040BEC(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}

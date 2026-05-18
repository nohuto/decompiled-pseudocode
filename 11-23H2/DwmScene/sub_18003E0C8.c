/*
 * XREFs of sub_18003E0C8 @ 0x18003E0C8
 * Callers:
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 * Callees:
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E0C8(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_18003E370();
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_18003E330(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_18003C0D0(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}

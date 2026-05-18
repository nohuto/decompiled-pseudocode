/*
 * XREFs of sub_18003D2E4 @ 0x18003D2E4
 * Callers:
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 * Callees:
 *     sub_18003D390 @ 0x18003D390 (sub_18003D390.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D2E4(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  __int64 result; // rax
  int v11; // ecx

  sub_18003E330(a1);
  v8 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v8; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*i + 56LL))(*i, a3, a2, a4);
  }
  result = *a4;
  v11 = *(_DWORD *)(*a4 + 440);
  if ( (v11 & 0x10000) != 0 && (v11 & 0x20000) != 0 )
    sub_18003D390(a1);
  return result;
}

/*
 * XREFs of sub_18004231C @ 0x18004231C
 * Callers:
 *     sub_180047028 @ 0x180047028 (sub_180047028.c)
 * Callees:
 *     sub_1800423C8 @ 0x1800423C8 (sub_1800423C8.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004231C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  __int64 result; // rax
  int v11; // ecx

  sub_180043668(a1);
  v8 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v8; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*i + 56LL))(*i, a3, a2, a4);
  }
  result = *a4;
  v11 = *(_DWORD *)(*a4 + 440);
  if ( (v11 & 0x10000) != 0 && (v11 & 0x20000) != 0 )
    sub_1800423C8(a1);
  return result;
}

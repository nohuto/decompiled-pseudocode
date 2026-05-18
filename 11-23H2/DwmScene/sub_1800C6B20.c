/*
 * XREFs of sub_1800C6B20 @ 0x1800C6B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027020 @ 0x180027020 (sub_180027020.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C6B20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_18002A370(a1 + 24);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    sub_180027020(a1, a2);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}

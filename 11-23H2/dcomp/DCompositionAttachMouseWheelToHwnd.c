/*
 * XREFs of DCompositionAttachMouseWheelToHwnd @ 0x1800FF510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DCompositionAttachMouseWheelToHwnd(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        int a3)
{
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 && (**a1)(a1, &GUID_f2011fdf_3a34_4ec6_ae59_2ddd1bc9b6a1, &v6) >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v6 + 392LL))(
             v6,
             a2,
             32831LL,
             a3 != 0 ? 0x803F : 0);
  else
    return 2147942487LL;
}

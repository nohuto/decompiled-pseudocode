/*
 * XREFs of ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x18037DC6C
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x18037D278 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18037FA30 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

LPARAM __fastcall FindMonitor(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  LPARAM v4; // rbx
  __int64 v5; // rdx
  LPARAM dwData; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[56]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 56);
  dwData = 0LL;
  v9 = 0LL;
  if ( v2 )
  {
    if ( v2 == a1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 8LL))(v2, v8);
      std::_Func_class<void,>::_Tidy(a1, v3);
    }
    else
    {
      v9 = v2;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_9901e7d903e4130fca893991dae3b45b_::_lambda_invoker_cdecl_,
    (LPARAM)&dwData);
  v4 = dwData;
  std::_Func_class<void,>::_Tidy((__int64)v8, v5);
  return v4;
}

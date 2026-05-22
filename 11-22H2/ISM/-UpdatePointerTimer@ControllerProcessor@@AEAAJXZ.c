/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A777C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801A4E20 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801A6BB8 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::UpdatePointerTimer(ControllerProcessor *this)
{
  char v2; // di
  bool v3; // r14
  bool v4; // bp
  bool v5; // si
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1;
  if ( !*((_BYTE *)this + 212) )
  {
    v3 = COERCE_FLOAT(*((_DWORD *)this + 48) & _xmm) <= 0.23953247
      && COERCE_FLOAT(*((_DWORD *)this + 49) & _xmm) <= 0.23953247;
    v4 = COERCE_FLOAT(*((_DWORD *)this + 50) & _xmm) <= 0.26516724
      && COERCE_FLOAT(*((_DWORD *)this + 51) & _xmm) <= 0.26516724;
    v5 = COERCE_FLOAT(*((_DWORD *)this + 46) & _xmm) <= 0.1171875
      && COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) <= 0.1171875;
    if ( v4 && !*((_BYTE *)this + 420) && *((_DWORD *)this + 315) == 1 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v5 && ((*((_DWORD *)this + 315) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v3 && v4 && v5 )
      v2 = 0;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37), &v11);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7C8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v6,
      v9);
  if ( v2 )
  {
    if ( !*((_DWORD *)this + 70) && !v11 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 37) + 80LL))(
             *((_QWORD *)this + 37),
             0LL,
             *((_QWORD *)this + 975));
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7CE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v7,
          v9);
    }
  }
  return 0LL;
}

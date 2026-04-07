/*
 * XREFs of ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18005A700
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnGlobalTimeUpdated(CDisplayAnimatedVisual *this)
{
  CDesktopManager *v2; // rax
  double v3; // xmm0_8
  int v4; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-48h]
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( *((_BYTE *)this + 432) )
  {
    v3 = *((double *)this + 53);
  }
  else
  {
    v3 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 31);
    *((double *)this + 53) = v3;
    *((_BYTE *)this + 432) = 1;
  }
  if ( *((double *)v2 + 31) - v3 >= 4.0 )
  {
    if ( (unsigned int)dword_1801418A0 > 5 && tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
      tlgWriteTransfer_EtwEventWriteTransfer(v6, (unsigned int)&unk_18011F52C, 0, 0, 2, (__int64)v9);
    v7 = CDisplayAnimatedVisual::Stop(this, 0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x365,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v7,
        v8);
  }
  else if ( *((_BYTE *)this + 434) )
  {
    v4 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *))(*(_QWORD *)this + 232LL))(this);
    if ( v4 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x35C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v4,
        v8);
  }
  return 0LL;
}

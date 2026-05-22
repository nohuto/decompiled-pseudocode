/*
 * XREFs of ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801AE244
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AD128 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1801AE100 (-Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 *     ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x1801AE184 (-DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUCont.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgyImpl::EnsureInputTargeting(EdgyImpl *this, struct ContextualProcessorResponse *a2)
{
  const char *v4; // r9
  int v5; // r12d
  char *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  unsigned int v16; // [rsp+70h] [rbp+50h] BYREF
  __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  LODWORD(v17) = 0;
  *((_DWORD *)a2 + 2) = 0;
  v16 = 0;
  if ( !EdgyImpl::DetermineInputRouting(this, (enum Windows::UI::Internal::Input::EdgyInputRouting *)&v17, a2, &v16) )
    return 0;
  v5 = v17;
  if ( !v16 )
  {
LABEL_14:
    *((_DWORD *)this + 4) = v5;
    return 0;
  }
  if ( (_DWORD)v17 != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      281LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      v4);
  if ( *((_DWORD *)a2 + 2) != 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      282LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      v4);
  v6 = (char *)this + 32;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  v7 = EdgyInputTarget::Create((struct IInputTarget **)this + 4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v17 = 0LL;
    v9 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v6;
    v10 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v6;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v17);
    v11 = v10(v9, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v17);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x127,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v11,
        savedregs);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 80LL))(v17, v16);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x129,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v12,
        savedregs);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a2 + 10, (__int64 *)this + 4);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v17);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x122,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}

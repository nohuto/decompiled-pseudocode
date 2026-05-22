/*
 * XREFs of ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801C4410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801C456C (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationProcessor::OnInput(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  v7 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
  v8 = v7(v6, &GUID_9a8e3fb8_36b5_4c0c_9118_1aa39b5b35fc, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) )
    {
      *((_DWORD *)a4 + 2) = 3;
    }
    else
    {
      *((_DWORD *)a4 + 2) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
      v13 = *((_QWORD *)a3 + 11);
      if ( (unsigned __int8)ActivationProcessor::TryActivate(v10, &v13) )
      {
        *((_DWORD *)a4 + 2) = 3;
        LOBYTE(v11) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v11);
      }
    }
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\acti"
               "vationprocessor.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
  return v9;
}

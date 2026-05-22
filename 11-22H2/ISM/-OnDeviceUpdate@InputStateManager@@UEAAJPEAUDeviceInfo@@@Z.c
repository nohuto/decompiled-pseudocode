/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800DB290
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180079C10 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::OnDeviceUpdate(InputStateManager *this, struct DeviceInfo *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v10; // rdi
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  const char *v12; // r9
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+68h] [rbp+48h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v5 = *((_QWORD *)this + 10);
  if ( v5 == *((_QWORD *)this + 11) )
  {
LABEL_4:
    v6 = -2147467259;
    v7 = 2147500037LL;
    v8 = 362LL;
  }
  else
  {
    while ( *(_DWORD *)v5 != *(_DWORD *)a2 )
    {
      v5 += 16LL;
      if ( v5 == *((_QWORD *)this + 11) )
        goto LABEL_4;
    }
    v10 = *(_QWORD *)(v5 + 8);
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(v5 + 8));
      v17 = 0LL;
      v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v10;
      v16 = v10;
      Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v17);
    }
    v11 = **v4;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
    if ( v11(v4, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v15) < 0
      || (v13 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v15 + 24LL))(v15, a2),
          v6 = v13,
          v13 >= 0) )
    {
      if ( !ISMScenarios::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
          v12);
      if ( *(_DWORD *)ISMScenarios::s_instance
        || (v13 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
                    *((_QWORD *)this + 5),
                    a2),
            v6 = v13,
            v13 >= 0) )
      {
        v6 = 0;
        goto LABEL_6;
      }
      v8 = 354LL;
    }
    else
    {
      v8 = 349LL;
    }
    v7 = (unsigned int)v13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v7);
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v16);
  return v6;
}

/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800B2F90
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x18004F240 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v5 = *((_QWORD *)this + 10);
  if ( v5 == *((_QWORD *)this + 11) )
  {
LABEL_4:
    v6 = -2147467259;
    v7 = 2147500037LL;
    v8 = 361LL;
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
      v18 = 0LL;
      v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v10;
      v17 = v10;
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v18);
    }
    v11 = **v4;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
    if ( v11(v4, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v16) < 0
      || (v13 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v16 + 24LL))(v16, a2),
          v6 = v13,
          v13 >= 0) )
    {
      if ( !ISMScenarios::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          28LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
          v12);
      if ( *(_DWORD *)ISMScenarios::s_instance
        || (v14 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
                    *((_QWORD *)this + 5),
                    a2),
            v6 = v14,
            v14 >= 0) )
      {
        v6 = 0;
        goto LABEL_6;
      }
      v7 = (unsigned int)v14;
      v8 = 353LL;
    }
    else
    {
      v7 = (unsigned int)v13;
      v8 = 348LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v7);
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v17);
  return v6;
}

/*
 * XREFs of ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801DAEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B1718 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800C5930 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C8298 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCVoiceProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  _DWORD *v4; // rbx
  bool v5; // al
  MPCHolographicInputManager *Instance; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct MPCHolographicInputManager *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  struct IMPCTarget *v13; // rcx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v17; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_DWORD *)((char *)a2 + 64);
  if ( (*(_DWORD *)a2 & 0x662600) != 0 && *v4 == 10 )
  {
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **(_DWORD **)(this + 24),
      *(_DWORD *)(*(_QWORD *)(this + 24) + 4LL),
      *((_QWORD *)a2 + 2),
      0,
      0x20u);
  }
  else
  {
    if ( !MPCInputProviderBase::IsPrimary(this) )
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    v5 = (*(_DWORD *)a2 & 0x662600) != 0 && (*v4 == 7 || *v4 == 1);
    *(_BYTE *)(this + 3640) = v5;
    v17 = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
    v7 = MPCHolographicInputManager::Process3DInput(
           Instance,
           a2,
           (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
           &v17);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
      return v8;
    }
    v10 = MPCHolographicInputManager::GetInstance();
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 411) + 48LL))(*((_QWORD *)v10 + 411));
    v12 = v11;
    if ( v11 && *(_BYTE *)(this + 3548) )
      (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v11 + 24LL))(v11, a2);
    v13 = v17;
    if ( v17 )
    {
      *((_BYTE *)a2 + 3002) = 1;
      v14 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *, __int64))(*(_QWORD *)v13 + 24LL))(
              v13,
              a2,
              v12);
      if ( v14 != -2147417853 && v14 != -2147417828 && v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x55,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
          (const char *)(unsigned int)v14,
          v15);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
  }
  return 0LL;
}

/*
 * XREFs of ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BCB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x18009AC94 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18009F804 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800AF298 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCVoiceProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  bool v5; // al
  MPCHolographicInputManager *Instance; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct MPCHolographicInputManager *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  struct IMPCTarget *v12; // rcx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v16; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 10 )
  {
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **(_DWORD **)(this + 24),
      *(_DWORD *)(*(_QWORD *)(this + 24) + 4LL),
      *((_QWORD *)a2 + 2),
      0,
      0x20u);
    return 0LL;
  }
  else
  {
    if ( !MPCInputProviderBase::IsPrimary(this) )
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    v5 = (*(_DWORD *)a2 & 0x662600) != 0 && (*((_DWORD *)a2 + 16) == 7 || *((_DWORD *)a2 + 16) == 1);
    *(_BYTE *)(this + 3640) = v5;
    v16 = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
    v7 = MPCHolographicInputManager::Process3DInput(
           Instance,
           a2,
           (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
           &v16);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = MPCHolographicInputManager::GetInstance();
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 411) + 48LL))(*((_QWORD *)v9 + 411));
      v11 = v10;
      if ( v10 && *(_BYTE *)(this + 3548) )
        (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v10 + 24LL))(v10, a2);
      v12 = v16;
      if ( v16 )
      {
        *((_BYTE *)a2 + 3002) = 1;
        v13 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *, __int64))(*(_QWORD *)v12 + 24LL))(
                v12,
                a2,
                v11);
        if ( v13 != -2147417853 && v13 != -2147417828 && v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x55,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
            (const char *)(unsigned int)v13,
            v14);
      }
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
    return v8;
  }
}

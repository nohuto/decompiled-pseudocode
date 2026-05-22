/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180119828
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180026810 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180071430 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B438C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x180116488 (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180117610 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x18011860C (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x18011940C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18011A140 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall MPCInputRouter::UpdateFocusedInputTarget3D(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  int v4; // edi
  __int64 v5; // r13
  __int64 (__fastcall *v6)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int v12; // ebx
  struct ViewHierarchyWithWindowManager *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  struct IMPCTarget *v19; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v21; // rax
  __int64 v22; // rsi
  struct InputSiteManager *v23; // rax
  __int64 *v24; // rax
  struct IMPCTarget *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct IMPCFocusTarget *v28; // rdx
  int v29; // [rsp+20h] [rbp-60h]
  int ProcessIdFromViewId; // [rsp+40h] [rbp-40h] BYREF
  int v31; // [rsp+44h] [rbp-3Ch] BYREF
  struct IInputTarget *v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 WindowIdFromViewId; // [rsp+50h] [rbp-30h] BYREF
  __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  __int64 v35; // [rsp+60h] [rbp-20h] BYREF
  struct IMPCTarget *v36[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  char v38; // [rsp+C8h] [rbp+48h] BYREF
  int v39; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v40; // [rsp+D8h] [rbp+58h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v39 = 0;
    if ( MPCInputRouter::IsTargetHolographic(this, a2) )
    {
      WindowIdFromViewId = 0LL;
      ProcessIdFromViewId = 0;
      v5 = 0LL;
      v40 = 0;
      v32 = 0LL;
      v6 = **a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v32);
      if ( (int)v6((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, (__int64 *)&v32) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)v32 + 64LL))(
               v32,
               &WindowIdFromViewId);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x111,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v7);
        v8 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v32 + 32LL))(
               v32,
               &ProcessIdFromViewId);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x112,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v8);
        v9 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v32 + 56LL))(v32, &v40);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x113,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v9);
        v10 = v40;
        if ( v40 )
        {
          v5 = WindowIdFromViewId;
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v10);
          v12 = v40;
          v13 = ISMStatics::GetViewHierarchy();
          ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v13, v12);
        }
      }
      v38 = 0;
      v14 = *((_QWORD *)this + 100);
      if ( v14
        && (v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14), WindowIdFromViewId == v15)
        && (v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 88LL))(*((_QWORD *)this + 100)),
            v40 == v16) )
      {
        v38 = 1;
      }
      else if ( v32 )
      {
        v31 = 0;
        v17 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v32 + 32LL))(v32, &v31);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x128,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v17,
            v29);
        v36[0] = 0LL;
        v19 = (struct IMPCTarget *)RefCountedObject::operator new(0x70uLL);
        v36[1] = v19;
        if ( v19 )
        {
          MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v18, v32);
          if ( v40 )
          {
            InputSiteManager = ISMStatics::GetInputSiteManager();
            v21 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v35, 1, v5);
            v4 = 1;
            v39 = 1;
            v22 = *v21;
          }
          else
          {
            v22 = 0LL;
          }
          v23 = ISMStatics::GetInputSiteManager();
          v24 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)v23, &v34, 1, WindowIdFromViewId);
          v4 |= 2u;
          v39 = v4;
          v25 = (struct IMPCTarget *)MPCFocusTarget::MPCFocusTarget(v19, v32, *v24, v22);
        }
        else
        {
          v25 = 0LL;
        }
        v36[0] = v25;
        if ( (v4 & 2) != 0 )
        {
          v4 &= ~2u;
          v39 = v4;
          v26 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v27 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
        v28 = (struct IMPCTarget *)((char *)v25 + 80);
        if ( !v25 )
          v28 = 0LL;
        MPCInputRouter::Set3DFocusTarget(this, v28);
        if ( v25 )
          (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v25 + 16LL))(v25);
      }
      LOBYTE(v39) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 32LL))(*((_QWORD *)this + 100));
      v36[0] = *((struct IMPCTarget **)this + 100);
      ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D<bool &,IMPCFocusTarget *,bool,unsigned __int64 &>(
        (bool *)&v38,
        v36,
        (bool *)&v39,
        (unsigned __int64 *)&WindowIdFromViewId);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v32);
    }
  }
}

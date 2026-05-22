/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800F1FE8
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180014600 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18004DF20 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008AC3C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008B160 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x1800EE958 (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800EFD94 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800F0D74 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800F1BCC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800F27F8 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
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
  int v28; // [rsp+20h] [rbp-60h]
  int ProcessIdFromViewId; // [rsp+40h] [rbp-40h] BYREF
  int v30; // [rsp+44h] [rbp-3Ch] BYREF
  struct IInputTarget *v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 WindowIdFromViewId; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h] BYREF
  __int64 v34; // [rsp+60h] [rbp-20h] BYREF
  struct IMPCTarget *v35[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  char v37; // [rsp+C8h] [rbp+48h] BYREF
  int v38; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v39; // [rsp+D8h] [rbp+58h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v38 = 0;
    if ( MPCInputRouter::IsTargetHolographic(this, a2) )
    {
      WindowIdFromViewId = 0LL;
      ProcessIdFromViewId = 0;
      v5 = 0LL;
      v39 = 0;
      v31 = 0LL;
      v6 = **a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v31);
      if ( (int)v6((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, (__int64 *)&v31) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)v31 + 64LL))(
               v31,
               &WindowIdFromViewId);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            273LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v7);
        v8 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v31 + 32LL))(
               v31,
               &ProcessIdFromViewId);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            274LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v8);
        v9 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v31 + 56LL))(v31, &v39);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            275LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v9);
        v10 = v39;
        if ( v39 )
        {
          v5 = WindowIdFromViewId;
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v10);
          v12 = v39;
          v13 = ISMStatics::GetViewHierarchy();
          ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v13, v12);
        }
      }
      v37 = 0;
      v14 = *((_QWORD *)this + 99);
      if ( v14
        && (v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14), WindowIdFromViewId == v15)
        && (v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 88LL))(*((_QWORD *)this + 99)),
            v39 == v16) )
      {
        v37 = 1;
      }
      else if ( v31 )
      {
        v30 = 0;
        v17 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v31 + 32LL))(v31, &v30);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x128,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v17,
            v28);
        v35[0] = 0LL;
        v19 = (struct IMPCTarget *)RefCountedObject::operator new(0x60uLL);
        v35[1] = v19;
        if ( v19 )
        {
          MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v18, v31);
          if ( v39 )
          {
            InputSiteManager = ISMStatics::GetInputSiteManager();
            v21 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v34, 1, v5);
            v4 = 1;
            v38 = 1;
            v22 = *v21;
          }
          else
          {
            v22 = 0LL;
          }
          v23 = ISMStatics::GetInputSiteManager();
          v24 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)v23, &v33, 1, WindowIdFromViewId);
          v4 |= 2u;
          v38 = v4;
          v25 = (struct IMPCTarget *)MPCFocusTarget::MPCFocusTarget(v19, v31, *v24, v22);
        }
        else
        {
          v25 = 0LL;
        }
        v35[0] = v25;
        if ( (v4 & 2) != 0 )
        {
          v4 &= ~2u;
          v38 = v4;
          v26 = v33;
          if ( v33 )
          {
            v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v27 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
        MPCInputRouter::Set3DFocusTarget(
          this,
          (struct IMPCFocusTarget *)(((unsigned __int64)v25 + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64)));
        if ( v25 )
          (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v25 + 16LL))(v25);
      }
      LOBYTE(v38) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 32LL))(*((_QWORD *)this + 99));
      v35[0] = *((struct IMPCTarget **)this + 99);
      ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D<bool &,IMPCFocusTarget *,bool,unsigned __int64 &>(
        (bool *)&v37,
        v35,
        (bool *)&v38,
        (unsigned __int64 *)&WindowIdFromViewId);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v31);
    }
  }
}

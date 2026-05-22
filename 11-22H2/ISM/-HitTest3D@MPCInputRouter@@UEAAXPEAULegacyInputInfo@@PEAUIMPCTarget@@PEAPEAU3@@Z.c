/*
 * XREFs of ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180117F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800C9178 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x180117178 (-FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x180117970 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget **a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  bool v9; // bp
  bool v10; // r12
  char v11; // r14
  bool v12; // r13
  __int64 v13; // rcx
  MPCInputRouter *v14; // rcx
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IMPCTarget **); // r9
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v20; // eax
  int v21; // eax
  _BYTE *v22; // r13
  int v23; // eax
  struct MPCHolographicInputManager *Instance; // r15
  unsigned int v25; // r12d
  unsigned __int64 WindowIdFromViewId; // rax
  int v27; // edi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = 0;
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x142,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
  if ( !*((_BYTE *)this + 96) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x145,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         (char *)a2 + 80,
         (char *)a2 + 240);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v8,
      v29);
  v9 = 1;
  v10 = !*((_BYTE *)a2 + 241)
     && (*(_DWORD *)a2 & 0x2600) != 0
     && ((unsigned int)(*((_DWORD *)a2 + 16) - 1) <= 1 || *((_DWORD *)a2 + 17) == 2);
  v11 = 0;
  v12 = 0;
  v13 = *((_QWORD *)this + 3);
  if ( v13 )
    v12 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13) != 0;
  if ( IsEdition(8778LL) )
  {
    if ( *((_BYTE *)a2 + 312) )
      goto LABEL_36;
    if ( v10 && *((_BYTE *)a2 + 638) && !v12 && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
      v11 = 1;
  }
  if ( *((_BYTE *)a2 + 312) )
  {
LABEL_36:
    v22 = (char *)a2 + 240;
    if ( *((_BYTE *)a2 + 240) )
    {
      v23 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
              *((_QWORD *)this + 5),
              &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
              a4);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x186,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v23,
          v29);
    }
    else
    {
      MPCInputRouter::FixViewIdForHitTestResult(v14, (struct LegacyInputInfo *)((char *)a2 + 240));
      MPCInputRouter::GetMPCTarget(
        (MPCInputRouter *)((char *)this - 776),
        *((_QWORD *)a2 + 35),
        *((_DWORD *)a2 + 72),
        a4);
    }
    goto LABEL_41;
  }
  if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
  {
    v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
            *((_QWORD *)this + 5),
            &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
            a4);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15,
        v29);
  }
  else
  {
    v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 2);
    if ( v16 )
    {
      v17 = (**v16)(v16, &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x170,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v17,
          v29);
    }
    else
    {
      v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 3);
      if ( v18 )
      {
        if ( *((_BYTE *)a2 + 638)
          || (v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 5)) == 0LL )
        {
          v21 = (**v18)(*((_QWORD *)this + 3), &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
          if ( v21 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x176,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
              (const char *)(unsigned int)v21,
              v29);
        }
        else
        {
          v20 = (**v19)(v19, &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
          if ( v20 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x17C,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
              (const char *)(unsigned int)v20,
              v29);
        }
      }
    }
  }
  v22 = (char *)a2 + 240;
LABEL_41:
  if ( !v10 )
    return;
  if ( v11 )
    goto LABEL_46;
  if ( !*((_BYTE *)a2 + 312) )
    return;
  if ( !*v22 || *((_DWORD *)a2 + 68) )
LABEL_46:
    v9 = 0;
  Instance = MPCHolographicInputManager::GetInstance();
  v25 = *((_DWORD *)a2 + 1);
  if ( v11 )
  {
    WindowIdFromViewId = *((_QWORD *)a2 + 80);
  }
  else
  {
    v27 = *((_DWORD *)a2 + 154);
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v27);
    v7 = v27;
  }
  MPCHolographicInputManager::RequestForegroundChange(
    (__int64)Instance,
    WindowIdFromViewId,
    v7,
    (const char *)v25,
    v29,
    v30,
    v9);
}

/*
 * XREFs of ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BDD0
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B610 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BFD4 (-XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJ_K0@Z @ 0x1800F0430 (-_EnsureCapacity@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UENUMERATED.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ECE2C (-XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180766BFC (-XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180777264 (-XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::_CreateXamlMTVHost(
        _QWORD *a1,
        int a2,
        __int64 a3,
        const char *a4,
        _QWORD *a5)
{
  int v7; // edx
  int v8; // edx
  const struct _GUID *v9; // rdx
  int Instance; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 *v15; // rbx
  int v17; // edx
  int v18; // edx
  const struct _GUID *v19; // rdx
  __int64 v20; // rdx
  const struct _GUID *v21; // rdx
  const struct _GUID *v22; // rdx
  void *v23[2]; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v25; // [rsp+48h] [rbp-61h]
  __int64 v26; // [rsp+50h] [rbp-59h]
  __int64 v27; // [rsp+58h] [rbp-51h]
  __int64 v28; // [rsp+60h] [rbp-49h]
  __int64 v29; // [rsp+68h] [rbp-41h]
  __int64 v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+78h] [rbp-31h]
  __int64 v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+88h] [rbp-21h]
  __int64 v34; // [rsp+90h] [rbp-19h]
  __int64 v35; // [rsp+98h] [rbp-11h]
  __int64 v36; // [rsp+A0h] [rbp-9h]
  __int128 v37; // [rsp+A8h] [rbp-1h]
  __int64 v38; // [rsp+B8h] [rbp+Fh]
  __int64 v39; // [rsp+C0h] [rbp+17h]
  __int64 v40; // [rsp+C8h] [rbp+1Fh]
  __int64 v41; // [rsp+D0h] [rbp+27h]
  __int64 v42; // [rsp+D8h] [rbp+2Fh]
  __int64 v43; // [rsp+E0h] [rbp+37h]
  __int64 v44; // [rsp+E8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+57h]

  *a5 = 0LL;
  v24[0] = a1;
  v24[1] = a1[11];
  if ( a3 )
    v25 = a3;
  else
    v25 = a1[12];
  v26 = a1[14];
  v27 = a1[19];
  v28 = a1[20];
  v29 = a1[30];
  v30 = a1[27];
  v31 = a1[25];
  v32 = a1[26];
  v33 = a1[28];
  v34 = a1[29];
  v35 = a1[15];
  v36 = a1[18];
  v37 = 0LL;
  v38 = 0LL;
  v39 = a1[33];
  v40 = a1[22];
  v41 = a1[21];
  v42 = a1[34];
  v43 = a1[35];
  v44 = a1[36];
  *(_OWORD *)v23 = 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v17 = v8 - 2;
      if ( v17 )
      {
        v18 = v17 - 4;
        if ( !v18 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x345,
            (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            a4);
        if ( v18 == 8 )
        {
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
          Instance = XamlVirtualDesktopSwitcherHost_CreateInstance(
                       (const struct XamlViewHostInitializeArgs *)v24,
                       v19,
                       v23);
          v11 = Instance;
          if ( Instance < 0 )
          {
            v20 = 841LL;
            goto LABEL_26;
          }
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
        Instance = XamlSnapAssistViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v21, v23);
        v11 = Instance;
        if ( Instance < 0 )
        {
          v20 = 833LL;
          goto LABEL_26;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
      Instance = XamlTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v9, v23);
      v11 = Instance;
      if ( Instance < 0 )
      {
        v20 = 828LL;
        goto LABEL_26;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
    Instance = XamlAltTabViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v22, v23);
    v11 = Instance;
    if ( Instance < 0 )
    {
      v20 = 823LL;
      goto LABEL_26;
    }
  }
  v12 = a1 + 37;
  v13 = v12[1];
  if ( v13 != v12[3]
    || (int)CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_EnsureCapacity(
              v12,
              v13 + 1) >= 0 )
  {
    v14 = v12[1];
    v12[1] = v14 + 1;
    v15 = (__int64 *)(*v12 + 16 * v14);
    if ( v15 )
    {
      *v15 = (__int64)v23[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
      v15[1] = (__int64)v23[1];
      if ( v23[1] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v23[1] + 8LL))(v23[1]);
    }
  }
  Instance = (**(__int64 (__fastcall ***)(void **, const char *, _QWORD *))v23[0])((void **)v23[0], a4, a5);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23[1]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
    return 0LL;
  }
  v20 = 847LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
    (const char *)(unsigned int)Instance,
    (int)v23[0]);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23[1]);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
  return v11;
}

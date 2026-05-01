/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800CADF0
 * Callers:
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1800C8F20 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1801AE7E0 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1803A9810 (-UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@.c)
 * Callees:
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x18004D9C8 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1801618D0 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18016387C (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x180169980 (CClassicWindowManager--ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___.c)
 *     ?Compare@CClassicWindowFinderByHWND@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18016F7D4 (-Compare@CClassicWindowFinderByHWND@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CClassicWindowManager::_HandleDestructionOrHide(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v4; // r13d
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // r12d
  __int64 *v12; // rbx
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v21; // rcx
  bool v22; // bl
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rcx
  int v24; // eax
  unsigned __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // r14
  int App; // eax
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  char v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v37; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v39[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp+58h]

  v42 = a4;
  v4 = a3;
  v7 = 0LL;
  v40 = 0LL;
  v36 = a1[25];
  v8 = a1 + 23;
  v39[0] = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  v10 = 0LL;
  v11 = -2147319765;
  if ( a1[25] )
  {
    while ( 1 )
    {
      v38 = 0LL;
      v12 = *(__int64 **)(a1[24] + 8 * v10);
      v37 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
      v35 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))*v12)(
             v12,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v35) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v35 + 192LL))(v35, a2) )
      {
        v13 = 0;
      }
      else
      {
        v13 = -1;
      }
      v14 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
      if ( !v13 )
        break;
      ++v10;
      v7 = 0LL;
      if ( v10 >= a1[25] )
      {
        v9 = 0LL;
        goto LABEL_12;
      }
    }
    v9 = v10;
    v41 = v10;
    v7 = 0LL;
    v15 = 0;
  }
  else
  {
LABEL_12:
    v15 = -2147319765;
  }
  if ( v15 < 0 )
    goto LABEL_14;
  v23 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1[24] + 8 * v9);
  v24 = (**v23)(v23, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, (__int64 *)&v40);
  v36 = v9;
  if ( v24 >= 0 )
  {
    v16 = 1;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
    {
      if ( v4 == 2 )
      {
        v28 = v42;
        (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v40 + 208LL))(v40, v42);
        CClassicWindowManager::_ChangeWindowType(a1, v40, (unsigned __int8)(v28 & 1) << 14);
        if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 152LL))(v40) )
          goto LABEL_18;
        v25 = v41;
        if ( !v41 )
          goto LABEL_18;
        v4 = 1;
        goto LABEL_32;
      }
    }
    else if ( v4 == 2 )
    {
      goto LABEL_18;
    }
    v25 = v41;
LABEL_32:
    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 136LL))(v40) )
    {
      v41 = v40;
      v38 = v40;
      v37 = (__int64 *)&v41;
      v39[0] = &v38;
      v39[1] = &v37;
      CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(a1, v39);
    }
    if ( v4 || (*(int (__fastcall **)(_QWORD *, unsigned __int64 *))(a1[28] + 8LL))(a1 + 28, &v40) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v8 + 16LL))(a1 + 23, v25);
      CClassicWindowManager::RemoveApplicationView(v27, v40, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v8 + 16LL))(a1 + 23, v25);
      CClassicWindowManager::RemoveApplicationView(v26, v40, 1LL);
    }
    goto LABEL_18;
  }
  v7 = 0LL;
LABEL_14:
  v16 = 0;
  if ( v4 == 1 )
  {
    v38 = a2;
    v39[0] = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    if ( a1[30] )
    {
      while ( 1 )
      {
        v37 = 0LL;
        v21 = *(_QWORD *)(a1[29] + 8 * v18);
        v41 = v21;
        if ( v21 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 8LL))(v21);
        v22 = (unsigned int)CClassicWindowFinderByHWND::Compare(&v38, &v41) == 0;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
        if ( v22 )
          break;
        ++v18;
        v7 = 0LL;
        if ( v18 >= a1[30] )
          goto LABEL_16;
      }
      v17 = v18;
      v11 = 0;
    }
LABEL_16:
    if ( v11 >= 0 )
    {
      v16 = 1;
      CClassicWindowManager::RemoveApplicationView(v7, *(_QWORD *)(a1[29] + 8 * v17), 0LL);
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(a1[28] + 16LL))(a1 + 28, v17);
    }
    else
    {
      v16 = 0;
    }
  }
  else if ( v4 == 2 )
  {
    v41 = a2;
    App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
            (int)a1 + 224,
            (int)&v41,
            a3,
            (int)&v36);
    if ( App >= 0 )
    {
      v16 = 1;
      v30 = v36;
      v31 = *(_QWORD *)(a1[29] + 8 * v36);
      v32 = v42;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 208LL))(v31, v42);
      CClassicWindowManager::_ChangeWindowType(a1, *(_QWORD *)(a1[29] + 8 * v30), (unsigned __int8)(v32 & 1) << 14);
      v33 = *(_QWORD *)(a1[29] + 8 * v30);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v33 + 152LL))(v33) )
      {
        CClassicWindowManager::RemoveApplicationView(v34, *(_QWORD *)(a1[29] + 8 * v30), 0LL);
        (*(void (__fastcall **)(_QWORD *, unsigned __int64))(a1[28] + 16LL))(a1 + 28, v30);
      }
    }
  }
LABEL_18:
  v19 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v16;
}

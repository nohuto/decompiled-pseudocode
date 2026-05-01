/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1803BF7E8
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001E380 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18001E0E8 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1800258FC (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qL @ 0x1803C6520 (WPP_SF_qL.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1803C7AE0 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // r8d
  _DWORD *v10; // rcx
  int v11; // edx
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __m128i v14; // xmm1
  __int64 v15; // rax
  int inserted; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  struct ITaskWindow *v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  _OWORD *v28; // [rsp+70h] [rbp-90h]
  _QWORD v29[2]; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+94h] [rbp-6Ch]
  __int128 v32; // [rsp+98h] [rbp-68h]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E4h] [rbp-1Ch]
  _OWORD v40[3]; // [rsp+F0h] [rbp-10h] BYREF

  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL * *(_QWORD *)(a1 + 176) - 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  v8 = 0;
  v9 = 4;
  if ( (unsigned int)(a3 - 1) > 2 )
    v9 = 0;
  v10 = (_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a1 + 212) & 2) != 0
    || *v10 > *(_DWORD *)(a1 + 24)
    || (v11 = 0, *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28)) )
  {
    v11 = 8;
  }
  v12 = *(_OWORD *)(a1 + 76);
  v40[0] = v12;
  v13 = *(_OWORD *)(a1 + 92);
  v40[1] = v13;
  v14 = *(__m128i *)(a1 + 108);
  v40[2] = v14;
  v20 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a1 + 160);
    v24 = (v11 != 8) | v9;
    v25 = a1 + 16;
    v26 = (v15 + 112) & -(__int64)(v15 != 0);
    v27 = v11;
    v28 = v40;
    inserted = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 200LL))(a4, &v24);
    if ( inserted < 0 )
      goto LABEL_19;
    Microsoft::WRL::ComPtr<ITaskWindow>::operator=((__int64 *)&v20, a4);
    goto LABEL_13;
  }
  v17 = *(_QWORD *)(a1 + 160);
  v29[0] = 0LL;
  v29[1] = a2;
  v30 = 1;
  v31 = 1;
  v32 = *(_OWORD *)v10;
  v33 = v12;
  v34 = v13;
  v35 = v14.m128i_i64[0];
  v36 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
  v37 = (v17 + 112) & -(__int64)(v17 != 0);
  v38 = 0;
  v39 = v11;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
  v23 = v29;
  v20 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
               &v21,
               &v23);
  if ( inserted >= 0 )
    inserted = (**v21)(v21, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  if ( inserted >= 0 )
  {
LABEL_13:
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
                 (CSplashScreen **)a1,
                 v20,
                 *(_QWORD *)(a1 + 176));
    if ( inserted >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        LOBYTE(v8) = a3 != 1;
        (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v20 + 160LL))(v20, v8);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v18 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v20 + 32LL))(v20);
          WPP_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            18LL,
            &WPP_21483cb93caf3869011edf58ac3ef240_Traceguids,
            v18,
            v8);
        }
      }
    }
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  return (unsigned int)inserted;
}

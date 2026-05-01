/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180037748
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180070D38 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18003A8A4 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18009CF2C (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1801374B8 (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qL @ 0x180309FCC (WPP_SF_qL.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // edx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __m128i v13; // xmm1
  __int64 v14; // rax
  int inserted; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  struct ITaskWindow *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+68h] [rbp-98h]
  _OWORD *v27; // [rsp+70h] [rbp-90h]
  _QWORD v28[2]; // [rsp+80h] [rbp-80h] BYREF
  int v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+94h] [rbp-6Ch]
  __int128 v31; // [rsp+98h] [rbp-68h]
  __int128 v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E4h] [rbp-1Ch]
  _OWORD v39[3]; // [rsp+F0h] [rbp-10h] BYREF

  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL * *(_QWORD *)(a1 + 176) - 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  v8 = 4;
  v9 = 0;
  if ( (unsigned int)(a3 - 1) > 2 )
    v8 = 0;
  if ( (*(_BYTE *)(a1 + 212) & 2) != 0
    || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
    || (v10 = 0, *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28)) )
  {
    v10 = 8;
  }
  v11 = *(_OWORD *)(a1 + 76);
  v39[0] = v11;
  v12 = *(_OWORD *)(a1 + 92);
  v39[1] = v12;
  v13 = *(__m128i *)(a1 + 108);
  v39[2] = v13;
  v19 = 0LL;
  if ( a4 )
  {
    v17 = *(_QWORD *)(a1 + 160);
    v23 = (v10 != 8) | v8;
    v24 = a1 + 16;
    v25 = (v17 + 112) & -(__int64)(v17 != 0);
    v26 = v10;
    v27 = v39;
    inserted = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 200LL))(a4, &v23);
    if ( inserted < 0 )
      goto LABEL_14;
    Microsoft::WRL::ComPtr<ITaskWindow>::operator=(&v19, a4);
    goto LABEL_10;
  }
  v14 = *(_QWORD *)(a1 + 160);
  v28[0] = 0LL;
  v28[1] = a2;
  v29 = 1;
  v30 = 1;
  v31 = *(_OWORD *)(a1 + 16);
  v32 = v11;
  v33 = v12;
  v34 = v13.m128i_i64[0];
  v35 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  v36 = (v14 + 112) & -(__int64)(v14 != 0);
  v37 = 0;
  v38 = v10;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  v22 = v28;
  v19 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
               &v20,
               &v22);
  if ( inserted >= 0 )
    inserted = (**v20)(v20, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  if ( inserted >= 0 )
  {
LABEL_10:
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
                 (CImmersiveApp::CImmersiveWindowCollection *)a1,
                 v19,
                 *(_QWORD *)(a1 + 176));
    if ( inserted >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        LOBYTE(v9) = a3 != 1;
        (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v19 + 160LL))(v19, v9);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v18 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v19 + 32LL))(v19);
          WPP_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            18LL,
            &WPP_c876bcf2d1bc3ecf788b84e16676c7e7_Traceguids,
            v18,
            v9);
        }
      }
    }
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  return (unsigned int)inserted;
}

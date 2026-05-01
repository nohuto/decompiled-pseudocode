/*
 * XREFs of ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18053BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180032CA8 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18010FDA8 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804E33B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1804E33B0.c)
 *     ??$?0VCPlaceModeButtonAcc@@@?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCPlaceModeButtonAcc@@@12@PEAPEAX@Z @ 0x18053A71C (--$-0VCPlaceModeButtonAcc@@@-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV-$ComPtr@VCP.c)
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUtagRECT@@@Z @ 0x18053A7FC (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ??0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEBUtagRECT@@@Z @ 0x18053AB9C (--0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV-$NativeString@V-$CoTaskMemPolicy@G@Intern.c)
 *     ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x18053AF28 (-Attach@-$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18053BFC4 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

void __fastcall CDragVisualAcc::InitPlaceMode(
        unsigned __int64 this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IAppLayout *a3)
{
  struct IAppLayout *v4; // rdi
  int v6; // r15d
  __int128 *v7; // rax
  unsigned __int16 **v8; // r8
  unsigned __int16 *v9; // r13
  int v10; // esi
  __int64 v11; // rbx
  void *v12; // r8
  struct IRawElementProviderSimpleVtbl *v13; // rdx
  __int64 *v14; // rdx
  __int64 v15; // rcx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // r12d
  int v20; // eax
  __int64 v21; // rdx
  int v22; // esi
  int (__fastcall *v23)(struct IAppLayout *, __int128 **); // rbx
  unsigned __int16 **v24; // r8
  int ViewTitle; // edi
  __int64 v26; // rbx
  void *v27; // rax
  volatile int *v28; // rax
  void *v29; // r8
  struct IRawElementProviderSimpleVtbl *v30; // rdx
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int128 *v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  IRawElementProviderSimple *v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v43[16]; // [rsp+90h] [rbp-70h] BYREF
  ApplicationViewHelpers *v44; // [rsp+A0h] [rbp-60h]
  struct IAppLayout *v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+C8h] [rbp-38h]
  struct IAppLayout *v48; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int64 v50[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v52[40]; // [rsp+100h] [rbp+0h] BYREF

  v48 = a3;
  v34 = 0;
  v4 = a3;
  v6 = 0;
  v7 = (__int128 *)(*(__int64 (__fastcall **)(struct IRawElementProviderSimpleVtbl *, __int64 *))(**(_QWORD **)(this + 32)
                                                                                                + 120LL))(
                     *(struct IRawElementProviderSimpleVtbl **)(this + 32),
                     v50);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v51 = *v7;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
  v40 = -1LL;
  v41 = -1LL;
  if ( (int)ApplicationViewHelpers::GetViewTitle(a2, &v39, v8) >= 0 )
  {
    v9 = v39;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            (__int64)&v36,
            &_ImageBase,
            0x835u,
            v39);
    if ( v10 >= 0 )
    {
      v33 = &v51;
      v35 = (IRawElementProviderSimple *)(this - 32);
      Microsoft::WRL::Details::Make<CPlaceModeButtonAcc,CDragVisualAcc *,unsigned int &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,tagRECT *>(
        v50,
        &v35,
        &v34,
        (int)&v36,
        (__int64 *)&v33);
      v11 = v50[0];
      if ( v50[0] )
      {
        Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v33, v50);
        v13 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
        v10 = 0;
        if ( v13 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
          && (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      this + 176,
                      (unsigned __int64)&v13->QueryInterface + 1,
                      v12),
              v10 < 0)
          || (++*(_QWORD *)(this + 184),
              (v14 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
          || (*v14 = 0LL, v14 == (__int64 *)&v33) )
        {
          v15 = (__int64)v33;
        }
        else
        {
          v15 = 0LL;
          *v14 = (__int64)v33;
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v6 = 1;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
          v11,
          (volatile int *)v14);
        v4 = v48;
      }
      else
      {
        v10 = -2147024882;
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v52);
      v17 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v52, v16);
      v18 = (unsigned int)(v17 >> 31);
      LODWORD(v18) = v17 % 2;
      v19 = v17 / 2;
      v20 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)v4 + 72LL))(v4, v18);
      v21 = *(_QWORD *)v4;
      v33 = 0LL;
      v22 = v20;
      v34 = v20;
      v23 = *(int (__fastcall **)(struct IAppLayout *, __int128 **))(v21 + 128);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v33);
      if ( v23(v4, &v33) >= 0 )
      {
        do
        {
          if ( (*(int (__fastcall **)(__int128 *, __int64, _BYTE *))(*(_QWORD *)v33 + 24LL))(v33, 1LL, v43) < 0 )
            break;
          v48 = v45;
          v49 = v46;
          if ( v47 )
            LODWORD(v48) = (_DWORD)v45 - v19;
          if ( v47 != v22 - 1 )
            LODWORD(v49) = v46 + v19;
          v36 = 0LL;
          v37 = 0LL;
          v38 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
          v37 = -1LL;
          v38 = -1LL;
          ViewTitle = ApplicationViewHelpers::GetViewTitle(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v44,
                        &v36,
                        v24);
          if ( ViewTitle >= 0 )
          {
            memset(v42, 0, sizeof(v42));
            ViewTitle = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                          v42,
                          &_ImageBase,
                          2102LL,
                          v36,
                          v9);
            if ( ViewTitle >= 0 )
            {
              v26 = 0LL;
              v50[0] = 0LL;
              v27 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
              if ( v27 )
              {
                v28 = (volatile int *)CPlaceModeButtonAcc::CPlaceModeButtonAcc(
                                        (__int64)v27,
                                        this & -(__int64)(this != 32),
                                        v6,
                                        v42,
                                        &v48);
                Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(v50, v28);
                v26 = v50[0];
              }
              if ( v26 )
              {
                Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v35, v50);
                v30 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
                ViewTitle = 0;
                if ( v30 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
                  && (ViewTitle = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                                    this + 176,
                                    (unsigned __int64)&v30->QueryInterface + 1,
                                    v29),
                      ViewTitle < 0)
                  || (++*(_QWORD *)(this + 184),
                      (v31 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
                  || (*v31 = 0LL, v31 == (__int64 *)&v35) )
                {
                  v32 = (__int64)v35;
                }
                else
                {
                  v32 = 0LL;
                  *v31 = (__int64)v35;
                  v35 = 0LL;
                }
                if ( v32 )
                {
                  v35 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                }
                ++v6;
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
                  v26,
                  (volatile int *)v31);
                v22 = v34;
              }
              else
              {
                ViewTitle = -2147024882;
              }
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v42);
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
        }
        while ( ViewTitle >= 0 );
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v33);
    }
  }
  *(_DWORD *)(this + 16) = 2;
  UiaRaiseStructureChangedEvent((IRawElementProviderSimple *)(this - 32), StructureChangeType_ChildrenBulkAdded, 0LL, 0);
  UiaRaiseAutomationEvent((IRawElementProviderSimple *)(this - 32), 20002);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
}

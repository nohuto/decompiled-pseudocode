/*
 * XREFs of ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x18000EEF0
 * Callers:
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x18000C9F4 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18000B010 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$?0V_lambda_edcf8a708a912462aa4ae38346069636_@@@?$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_edcf8a708a912462aa4ae38346069636_@@@Z @ 0x18000EC7C (--$-0V_lambda_edcf8a708a912462aa4ae38346069636_@@@-$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae3.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x18000FF78 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180010238 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CActivationBasedAppAndGlomCollection::RemoveApplication(
        CActivationBasedAppAndGlomCollection *this,
        unsigned __int64 a2)
{
  _QWORD *v4; // rsi
  struct IUnknown *v5; // rbx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  struct IUnknown *v9; // rdi
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v10; // rbx
  PSRWLOCK v11; // rdi
  unsigned int v12; // edi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  unsigned __int64 Ptr; // [rsp+30h] [rbp-18h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v16; // [rsp+38h] [rbp-10h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v17; // [rsp+90h] [rbp+48h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v18; // [rsp+98h] [rbp+50h] BYREF
  struct IUnknown *v19; // [rsp+A0h] [rbp+58h] BYREF
  char *v20; // [rsp+A8h] [rbp+60h]

  v4 = (_QWORD *)((char *)this + 8);
  v20 = (char *)this + 8;
  v19 = *(struct IUnknown **)(*((_QWORD *)this + 1) + 8 * a2);
  v5 = v19;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
              this,
              (struct IImmersiveApplicationInternal *)v5,
              &v17,
              &Ptr) >= 0 )
  {
    v6 = v17;
    v7 = *((_QWORD *)v17 + 1);
    v8 = 0LL;
    if ( v7 )
    {
      while ( 1 )
      {
        v17 = *(struct CActivationBasedAppAndGlomCollection::CGlomCollection **)(*(_QWORD *)v6 + 8 * v8);
        v9 = (struct IUnknown *)v17;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
        LODWORD(v9) = SHIsSameObject(v9, v5);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
        if ( (_DWORD)v9 )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_5;
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        v6,
        v8);
    }
LABEL_5:
    if ( !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        Ptr);
    v4 = v20;
  }
  v18 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v19,
              (__int64)&v18) >= 0 )
  {
    v10 = v18;
    v17 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    {
      Ptr = (unsigned __int64)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&Ptr);
      v16 = v10;
      v17 = 0LL;
      v12 = (unsigned int)v11[15].Ptr;
      v13 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v13 )
        v14 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_edcf8a708a912462aa4ae38346069636_>::CTaskWrapper<_lambda_edcf8a708a912462aa4ae38346069636_>(
                v13,
                &Ptr);
      else
        v14 = 0LL;
      SHTaskPoolQueueTask(3LL, 2LL, v12);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&Ptr);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
    v4,
    a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
}

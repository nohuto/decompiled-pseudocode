/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180010340
 * Callers:
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x18000E85C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x18000E890 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180010238 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 i; // r15
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v8 = *((_QWORD *)this + 6);
  v9 = 0LL;
  if ( v8 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v14 = 0LL;
      v15 = **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(i + *((_QWORD *)this + 5));
      v11 = v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
      LOBYTE(v11) = (**v11)(v11, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v14) >= 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
      if ( (_BYTE)v11 )
      {
        if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v14 + 88LL))(v14, a2, &v13) >= 0
          && v13 )
        {
          break;
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
      if ( ++v9 >= v8 )
        return *a3 == 0LL ? 0x80070490 : 0;
    }
    *a3 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v9);
    if ( a4 )
      *a4 = v9;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  }
  return *a3 == 0LL ? 0x80070490 : 0;
}

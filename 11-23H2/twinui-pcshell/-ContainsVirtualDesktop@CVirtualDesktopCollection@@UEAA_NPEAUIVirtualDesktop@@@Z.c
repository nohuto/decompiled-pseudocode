/*
 * XREFs of ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x1800DF070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1800DF144 (-IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800DF1F0 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CVirtualDesktopCollection::ContainsVirtualDesktop(struct IUnknown **this, struct IUnknown *a2)
{
  char v4; // di
  char v5; // si
  __int64 v6; // rdx
  bool v7; // bl
  __int64 v9; // rdx
  struct IUnknown *v10; // [rsp+30h] [rbp-10h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-8h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  struct IUnknown *v13; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  v5 = 0;
  LODWORD(v13) = 0;
  v12 = 0;
  if ( CVirtualDesktopCollection::IsRemote((CVirtualDesktopCollection *)this, (struct IVirtualDesktop *)a2, &v12) >= 0
    && v12 )
  {
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v7 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                this + 10,
                v6,
                &v13,
                v11) >= 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    return v7;
  }
  else
  {
    if ( (unsigned int)SHIsSameObject(a2, this[5])
      || (v10 = a2,
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10),
          v5 = 1,
          LODWORD(v13) = 1,
          (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                 this + 6,
                 v9,
                 &v10,
                 v11) >= 0) )
    {
      v4 = 1;
    }
    if ( (v5 & 1) != 0 )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
    return v4;
  }
}

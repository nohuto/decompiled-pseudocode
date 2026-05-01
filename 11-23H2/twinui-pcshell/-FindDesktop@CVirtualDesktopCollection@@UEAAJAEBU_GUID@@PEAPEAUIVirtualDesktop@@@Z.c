/*
 * XREFs of ?FindDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180068D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@UVirtualDesktopGuidFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBUVirtualDesktopGuidFinder@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180068E10 (--$FindEx@UVirtualDesktopGuidFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Micr.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::FindDesktop(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  struct IVirtualDesktop *v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 *v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF

  *a3 = 0LL;
  if ( *(_OWORD *)a2 == __PAIR128__(0x1012647F7CCD4687LL, 0x4658059A45DB96FFLL) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
    v5 = (struct IVirtualDesktop *)*((_QWORD *)this + 5);
  }
  else
  {
    v13 = (__int128)*a2;
    v11 = 0LL;
    v6 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<VirtualDesktopGuidFinder>(
           (char *)this + 48,
           &v13,
           &v11,
           &v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    if ( v6 < 0 )
    {
      v11 = 0LL;
      v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<VirtualDesktopGuidFinder>(
             (char *)this + 80,
             &v13,
             &v11,
             &v12);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v7 = *((_QWORD *)this + 10);
    }
    else
    {
      v7 = *((_QWORD *)this + 6);
    }
    v10 = (__int64 *)(v7 + 8 * v12);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v5 = (struct IVirtualDesktop *)*v10;
  }
  *a3 = v5;
  return 0LL;
}

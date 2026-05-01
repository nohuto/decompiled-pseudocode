/*
 * XREFs of ??$FindEx@UVirtualDesktopGuidFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBUVirtualDesktopGuidFinder@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180068E10
 * Callers:
 *     ?FindDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180068D10 (-FindDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Compare@VirtualDesktopGuidFinder@@QEBAHV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x180068EA0 (-Compare@VirtualDesktopGuidFinder@@QEBAHV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<VirtualDesktopGuidFinder>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v10 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v11 = *(_QWORD *)(*a1 + 8 * v4);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    result = VirtualDesktopGuidFinder::Compare(a2, &v11, &v10);
    if ( !(_DWORD)result )
      break;
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return result;
}

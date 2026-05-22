/*
 * XREFs of ?GetGlobalD2DFactoryNoRef@@YAJPEAPEAUID2D1Factory1@@@Z @ 0x1801067F4
 * Callers:
 *     ?Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18012FB40 (-Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetGlobalD2DFactoryNoRef(struct ID2D1Factory1 **a1)
{
  struct ID2D1Factory1 *v1; // rax
  HRESULT v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppIFactory; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct ID2D1Factory1 *)qword_180220878;
  ppIFactory = (void *)qword_180220878;
  if ( !qword_180220878 )
  {
    v3 = D2D1CreateFactory(
           D2D1_FACTORY_TYPE_MULTI_THREADED,
           &GUID_bb12d362_daee_4b9a_aa1d_14ba401cfa1f,
           0LL,
           &ppIFactory);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\winrtexports.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    if ( _InterlockedCompareExchange64(&qword_180220878, (signed __int64)ppIFactory, 0LL) )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppIFactory + 16LL))(ppIFactory);
      v1 = (struct ID2D1Factory1 *)qword_180220878;
    }
    else
    {
      v1 = (struct ID2D1Factory1 *)ppIFactory;
    }
  }
  *a1 = v1;
  return 0LL;
}

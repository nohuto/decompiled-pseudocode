/*
 * XREFs of ?AddHead@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIEndpointDevice@@@Z @ 0x180041080
 * Callers:
 *     ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x180041000 (-AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800295E8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::AddHead(
        struct ATL::CAtlPlex **a1,
        __int64 a2)
{
  struct ATL::CAtlPlex *v4; // r14
  __int64 *v5; // rdi
  struct ATL::CAtlPlex *v6; // rbp
  struct ATL::CAtlPlex *v8; // rax
  int v9; // r8d
  struct ATL::CAtlPlex *i; // rdx

  v4 = *a1;
  if ( !a1[4] )
  {
    v8 = ATL::CAtlPlex::Create(a1 + 3, *((unsigned int *)a1 + 10), 24LL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *((_DWORD *)a1 + 10) - 1;
    for ( i = (struct ATL::CAtlPlex *)((char *)v8 + 16 * v9 + 8 * (unsigned int)v9 + 8); v9 >= 0; --v9 )
    {
      *(_QWORD *)i = a1[4];
      a1[4] = i;
      i = (struct ATL::CAtlPlex *)((char *)i - 24);
    }
  }
  v5 = (__int64 *)a1[4];
  v6 = (struct ATL::CAtlPlex *)*v5;
  v5[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  a1[4] = v6;
  v5[1] = 0LL;
  *v5 = (__int64)v4;
  a1[2] = (struct ATL::CAtlPlex *)((char *)a1[2] + 1);
  if ( *a1 )
    *((_QWORD *)*a1 + 1) = v5;
  else
    a1[1] = (struct ATL::CAtlPlex *)v5;
  *a1 = (struct ATL::CAtlPlex *)v5;
  return v5;
}

/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180040E3C
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180042074 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180017592 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E860 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18003EC6C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     memcpy_0 @ 0x18004768C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
        __int64 *a1,
        const void *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, _QWORD, __int64))
{
  __int64 v4; // rsi
  __int64 v7; // rax
  void *v8; // rcx
  size_t v9; // r8

  v4 = (int)a3;
  if ( !a4 )
    ATL::AtlThrowImpl(-2147467259);
  if ( !a2 && a3 )
    ATL::AtlThrowImpl(-2147024809);
  v7 = (**a4)(a4, a3, 2LL);
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  *a1 = v7 + 24;
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v4);
  v8 = (void *)*a1;
  v9 = 2 * v4;
  if ( 2 * v4 )
  {
    if ( v8 )
    {
      if ( a2 )
      {
        memcpy_0(v8, a2, v9);
        return a1;
      }
      memset_0(v8, 0, v9);
    }
    *(_DWORD *)_o__errno(v8) = 22;
    invalid_parameter_noinfo();
  }
  return a1;
}

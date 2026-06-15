/*
 * XREFs of ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x18003B694
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003C8A4 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800332A4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x180033A60 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(const unsigned __int16 *a1)
{
  char v2; // r12
  int *v3; // rbx
  __int64 v4; // r14
  int v5; // esi
  __int64 i; // rbp
  int *v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v8 = (int *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  if ( !ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
          (ATL::CAtlBaseModule *)&v8,
          (__int64)a1) )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
      (void **)&v8,
      (__int64)a1);
  v3 = v8;
  v4 = *(v8 - 4);
  if ( (int)v4 > 0 )
  {
    v5 = 0;
    for ( i = 0LL; i < v4; ++i )
    {
      if ( v5 <= *(v3 - 4) )
      {
        if ( !IsCharAlphaNumericW(*((_WORD *)v3 + i)) )
          break;
        if ( v5 <= *(v3 - 4) )
          goto LABEL_18;
      }
      ATL::AtlThrowImpl(-2147024809);
LABEL_18:
      if ( IsCharAlphaW(*((_WORD *)v3 + i)) )
        break;
      ++v5;
    }
    if ( v5 == (_DWORD)v4 )
      v2 = 1;
  }
  if ( _InterlockedExchangeAdd(v3 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)v3 - 3) + 8LL))(*((_QWORD *)v3 - 3), v3 - 6);
  return v2;
}

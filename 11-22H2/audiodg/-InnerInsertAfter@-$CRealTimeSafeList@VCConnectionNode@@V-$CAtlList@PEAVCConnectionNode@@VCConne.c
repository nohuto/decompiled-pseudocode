/*
 * XREFs of ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x140010F90
 * Callers:
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x140010EE8 (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14001101C (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v5; // edi
  __int64 **v6; // rbx
  __int64 *v7; // rsi
  __int64 *v8; // rcx
  __int64 *v9; // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v5 = 0;
    v6 = (__int64 **)(a1 + 48LL * a4);
    v7 = *v6;
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetFreeNode(v6);
    v8 = v6[4];
    v9 = (__int64 *)*v8;
    v8[2] = a2;
    v6[4] = v9;
    v8[1] = 0LL;
    *v8 = (__int64)v7;
    v6[2] = (__int64 *)((char *)v6[2] + 1);
    if ( *v6 )
      (*v6)[1] = (__int64)v8;
    else
      v6[1] = v8;
    *v6 = v8;
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    return *(unsigned int *)v11;
  }
  return v5;
}

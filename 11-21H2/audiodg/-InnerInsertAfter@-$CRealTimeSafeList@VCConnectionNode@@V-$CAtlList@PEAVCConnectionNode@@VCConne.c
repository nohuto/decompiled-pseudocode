/*
 * XREFs of ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x14000FCC0
 * Callers:
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000FA90 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011838 (-Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct ATLRT::CAtlPlex *v12; // r8
  int v13; // edx
  _QWORD *v14; // rcx
  int i; // edx

  v6 = 48LL * a4;
  v7 = *(_QWORD *)(v6 + a1);
  if ( !*(_QWORD *)(v6 + a1 + 32) )
  {
    v12 = ATLRT::CAtlPlex::Create((struct ATLRT::CAtlPlex **)(v6 + a1 + 24), *(unsigned int *)(v6 + a1 + 40), a3);
    if ( !v12 )
      ATL::AtlThrowImpl(-2147024882);
    v13 = *(_DWORD *)(v6 + a1 + 40);
    v14 = (_QWORD *)((char *)v12 + 16 * (v13 - 1) + 8 * (unsigned int)(v13 - 1) + 8);
    for ( i = v13 - 1; i >= 0; --i )
    {
      *v14 = *(_QWORD *)(v6 + a1 + 32);
      *(_QWORD *)(v6 + a1 + 32) = v14;
      v14 -= 3;
    }
  }
  v8 = *(__int64 **)(v6 + a1 + 32);
  v9 = *v8;
  v8[2] = a2;
  *(_QWORD *)(v6 + a1 + 32) = v9;
  v8[1] = 0LL;
  *v8 = v7;
  ++*(_QWORD *)(v6 + a1 + 16);
  v10 = *(_QWORD *)(v6 + a1);
  if ( v10 )
    *(_QWORD *)(v10 + 8) = v8;
  else
    *(_QWORD *)(v6 + a1 + 8) = v8;
  *(_QWORD *)(v6 + a1) = v8;
  return 0LL;
}

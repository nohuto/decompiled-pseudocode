/*
 * XREFs of ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x140010EE8
 * Callers:
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x140010C00 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x140011BFC (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 * Callees:
 *     ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x14000E6CC (-Find@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEA.c)
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x14000E6FC (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@.c)
 *     ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x140010F90 (-InnerInsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConne.c)
 *     ?SwapRTPointer@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAXXZ @ 0x1400110B8 (-SwapRTPointer@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnecti.c)
 */

__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InsertAfter(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  int v5; // edi
  __int64 v6; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // r9
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
    v5 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
           a1,
           a2,
           v4,
           *(unsigned __int16 *)(a1 + 112) ^ 1u);
    if ( v5 >= 0 )
    {
      CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(a1);
      v5 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
             a1,
             a2,
             v6,
             *(unsigned __int16 *)(a1 + 112) ^ 1u);
      if ( v5 < 0 )
      {
        CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(a1);
        v8 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(
               (_QWORD *)(a1 + 48 * (*(unsigned __int16 *)(a1 + 112) ^ 1LL)),
               (__int64)&v10);
        ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v9, v8);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v5;
}

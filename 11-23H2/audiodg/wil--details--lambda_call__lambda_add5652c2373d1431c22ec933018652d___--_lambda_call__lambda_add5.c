/*
 * XREFs of wil::details::lambda_call__lambda_add5652c2373d1431c22ec933018652d___::_lambda_call__lambda_add5652c2373d1431c22ec933018652d___ @ 0x1400A0420
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x1400A04C0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140002BF4 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_add5652c2373d1431c22ec933018652d___::_lambda_call__lambda_add5652c2373d1431c22ec933018652d___(
        _BYTE *a1,
        int a2,
        int a3)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v5 = *(void **)(*(_QWORD *)a1 + 112LL);
    if ( v5 )
    {
      AERTDestroyZoneHeap(v5, a2, a3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 112LL) = 0LL;
    }
  }
  return result;
}

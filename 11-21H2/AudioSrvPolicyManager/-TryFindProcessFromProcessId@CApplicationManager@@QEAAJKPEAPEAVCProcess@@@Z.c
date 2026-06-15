/*
 * XREFs of ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x180024DEC
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180009980 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180009B60 (-GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealit.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180021FD0 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedReality.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::TryFindProcessFromProcessId(RTL_SRWLOCK *this, int a2, struct CProcess **a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rcx
  signed __int32 *v8; // rdx
  signed __int32 v9; // eax

  *a3 = 0LL;
  v6 = this + 15;
  AcquireSRWLockShared(this + 15);
  Ptr = this[16].Ptr;
  while ( Ptr )
  {
    v8 = (signed __int32 *)Ptr[2];
    Ptr = (_QWORD *)*Ptr;
    if ( !v8[104] && v8[40] == a2 )
    {
      do
        v9 = v8[5];
      while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange(v8 + 5, v9 + 1, v9) );
      *a3 = (struct CProcess *)v8;
      break;
    }
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}

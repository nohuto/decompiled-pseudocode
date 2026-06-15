/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x18002400C
 * Callers:
 *     ?SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x18002A240 (-SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@A.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x180023DA0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b6e7f78b65f1.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028F90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___(
        __int64 a1,
        _OWORD *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // edi
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____lambda_2b6e7f78b65f10010076d2e207bfb9e0___(
         &v7,
         a2);
  v3 = *v2;
  *v2 = 0LL;
  if ( v7 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  CurrentThreadId = GetCurrentThreadId();
  v5 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v3, 0LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v5;
}

/*
 * XREFs of ?OnSaDeviceDestroyed@CBtAudioResourceManager@@UEAAXPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@@Z @ 0x180116B70
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CBtAudioResourceManager::OnSaDeviceDestroyed(
        CBtAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3)
{
  __int64 v4; // rax
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-48h] BYREF
  CBtAudioResourceManager *v7; // [rsp+28h] [rbp-40h]
  int *v8; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) == 1 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v7 = this;
    *(_QWORD *)v6 = &off_18016C1B0;
    v8 = v6;
    v5 = CSerialWorkQueue::QueueWorkItem(v4, v6);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x29C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v5);
  }
}

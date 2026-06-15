/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140027F14
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x140027754 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ??0CAudioPump@@QEAA@XZ @ 0x140028028 (--0CAudioPump@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1400293E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioPump>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // edi
  void *v5; // rax
  int v6; // r8d
  CAudioPump *v7; // rax
  CAudioPump *v8; // rbx
  int v9; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = (void *)AERTGetDLLRTHeap();
  v7 = (CAudioPump *)AERTAllocate(0x1288uLL, v5, v6);
  v8 = v7;
  if ( v7 )
  {
    CAudioPump::CAudioPump(v7);
    *(_QWORD *)v8 = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPump'};
    *((_QWORD *)v8 + 1) = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPumpLogging'};
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  }
  if ( v8 )
  {
    ATL::SafeIncrementReferenceMultiThread((int *)v8 + 4);
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v8 + 24));
    if ( v9 >= 0 )
    {
      *((_BYTE *)v8 + 64) = 1;
      v9 = 0;
    }
    v4 = 0;
    if ( v9 < 0 )
      v4 = v9;
    ATL::SafeDecrementReferenceMultiThread((int *)v8 + 4);
    if ( v4
      || (v4 = (**(__int64 (__fastcall ***)(CAudioPump *, GUID *, _QWORD *))v8)(
                 v8,
                 &GUID_2823d585_8d44_4969_8653_fca6e4afab6b,
                 a3)) != 0 )
    {
      (*(void (__fastcall **)(CAudioPump *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
    }
  }
  return v4;
}

/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400034CC
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??0CAudioPump@@QEAA@XZ @ 0x1400048CC (--0CAudioPump@@QEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001EF68 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioPump>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // edi
  void *v5; // rdx
  CAudioPump *v6; // rax
  CAudioPump *v7; // rbx
  int v8; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = AERTGetDLLRTHeap();
  v6 = (CAudioPump *)AERTAllocate(0x1290uLL, v5);
  v7 = v6;
  if ( v6 )
  {
    CAudioPump::CAudioPump(v6);
    *(_QWORD *)v7 = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPump'};
    *((_QWORD *)v7 + 1) = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPumpLogging'};
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  }
  if ( v7 )
  {
    ATL::SafeIncrementReferenceMultiThread((int *)v7 + 4);
    v8 = ATL::CComCriticalSection::Init((CAudioPump *)((char *)v7 + 24));
    if ( v8 >= 0 )
    {
      *((_BYTE *)v7 + 64) = 1;
      v8 = 0;
    }
    v4 = 0;
    if ( v8 < 0 )
      v4 = v8;
    ATL::SafeDecrementReferenceMultiThread((int *)v7 + 4);
    if ( v4
      || (v4 = (**(__int64 (__fastcall ***)(CAudioPump *, GUID *, _QWORD *))v7)(
                 v7,
                 &GUID_2823d585_8d44_4969_8653_fca6e4afab6b,
                 a3)) != 0 )
    {
      (*(void (__fastcall **)(CAudioPump *, __int64))(*(_QWORD *)v7 + 104LL))(v7, 1LL);
    }
  }
  return v4;
}

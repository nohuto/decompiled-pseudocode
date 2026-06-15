/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140020E04
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCAudioProcessor@@@ATL@@QEAA@PEAX@Z @ 0x140020DA8 (--0-$CComObject@VCAudioProcessor@@@ATL@@QEAA@PEAX@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x140027754 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1400293E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioProcessor>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v4; // edi
  void *v5; // rdx
  int v6; // r8d
  CAudioProcessor *v7; // rax
  CAudioProcessor *v8; // rbx
  int v9; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = (void *)AERTGetDLLRTHeap();
  v7 = (CAudioProcessor *)AERTAllocate(0x340uLL, v5, v6);
  if ( v7 )
    v8 = ATL::CComObject<CAudioProcessor>::CComObject<CAudioProcessor>(v7);
  else
    v8 = 0LL;
  if ( v8 )
  {
    ATL::SafeIncrementReferenceMultiThread((int *)v8 + 6);
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v8 + 32));
    if ( v9 >= 0 )
    {
      *((_BYTE *)v8 + 72) = 1;
      v9 = 0;
    }
    v4 = 0;
    if ( v9 < 0 )
      v4 = v9;
    ATL::SafeDecrementReferenceMultiThread((int *)v8 + 6);
    if ( v4
      || (v4 = (**(__int64 (__fastcall ***)(CAudioProcessor *, GUID *, _QWORD *))v8)(
                 v8,
                 &GUID_cfbc31a5_5756_48a3_aa45_b6b6dd4c363e,
                 a3)) != 0 )
    {
      (*(void (__fastcall **)(CAudioProcessor *, __int64))(*(_QWORD *)v8 + 136LL))(v8, 1LL);
    }
  }
  return v4;
}

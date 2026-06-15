/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400035DC
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??0?$CComObject@VCAudioProcessor@@@ATL@@QEAA@PEAX@Z @ 0x1400036BC (--0-$CComObject@VCAudioProcessor@@@ATL@@QEAA@PEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001EF68 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioProcessor>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v4; // edi
  void *v5; // rdx
  void *v6; // rax
  __int64 v7; // rbx
  int v8; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = AERTGetDLLRTHeap();
  v6 = AERTAllocate(0x340uLL, v5);
  if ( v6 )
    v7 = ATL::CComObject<CAudioProcessor>::CComObject<CAudioProcessor>(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    ATL::SafeIncrementReferenceMultiThread((int *)(v7 + 24));
    v8 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 32));
    if ( v8 >= 0 )
    {
      *(_BYTE *)(v7 + 72) = 1;
      v8 = 0;
    }
    v4 = 0;
    if ( v8 < 0 )
      v4 = v8;
    ATL::SafeDecrementReferenceMultiThread((int *)(v7 + 24));
    if ( v4
      || (v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v7)(
                 v7,
                 &GUID_cfbc31a5_5756_48a3_aa45_b6b6dd4c363e,
                 a3)) != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 136LL))(v7, 1LL);
    }
  }
  return v4;
}

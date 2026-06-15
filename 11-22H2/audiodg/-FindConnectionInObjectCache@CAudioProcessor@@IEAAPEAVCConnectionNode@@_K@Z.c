/*
 * XREFs of ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x1400103E0
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E770 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E910 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400104C0 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400107B0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14001CC14 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     ?FindConnectionInList@CAudioProcessor@@IEAAPEAVCConnectionNode@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@_K@Z @ 0x14001048C (-FindConnectionInList@CAudioProcessor@@IEAAPEAVCConnectionNode@@AEAV-$CAtlList@PEAVCConnectionNo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CConnectionNode *__fastcall CAudioProcessor::FindConnectionInObjectCache(CAudioProcessor *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx
  __int64 ConnectionInList; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)this + 99)
                                                                                                + 24LL))(
    *((_QWORD *)this + 99),
    &lpCriticalSection,
    0LL,
    &v7);
  v3 = v7;
  EnterCriticalSection(v7 + 3);
  ConnectionInList = CAudioProcessor::FindConnectionInList(v4, (char *)v3 + 48 * (LOWORD(v3[2].SpinCount) ^ 1LL), a2);
  LeaveCriticalSection(v7 + 3);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (struct CConnectionNode *)ConnectionInList;
}

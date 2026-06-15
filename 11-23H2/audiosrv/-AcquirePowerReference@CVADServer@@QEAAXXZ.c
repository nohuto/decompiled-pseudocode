/*
 * XREFs of ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x180039FE4
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180039B90 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::AcquirePowerReference(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 448);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 448));
  if ( !*((_QWORD *)this + 61) )
  {
    CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, &v3, this);
    std::shared_ptr<std::function<void (void)>>::operator=((_QWORD *)this + 61, &v3);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}

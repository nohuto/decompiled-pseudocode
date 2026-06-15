/*
 * XREFs of ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140054800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x140053660 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140055054 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x140055334 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CpuManager::RegisterProcess(CpuManager *this, void *a2, struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r15
  void *v4; // r12
  CpuManager *v5; // rsi
  DWORD ProcessId; // r13d
  struct _RTL_CRITICAL_SECTION *v7; // r14
  int v8; // edi
  __int64 Node; // rax
  __int64 v10; // rbx
  unsigned int *v12; // rbx
  int v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+38h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-68h]
  char *v16; // [rsp+48h] [rbp-60h]
  char *v17; // [rsp+50h] [rbp-58h]
  __int128 v18; // [rsp+58h] [rbp-50h] BYREF
  ATL::CAtlException *v19; // [rsp+68h] [rbp-40h] BYREF
  int v23; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v14 = 0LL;
  ProcessId = GetProcessId(a2);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  v17 = (char *)v5 + 16;
  v8 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v8 < 0 )
    goto LABEL_12;
  v16 = (char *)v5 + 56;
  Node = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 56,
           ProcessId,
           &v13,
           (unsigned int *)&v23,
           &v18);
  v10 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    goto LABEL_11;
  }
  try
  {
    v18 = 0LL;
    LODWORD(v18) = 1;
    v10 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::SetAt(
            (char *)v5 + 56,
            ProcessId,
            &v18);
    v14 = v10;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v12 = (unsigned int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v23 = *v12;
    v8 = v23;
    v5 = this;
    v10 = v14;
    v7 = v15;
    if ( v23 < 0 )
      goto LABEL_7;
    v3 = a3;
    v4 = a2;
  }
  v8 = (*(__int64 (__fastcall **)(CpuManager *, void *, __int64))(*(_QWORD *)v5 + 80LL))(v5, v4, v10 + 16);
  if ( v8 >= 0 )
  {
LABEL_11:
    *v3 = (struct ProcessRegistrationToken__ *)v10;
    v8 = 0;
    goto LABEL_12;
  }
LABEL_7:
  if ( v10 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v16,
      v10);
  (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_12:
  if ( v7 )
    LeaveCriticalSection(v7);
  return (unsigned int)v8;
}

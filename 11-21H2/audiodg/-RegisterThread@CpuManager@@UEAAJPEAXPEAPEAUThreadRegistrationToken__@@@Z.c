/*
 * XREFs of ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140053360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x1400520FC (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14005384C (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x140053A14 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CpuManager::RegisterThread(CpuManager *this, void *a2, struct ThreadRegistrationToken__ **a3)
{
  struct ThreadRegistrationToken__ **v3; // r14
  void *v4; // r15
  CpuManager *v5; // rdi
  DWORD ThreadId; // r12d
  int v7; // esi
  __int64 Node; // rax
  __int64 v9; // rbx
  unsigned int *v11; // rbx
  int v12; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+38h] [rbp-70h]
  char *v14; // [rsp+40h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp-60h] BYREF
  __int128 v16; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v17; // [rsp+60h] [rbp-48h] BYREF
  int v21; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v13 = 0LL;
  ThreadId = GetThreadId(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16);
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_12;
  v14 = (char *)v5 + 128;
  Node = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 128,
           ThreadId,
           &v12,
           (unsigned int *)&v21,
           &v16);
  v9 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    goto LABEL_11;
  }
  try
  {
    v16 = 0LL;
    LODWORD(v16) = 1;
    v9 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::SetAt(
           (char *)v5 + 128,
           ThreadId,
           &v16);
    v13 = v9;
  }
  catch ( ATL::CAtlException *v17 )
  {
    v11 = (unsigned int *)v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v21 = *v11;
    v7 = v21;
    v5 = this;
    v9 = v13;
    if ( v21 < 0 )
      goto LABEL_7;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, void *, __int64))(*(_QWORD *)v5 + 96LL))(v5, v4, v9 + 16);
  if ( v7 >= 0 )
  {
LABEL_11:
    *v3 = (struct ThreadRegistrationToken__ *)v9;
    v7 = 0;
    goto LABEL_12;
  }
LABEL_7:
  if ( v9 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v14,
      v9);
  (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_12:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  return (unsigned int)v7;
}

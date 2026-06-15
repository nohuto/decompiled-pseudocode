/*
 * XREFs of ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x14002C340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x1400520A4 (-GetCpuManager@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1400521EC (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

__int64 __fastcall GraphStreamingResourceManager::AddToCpuManager(struct CpuManager **this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int CpuManager; // edi
  _QWORD *v7; // r15
  __int64 StartPosition; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rdx
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v17 = v2;
  if ( a2 >= (unsigned int)dword_1400C1418 )
    goto LABEL_2;
  v7 = this + 34;
  CpuManager = GetCpuManager(this + 34);
  if ( CpuManager < 0 )
    goto LABEL_3;
  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 7);
  while ( StartPosition )
  {
    v9 = StartPosition;
    if ( *(_QWORD *)(StartPosition + 32) )
    {
      StartPosition = *(_QWORD *)(StartPosition + 32);
    }
    else
    {
      LODWORD(v10) = *(_DWORD *)(StartPosition + 40) % *((_DWORD *)this + 18);
      do
      {
        v10 = (unsigned int)(v10 + 1);
        StartPosition = 0LL;
        if ( (unsigned int)v10 >= *((_DWORD *)this + 18) )
          break;
        StartPosition = *((_QWORD *)this[7] + v10);
      }
      while ( !StartPosition );
    }
    CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 32LL))(
                   *v7,
                   *(_QWORD *)(v9 + 16),
                   v9 + 24);
    if ( CpuManager < 0 )
      goto LABEL_30;
  }
  v11 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 16);
  while ( v11 )
  {
    v12 = v11;
    if ( *(_QWORD *)(v11 + 32) )
    {
      v11 = *(_QWORD *)(v11 + 32);
    }
    else
    {
      LODWORD(v13) = *(_DWORD *)(v11 + 40) % *((_DWORD *)this + 36);
      do
      {
        v13 = (unsigned int)(v13 + 1);
        v11 = 0LL;
        if ( (unsigned int)v13 >= *((_DWORD *)this + 36) )
          break;
        v11 = *((_QWORD *)this[16] + v13);
      }
      while ( !v11 );
    }
    CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 48LL))(
                   *v7,
                   *(_QWORD *)(v12 + 16),
                   v12 + 24);
    if ( CpuManager < 0 )
      goto LABEL_30;
  }
  v14 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 25);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = v14;
      if ( *(_QWORD *)(v14 + 32) )
      {
        v14 = *(_QWORD *)(v14 + 32);
      }
      else
      {
        LODWORD(v16) = *(_DWORD *)(v14 + 40) % *((_DWORD *)this + 54);
        do
        {
          v16 = (unsigned int)(v16 + 1);
          v14 = 0LL;
          if ( (unsigned int)v16 >= *((_DWORD *)this + 54) )
            break;
          v14 = *((_QWORD *)this[25] + v16);
        }
        while ( !v14 );
      }
      CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 64LL))(
                     *v7,
                     *(_QWORD *)(v15 + 16),
                     v15 + 24);
      if ( CpuManager < 0 )
        break;
      if ( !v14 )
        goto LABEL_2;
    }
LABEL_30:
    (*((void (__fastcall **)(char *))*(this - 1) + 10))((char *)this - 8);
    goto LABEL_3;
  }
LABEL_2:
  CpuManager = 0;
LABEL_3:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  return (unsigned int)CpuManager;
}

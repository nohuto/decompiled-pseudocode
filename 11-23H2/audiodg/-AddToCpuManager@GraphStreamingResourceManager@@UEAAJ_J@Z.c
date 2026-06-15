/*
 * XREFs of ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140025630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x1400535C8 (-GetCpuManager@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140053710 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

__int64 __fastcall GraphStreamingResourceManager::AddToCpuManager(struct CpuManager **this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
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

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  if ( a2 >= (unsigned int)dword_1400CF9AC )
    goto LABEL_2;
  v7 = this + 34;
  CpuManager = GetCpuManager(this + 34);
  if ( CpuManager >= 0 )
  {
    StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 7);
    if ( StartPosition )
    {
      while ( 1 )
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
          break;
        if ( !StartPosition )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v11 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 16);
      if ( v11 )
      {
        while ( 1 )
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
            break;
          if ( !v11 )
            goto LABEL_23;
        }
      }
      else
      {
LABEL_23:
        v14 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 25);
        if ( !v14 )
        {
LABEL_2:
          CpuManager = 0;
          goto LABEL_3;
        }
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
      }
    }
    (*((void (__fastcall **)(char *))*(this - 1) + 10))((char *)this - 8);
  }
LABEL_3:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)CpuManager;
}

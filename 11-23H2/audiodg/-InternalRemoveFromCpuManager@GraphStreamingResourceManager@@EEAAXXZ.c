/*
 * XREFs of ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140054070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140053710 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

void __fastcall GraphStreamingResourceManager::InternalRemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  __int64 StartPosition; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rdx

  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64)this + 64);
  while ( StartPosition )
  {
    v3 = StartPosition;
    if ( *(_QWORD *)(StartPosition + 32) )
    {
      StartPosition = *(_QWORD *)(StartPosition + 32);
    }
    else
    {
      LODWORD(v4) = *(_DWORD *)(StartPosition + 40) % *((_DWORD *)this + 20);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        StartPosition = 0LL;
        if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
          break;
        StartPosition = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v4);
      }
      while ( !StartPosition );
    }
    if ( *(_QWORD *)(v3 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 40LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  v5 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64)this + 136);
  while ( v5 )
  {
    v6 = v5;
    if ( *(_QWORD *)(v5 + 32) )
    {
      v5 = *(_QWORD *)(v5 + 32);
    }
    else
    {
      LODWORD(v7) = *(_DWORD *)(v5 + 40) % *((_DWORD *)this + 38);
      do
      {
        v7 = (unsigned int)(v7 + 1);
        v5 = 0LL;
        if ( (unsigned int)v7 >= *((_DWORD *)this + 38) )
          break;
        v5 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v7);
      }
      while ( !v5 );
    }
    if ( *(_QWORD *)(v6 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 56LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v6 + 24) = 0LL;
    }
  }
  v8 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64)this + 208);
  while ( v8 )
  {
    v9 = v8;
    if ( *(_QWORD *)(v8 + 32) )
    {
      v8 = *(_QWORD *)(v8 + 32);
    }
    else
    {
      LODWORD(v10) = *(_DWORD *)(v8 + 40) % *((_DWORD *)this + 56);
      do
      {
        v10 = (unsigned int)(v10 + 1);
        v8 = 0LL;
        if ( (unsigned int)v10 >= *((_DWORD *)this + 56) )
          break;
        v8 = *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v10);
      }
      while ( !v8 );
    }
    if ( *(_QWORD *)(v9 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 72LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v9 + 24) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)this + 35);
}

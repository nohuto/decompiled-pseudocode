/*
 * XREFs of ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180129060
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180126CD0 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 *     ?GetNextValue@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAAEAVCEndpointResourcePool@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180126D24 (-GetNextValue@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUI.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801287F4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1801288F0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180129254 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18012995C (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::Shutdown(Sarm::CSpatialAudioResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct Sarm::CStreamResource *NextValue; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576);
  CWorkFifo::Shutdown((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
  v3 = (_QWORD *)((char *)this + 232);
  if ( *((_QWORD *)this + 30) && (v4 = 0LL, *((_DWORD *)this + 62)) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*v3 + 8 * v4);
      if ( v5 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 62) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0LL;
  }
  *((_QWORD *)this + 38) = v5;
  NextValue = 0LL;
  if ( v5 )
    NextValue = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(
                                                  (__int64)this + 232,
                                                  (__int64 *)this + 38);
  while ( NextValue )
  {
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, NextValue);
    if ( *((_QWORD *)this + 30) && (v7 = 0LL, *((_DWORD *)this + 62)) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*v3 + 8 * v7);
        if ( v8 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)this + 62) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v8 = 0LL;
    }
    *((_QWORD *)this + 38) = v8;
    NextValue = 0LL;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 104);
      if ( !v9 )
      {
        LODWORD(v10) = *(_DWORD *)(v8 + 112) % *((_DWORD *)this + 62);
        do
        {
          v10 = (unsigned int)(v10 + 1);
          v9 = 0LL;
          if ( (unsigned int)v10 >= *((_DWORD *)this + 62) )
            break;
          v9 = *(_QWORD *)(*v3 + 8 * v10);
        }
        while ( !v9 );
      }
      *((_QWORD *)this + 38) = v9;
      NextValue = (struct Sarm::CStreamResource *)(v8 + 8);
    }
  }
  v11 = (_QWORD *)((char *)this + 152);
  if ( *((_QWORD *)this + 20) && (v12 = 0LL, *((_DWORD *)this + 42)) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*v11 + 8 * v12);
      if ( v13 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 42) )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v13 = 0LL;
  }
  *((_QWORD *)this + 28) = v13;
  v14 = 0LL;
  if ( v13 )
    v14 = (__int64 *)ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNextValue(
                       (__int64)this + 152,
                       (__int64 *)this + 28);
  while ( v14 )
  {
    if ( *v14 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        (__int64)this + 152,
        *v14);
    if ( *((_QWORD *)this + 20) && (v15 = 0LL, *((_DWORD *)this + 42)) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(*v11 + 8 * v15);
        if ( v16 )
          break;
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= *((_DWORD *)this + 42) )
          goto LABEL_33;
      }
    }
    else
    {
LABEL_33:
      v16 = 0LL;
    }
    *((_QWORD *)this + 28) = v16;
    v14 = 0LL;
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 40);
      if ( !v17 )
      {
        LODWORD(v18) = *(_DWORD *)(v16 + 48) % *((_DWORD *)this + 42);
        do
        {
          v18 = (unsigned int)(v18 + 1);
          v17 = 0LL;
          if ( (unsigned int)v18 >= *((_DWORD *)this + 42) )
            break;
          v17 = *(_QWORD *)(*v11 + 8 * v18);
        }
        while ( !v17 );
      }
      *((_QWORD *)this + 28) = v17;
      v14 = (__int64 *)(v16 + 8);
    }
  }
  Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
  v19 = qword_1801C2CB0;
  qword_1801C2CB0 = 0LL;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  *((_BYTE *)this + 144) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
}

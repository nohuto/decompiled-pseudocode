/*
 * XREFs of ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180136AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1801347BC (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 *     ?GetNextValue@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAAEAVCEndpointResourcePool@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180134810 (-GetNextValue@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUI.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180136254 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180136350 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180136CC0 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801373C8 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::Shutdown(Sarm::CSpatialAudioResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  struct Sarm::CStreamResource *NextValue; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  std::_Ref_count_base *v21; // rcx

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
  v6 = (_QWORD *)((char *)this + 304);
  *((_QWORD *)this + 38) = v5;
  NextValue = 0LL;
  if ( v5 )
    NextValue = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(
                                                  (__int64)this + 232,
                                                  (__int64 *)this + 38);
  while ( NextValue )
  {
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, NextValue);
    if ( *((_QWORD *)this + 30) && (v8 = 0LL, *((_DWORD *)this + 62)) )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*v3 + 8 * v8);
        if ( v9 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= *((_DWORD *)this + 62) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v9 = 0LL;
    }
    *v6 = v9;
    NextValue = 0LL;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 104);
      if ( !v10 )
      {
        LODWORD(v11) = *(_DWORD *)(v9 + 112) % *((_DWORD *)this + 62);
        do
        {
          v11 = (unsigned int)(v11 + 1);
          v10 = 0LL;
          if ( (unsigned int)v11 >= *((_DWORD *)this + 62) )
            break;
          v10 = *(_QWORD *)(*v3 + 8 * v11);
        }
        while ( !v10 );
      }
      *v6 = v10;
      NextValue = (struct Sarm::CStreamResource *)(v9 + 8);
    }
  }
  v12 = (_QWORD *)((char *)this + 152);
  if ( *((_QWORD *)this + 20) && (v13 = 0LL, *((_DWORD *)this + 42)) )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(*v12 + 8 * v13);
      if ( v14 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *((_DWORD *)this + 42) )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v14 = 0LL;
  }
  v15 = (_QWORD *)((char *)this + 224);
  *((_QWORD *)this + 28) = v14;
  v16 = 0LL;
  if ( v14 )
    v16 = (__int64 *)ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNextValue(
                       (__int64)this + 152,
                       (__int64 *)this + 28);
  while ( v16 )
  {
    if ( *v16 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        (__int64)this + 152,
        *v16);
    if ( *((_QWORD *)this + 20) && (v17 = 0LL, *((_DWORD *)this + 42)) )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(*v12 + 8 * v17);
        if ( v18 )
          break;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *((_DWORD *)this + 42) )
          goto LABEL_33;
      }
    }
    else
    {
LABEL_33:
      v18 = 0LL;
    }
    *v15 = v18;
    v16 = 0LL;
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 40);
      if ( !v19 )
      {
        LODWORD(v20) = *(_DWORD *)(v18 + 48) % *((_DWORD *)this + 42);
        do
        {
          v20 = (unsigned int)(v20 + 1);
          v19 = 0LL;
          if ( (unsigned int)v20 >= *((_DWORD *)this + 42) )
            break;
          v19 = *(_QWORD *)(*v12 + 8 * v20);
        }
        while ( !v19 );
      }
      *v15 = v19;
      v16 = (__int64 *)(v18 + 8);
    }
  }
  Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
  v21 = qword_1801CFF48;
  qword_1801CFF48 = 0LL;
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  *((_BYTE *)this + 144) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
}

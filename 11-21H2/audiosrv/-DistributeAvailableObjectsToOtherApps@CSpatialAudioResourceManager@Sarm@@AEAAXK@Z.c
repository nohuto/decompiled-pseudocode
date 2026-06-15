/*
 * XREFs of ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180126760
 * Callers:
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180127110 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x180129690 (std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180126CD0 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x18012B618 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  Sarm::CStreamResource *NextValue; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx

  v3 = (char *)this + 232;
  if ( *((_QWORD *)this + 30) && (v4 = 0LL, *((_DWORD *)this + 62)) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v4);
      if ( v5 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)v3 + 4) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0LL;
  }
  *((_QWORD *)v3 + 9) = v5;
  NextValue = 0LL;
  if ( v5 )
    NextValue = (Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(v3);
  while ( NextValue )
  {
    if ( *((_DWORD *)NextValue + 13) != a2 )
      Sarm::CStreamResource::GrantAvailableObjects(NextValue);
    NextValue = 0LL;
    v7 = *((_QWORD *)v3 + 9);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 104);
      if ( !v8 )
      {
        LODWORD(v9) = *(_DWORD *)(v7 + 112) % *((_DWORD *)v3 + 4);
        do
        {
          v9 = (unsigned int)(v9 + 1);
          v8 = 0LL;
          if ( (unsigned int)v9 >= *((_DWORD *)v3 + 4) )
            break;
          v8 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v9);
        }
        while ( !v8 );
      }
      *((_QWORD *)v3 + 9) = v8;
      NextValue = (Sarm::CStreamResource *)(v7 + 8);
    }
  }
}

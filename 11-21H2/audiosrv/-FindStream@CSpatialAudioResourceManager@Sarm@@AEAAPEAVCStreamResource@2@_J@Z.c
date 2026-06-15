/*
 * XREFs of ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180126898
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1801271B4 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x1801272D4 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180127A60 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180126CD0 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 */

// Hidden C++ exception states: #wind=1
struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::FindStream(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct Sarm::CStreamResource *result; // rax
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
  result = 0LL;
  if ( v5 )
    result = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(v3);
  while ( result && *((_QWORD *)result + 5) != a2 )
  {
    result = 0LL;
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
      result = (struct Sarm::CStreamResource *)(v7 + 8);
    }
  }
  return result;
}

/*
 * XREFs of ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180134730
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134A68 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134B80 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801363D4 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x180137100 (std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1801347BC (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 */

struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::GetNextStream(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  char *v3; // rdi
  struct Sarm::CStreamResource *result; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = (char *)this + 232;
  result = 0LL;
  v5 = (__int64 *)((char *)this + 304);
  if ( *((_QWORD *)this + 38) )
    result = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(
                                               (char *)this + 232,
                                               (char *)this + 304);
  while ( result && *((_DWORD *)result + 13) != a2 )
  {
    result = 0LL;
    v6 = *v5;
    if ( *v5 )
    {
      v7 = *(_QWORD *)(v6 + 104);
      if ( !v7 )
      {
        LODWORD(v8) = *(_DWORD *)(v6 + 112) % *((_DWORD *)v3 + 4);
        do
        {
          v8 = (unsigned int)(v8 + 1);
          v7 = 0LL;
          if ( (unsigned int)v8 >= *((_DWORD *)v3 + 4) )
            break;
          v7 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v8);
        }
        while ( !v7 );
      }
      *v5 = v7;
      result = (struct Sarm::CStreamResource *)(v6 + 8);
    }
  }
  return result;
}

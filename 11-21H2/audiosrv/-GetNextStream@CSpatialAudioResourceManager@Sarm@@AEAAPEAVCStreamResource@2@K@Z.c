/*
 * XREFs of ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180126C50
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180126FF8 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180127110 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180128974 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x180129690 (std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180126CD0 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 */

struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::GetNextStream(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  char *v3; // rbx
  struct Sarm::CStreamResource *result; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = (char *)this + 232;
  result = 0LL;
  if ( *((_QWORD *)this + 38) )
    result = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue((char *)this + 232);
  while ( result && *((_DWORD *)result + 13) != a2 )
  {
    result = 0LL;
    v5 = *((_QWORD *)v3 + 9);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      if ( !v6 )
      {
        LODWORD(v7) = *(_DWORD *)(v5 + 112) % *((_DWORD *)v3 + 4);
        do
        {
          v7 = (unsigned int)(v7 + 1);
          v6 = 0LL;
          if ( (unsigned int)v7 >= *((_DWORD *)v3 + 4) )
            break;
          v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v7);
        }
        while ( !v6 );
      }
      *((_QWORD *)v3 + 9) = v6;
      result = (struct Sarm::CStreamResource *)(v5 + 8);
    }
  }
  return result;
}

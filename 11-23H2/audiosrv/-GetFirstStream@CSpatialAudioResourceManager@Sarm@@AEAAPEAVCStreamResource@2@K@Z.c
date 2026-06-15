/*
 * XREFs of ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1801345B4
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134A68 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134AC8 (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134B80 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801363D4 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x180137100 (std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1801347BC (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 */

struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::GetFirstStream(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  struct Sarm::CStreamResource *result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx

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
  v6 = (__int64 *)(v3 + 72);
  *((_QWORD *)v3 + 9) = v5;
  result = 0LL;
  if ( v5 )
    result = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(
                                               v3,
                                               v3 + 72);
  while ( result && *((_DWORD *)result + 13) != a2 )
  {
    result = 0LL;
    v8 = *v6;
    if ( *v6 )
    {
      v9 = *(_QWORD *)(v8 + 104);
      if ( !v9 )
      {
        LODWORD(v10) = *(_DWORD *)(v8 + 112) % *((_DWORD *)v3 + 4);
        do
        {
          v10 = (unsigned int)(v10 + 1);
          v9 = 0LL;
          if ( (unsigned int)v10 >= *((_DWORD *)v3 + 4) )
            break;
          v9 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v10);
        }
        while ( !v9 );
      }
      *v6 = v9;
      result = (struct Sarm::CStreamResource *)(v8 + 8);
    }
  }
  return result;
}

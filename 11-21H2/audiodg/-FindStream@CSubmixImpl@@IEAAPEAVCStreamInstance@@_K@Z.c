/*
 * XREFs of ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14001E544
 * Callers:
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14001E4C0 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14001E5B0 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140024860 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140062790 (-GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProt.c)
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x1400629D0 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z.c)
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140062D80 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x14001E584 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 */

struct CStreamInstance *__fastcall CSubmixImpl::FindStream(CSubmixImpl *this, __int64 a2)
{
  struct CStreamInstance *result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 9);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = *(struct CStreamInstance **)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                           this,
                                           &v4);
    if ( *((_QWORD *)result + 1) == a2 )
      break;
    if ( !v4 )
      return 0LL;
  }
  return result;
}

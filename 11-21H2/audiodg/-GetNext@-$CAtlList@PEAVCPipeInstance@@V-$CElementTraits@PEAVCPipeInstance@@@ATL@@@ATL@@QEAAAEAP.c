/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAPEAVCPipeInstance@@AEAPEAU__POSITION@@@Z @ 0x140019A28
 * Callers:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14001962C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140019820 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001D2A0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x1400245C0 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x14005C664 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14005DDAC (-DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@P.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::GetNext(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}

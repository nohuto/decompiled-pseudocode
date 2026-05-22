/*
 * XREFs of ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800E7790
 * Callers:
 *     ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x1800E7780 (-GetInputSink@DWMInputTarget@@UEBAPEAXXZ.c)
 *     ?IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z @ 0x1800E78F0 (-IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z.c)
 * Callees:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800024AC (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

void *__fastcall DWMInputTarget::GetInputSinkHandle(DWMInputTarget *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 15);
  result = 0LL;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 480) )
      return LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)(v1 + 48));
  }
  return result;
}

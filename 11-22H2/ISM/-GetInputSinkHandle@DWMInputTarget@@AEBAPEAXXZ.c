/*
 * XREFs of ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x18010F0A0
 * Callers:
 *     ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x18010F090 (-GetInputSink@DWMInputTarget@@UEBAPEAXXZ.c)
 *     ?IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z @ 0x18010F200 (-IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z.c)
 * Callees:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800717D4 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
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

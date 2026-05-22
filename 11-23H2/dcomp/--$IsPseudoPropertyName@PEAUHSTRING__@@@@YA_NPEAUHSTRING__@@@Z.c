/*
 * XREFs of ??$IsPseudoPropertyName@PEAUHSTRING__@@@@YA_NPEAUHSTRING__@@@Z @ 0x180169984
 * Callers:
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 * Callees:
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z @ 0x18000C820 (-CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z.c)
 */

char __fastcall IsPseudoPropertyName<HSTRING__ *>(HSTRING a1)
{
  char v2; // bl

  v2 = 0;
  if ( !(unsigned int)CompareAnimationNames(a1, L"StartingValue")
    || !(unsigned int)CompareAnimationNames(a1, L"CurrentValue")
    || !(unsigned int)CompareAnimationNames(a1, L"FinalValue") )
  {
    return 1;
  }
  return v2;
}

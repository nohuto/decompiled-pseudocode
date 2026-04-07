/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x18010DEB0
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18010DEDC (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18010DF6C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_180121350;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 9 )
      return result;
  }
  return 1;
}

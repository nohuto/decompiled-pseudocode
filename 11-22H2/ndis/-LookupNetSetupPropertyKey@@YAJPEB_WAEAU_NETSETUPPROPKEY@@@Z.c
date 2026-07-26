/*
 * XREFs of ?LookupNetSetupPropertyKey@@YAJPEB_WAEAU_NETSETUPPROPKEY@@@Z @ 0x1C0140418
 * Callers:
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01405D0 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LookupNetSetupPropertyKey(const wchar_t *Str1, struct _NETSETUPPROPKEY *a2)
{
  __int128 v4; // xmm0
  int v5; // eax

  if ( !_wcsicmp(Str1, L"NETSETUPPKEY_Operational_ExecutionContextProfile") )
  {
    v4 = xmmword_1C00E4BA0;
    v5 = 400;
LABEL_5:
    *(_OWORD *)a2 = v4;
    *((_DWORD *)a2 + 4) = v5;
    return 0LL;
  }
  if ( !_wcsicmp(Str1, L"NETSETUPPKEY_Operational_ExecutionContextProfileSource") )
  {
    v4 = xmmword_1C00E4BB8;
    v5 = 402;
    goto LABEL_5;
  }
  return 3221226021LL;
}

/*
 * XREFs of PspWow64SetupUserProcessAddressSpace @ 0x14032A3BC
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1407A144C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64ThunkProcessParameters @ 0x140329A7C (PspWow64ThunkProcessParameters.c)
 */

NTSTATUS __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  NTSTATUS result; // eax
  __int16 v4; // cx
  __int64 v5; // rcx

  v2 = *(__int64 **)(a1 + 1408);
  result = 0;
  if ( v2 )
  {
    v4 = *(_WORD *)(a1 + 2412);
    if ( v4 == 332 || v4 == 452 )
    {
      v5 = *v2;
      *(_DWORD *)(a2 + 228) = *v2;
      return PspWow64ThunkProcessParameters(v5, *(unsigned int **)(a2 + 208), (_DWORD *)(a2 + 224));
    }
  }
  return result;
}

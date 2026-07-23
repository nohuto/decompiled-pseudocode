/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x14071334C
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x1407124AC (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140712E60 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1407CD630 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085C0AC (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SeReleaseSid @ 0x1406BB2D4 (SeReleaseSid.c)
 */

void __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( *a2 )
          ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else if ( *a2 )
    {
      SeReleaseSid(*a2, a3, 0);
    }
  }
  else if ( *a2 )
  {
    ObfDereferenceObject(*a2);
  }
}

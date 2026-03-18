/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x14071313C
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14071229C (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140712C50 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1407CD360 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085BE6C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     SeReleaseSid @ 0x1406BB2A4 (SeReleaseSid.c)
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

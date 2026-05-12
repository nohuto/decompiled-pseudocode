/*
 * XREFs of StorBuildMFNDGetSetFeatureCommand @ 0x1C003BCBC
 * Callers:
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSetMFNDOperationInfo @ 0x1C0092810 (StorSetMFNDOperationInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall StorBuildMFNDGetSetFeatureCommand(__int64 a1, char a2, char a3, __int64 a4, char a5, char a6, char a7)
{
  char result; // al

  *(_BYTE *)(a1 + 40) = a3;
  if ( a2 )
  {
    *(_BYTE *)a1 = 10;
  }
  else
  {
    *(_BYTE *)a1 = 9;
    if ( a3 == -46 )
    {
      *(_DWORD *)(a1 + 44) &= ~1u;
    }
    else if ( a3 == -47 )
    {
      result = a7;
      *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 44) & 0xFFFFFFE0 | a5 & 0xF | (16 * (a6 & 1));
      *(_BYTE *)(a1 + 45) = a7;
    }
  }
  return result;
}

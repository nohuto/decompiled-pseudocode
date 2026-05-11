/*
 * XREFs of PinConflictingFormats @ 0x1C002C13C
 * Callers:
 *     PinBuildDescriptors @ 0x1C003BE74 (PinBuildDescriptors.c)
 * Callees:
 *     <none>
 */

bool __fastcall PinConflictingFormats(__int64 a1)
{
  __int64 *v1; // rbx
  bool v2; // r9
  unsigned int v3; // r11d
  __int64 v4; // r10
  __int64 i; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = *(__int64 **)(a1 + 40);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *v1;
  for ( i = (unsigned int)((*(_DWORD *)(*v1 + 4) & 2) != 0) + 1;
        (unsigned int)i < v3 && !v2;
        i = ((*(_DWORD *)(v6 + 4) & 2) != 0) + 1 + (unsigned int)i )
  {
    v6 = v1[i];
    v7 = *(_QWORD *)(v4 + 32) - *(_QWORD *)(v6 + 32);
    if ( !v7 )
      v7 = *(_QWORD *)(v4 + 40) - *(_QWORD *)(v6 + 40);
    v2 = v7 != 0;
  }
  return v2;
}

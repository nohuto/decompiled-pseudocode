/*
 * XREFs of RtlIsElevatedRid @ 0x180085C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlIsElevatedRid(_BYTE *a1)
{
  int v1; // edx
  __int64 v2; // r8
  _DWORD *i; // rax

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( (a1[8] & 0x30) != 0 )
    return 0;
  v2 = *(_QWORD *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 1LL) || (unsigned int)(*(_DWORD *)(v2 + 8) - 80) <= 0x1F )
    return 0;
  for ( i = &unk_180146300; *(_DWORD *)(v2 + 4LL * ((unsigned int)*(unsigned __int8 *)(v2 + 1) - 1) + 8) != *i; ++i )
  {
    if ( (unsigned int)++v1 >= 0x13 )
      return 0;
  }
  return 1;
}

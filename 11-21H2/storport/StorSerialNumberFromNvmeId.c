/*
 * XREFs of StorSerialNumberFromNvmeId @ 0x1C0065938
 * Callers:
 *     StorBuildNVMeSerialNumber @ 0x1C0065824 (StorBuildNVMeSerialNumber.c)
 * Callees:
 *     RaidHexFromUchar @ 0x1C00657F4 (RaidHexFromUchar.c)
 */

__int64 __fastcall StorSerialNumberFromNvmeId(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r11
  __int64 v6; // rbx
  unsigned int v7; // r10d
  int v8; // r10d
  __int64 v9; // rbx
  int v10; // r9d
  __int64 v11; // r11
  int v12; // r10d
  __int64 v13; // r10
  __int64 v14; // rax

  v4 = a3;
  if ( a4 < 0x28 )
    return 3238002694LL;
  v6 = 0LL;
  v7 = 0;
  do
  {
    RaidHexFromUchar(*(_BYTE *)(v6 + a1), (_BYTE *)(v4 + v7), a4 - v7);
    v9 = (unsigned int)(v6 + 1);
    RaidHexFromUchar(*(_BYTE *)(v9 + a1), (_BYTE *)(v11 + (unsigned int)(v8 + 2)), v10 - (v8 + 2));
    v13 = (unsigned int)(v12 + 2);
    v6 = (unsigned int)(v9 + 1);
    v14 = (unsigned int)v13;
    *(_BYTE *)(v13 + v4) = 95;
    v7 = v13 + 1;
  }
  while ( (unsigned int)v6 < 0xF );
  if ( v7 )
  {
    if ( v7 <= a4 )
      *(_BYTE *)(v14 + v4) = 46;
  }
  return 0LL;
}

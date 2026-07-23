/*
 * XREFs of sub_1406CAB00 @ 0x1406CAB00
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406CAB00(__int64 a1, int *a2)
{
  char v3; // al
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx

  if ( *(_QWORD *)(a1 + 1408) && *(_WORD *)(a1 + 2412) == 332 )
  {
    v3 = *(_BYTE *)(a1 + 643);
    v4 = v3 & 1 | 2;
    if ( (v3 & 2) == 0 )
      v4 = v3 & 1;
    v5 = v4 | 4;
    if ( (v3 & 4) == 0 )
      v5 = v4;
    v6 = v5 | 8;
    if ( (v3 & 8) == 0 )
      v6 = v5;
    v7 = v6 | 0x10;
    if ( (v3 & 0x10) == 0 )
      v7 = v6;
    v8 = v7 | 0x20;
    if ( (v3 & 0x20) == 0 )
      v8 = v7;
    v9 = v8 | 0x40;
    if ( (v3 & 0x40) == 0 )
      v9 = v8;
    *a2 = v9;
  }
  else
  {
    *a2 = 13;
  }
  return 0LL;
}

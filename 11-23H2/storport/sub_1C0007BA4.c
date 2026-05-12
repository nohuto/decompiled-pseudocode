/*
 * XREFs of sub_1C0007BA4 @ 0x1C0007BA4
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C0016D88 @ 0x1C0016D88 (sub_1C0016D88.c)
 *     sub_1C00174D0 @ 0x1C00174D0 (sub_1C00174D0.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     sub_1C00266DA @ 0x1C00266DA (sub_1C00266DA.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C00551E0 @ 0x1C00551E0 (sub_1C00551E0.c)
 *     sub_1C00554A8 @ 0x1C00554A8 (sub_1C00554A8.c)
 *     sub_1C005F5A4 @ 0x1C005F5A4 (sub_1C005F5A4.c)
 *     sub_1C0061378 @ 0x1C0061378 (sub_1C0061378.c)
 *     sub_1C0061F7C @ 0x1C0061F7C (sub_1C0061F7C.c)
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 *     DoScreenSave_0 @ 0x1C0062D50 (DoScreenSave_0.c)
 *     sub_1C00630BC @ 0x1C00630BC (sub_1C00630BC.c)
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C0007BA4(__int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 v4; // r10
  unsigned int v6; // ebx
  int v7; // edi
  __int64 v8; // rax
  bool v10; // zf

  v4 = 0LL;
  if ( a3 != 1 )
    return sub_1C0007CF4(64LL, 88LL, 1918067026LL, a1);
  if ( a2 > 0x17 )
  {
    if ( a2 == 32 )
      goto LABEL_6;
    if ( a2 != 37 )
    {
      if ( a2 == 38 || a2 == 39 || a2 == 42 )
        goto LABEL_6;
      v10 = a2 == 43;
LABEL_29:
      if ( v10 )
        goto LABEL_6;
      return v4;
    }
    goto LABEL_14;
  }
  if ( a2 == 23 )
  {
LABEL_14:
    v6 = 168;
    goto LABEL_15;
  }
  if ( a2 )
  {
    if ( a2 == 2 || a2 == 9 )
      goto LABEL_6;
    if ( a2 != 10 )
    {
      if ( a2 != 16 )
      {
        v10 = a2 == 19;
        goto LABEL_29;
      }
LABEL_6:
      v6 = 144;
      v7 = 0;
      goto LABEL_7;
    }
    v6 = 232;
LABEL_15:
    v7 = 1;
LABEL_7:
    v8 = sub_1C0007CF4(64LL, v6, 1918067026LL, a1);
    v4 = v8;
    if ( v8 )
    {
      *(_BYTE *)(v8 + 2) = 40;
      *(_WORD *)v8 = 8;
      *(_DWORD *)(v8 + 8) = 1397899864;
      *(_DWORD *)(v8 + 12) = 1;
      *(_DWORD *)(v8 + 16) = v6;
      *(_DWORD *)(v8 + 20) = a2;
      *(_WORD *)(v8 + 36) = 2;
      *(_DWORD *)(v8 + 52) = 128;
      *(_DWORD *)(v8 + 56) = v7;
      *(_WORD *)(v8 + 128) = 1;
      *(_DWORD *)(v8 + 132) = 4;
      if ( v7 )
        *(_DWORD *)(v8 + 120) = 144;
    }
    return v4;
  }
  if ( (a4 & 1) != 0 )
  {
    v6 = 184;
    goto LABEL_15;
  }
  return 0LL;
}

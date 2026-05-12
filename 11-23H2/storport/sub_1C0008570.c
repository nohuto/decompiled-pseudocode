/*
 * XREFs of sub_1C0008570 @ 0x1C0008570
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0013370 @ 0x1C0013370 (sub_1C0013370.c)
 *     sub_1C00134E0 @ 0x1C00134E0 (sub_1C00134E0.c)
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C0014050 @ 0x1C0014050 (sub_1C0014050.c)
 *     sub_1C00145A0 @ 0x1C00145A0 (sub_1C00145A0.c)
 *     sub_1C0014870 @ 0x1C0014870 (sub_1C0014870.c)
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 *     sub_1C001ACF0 @ 0x1C001ACF0 (sub_1C001ACF0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C003F1F0 @ 0x1C003F1F0 (sub_1C003F1F0.c)
 *     sub_1C003F260 @ 0x1C003F260 (sub_1C003F260.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0058AEC @ 0x1C0058AEC (sub_1C0058AEC.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0008570(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0x15 )
  {
    if ( v1 == 21 )
      return 3221225488LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 0LL;
    v3 = v2 - 4;
    if ( !v3 )
      return 2147483665LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 3221225488LL;
    v6 = v4 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return 3221225653LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 3221225629LL;
      v9 = v8 - 1;
      if ( !v9 )
        return 3221225653LL;
      v10 = v9 - 6;
      if ( v10 )
      {
        if ( v10 == 1 )
          return 2147483653LL;
        return 3221225861LL;
      }
    }
    return 3221225664LL;
  }
  v11 = v1 - 22;
  if ( !v11 )
    return 3221225473LL;
  v12 = v11 - 10;
  if ( !v12 )
    return 3221225664LL;
  v13 = v12 - 1;
  if ( !v13 )
    return 3221225664LL;
  v14 = v13 - 1;
  if ( !v14 )
    return 3221225488LL;
  v15 = v14 - 4;
  if ( !v15 )
    return 3221225626LL;
  v16 = v15 - 1;
  if ( !v16 )
    return 3221225473LL;
  v17 = v16 - 1;
  if ( !v17 )
    return 3221225485LL;
  if ( v17 != 16 )
    return 3221225861LL;
  return 3221226762LL;
}

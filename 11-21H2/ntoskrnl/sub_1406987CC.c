/*
 * XREFs of sub_1406987CC @ 0x1406987CC
 * Callers:
 *     sub_1406986FC @ 0x1406986FC (sub_1406986FC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406988E0 @ 0x1406988E0 (sub_1406988E0.c)
 */

__int64 __fastcall sub_1406987CC(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v20[10]; // [rsp+58h] [rbp-31h] BYREF

  v8 = *(_QWORD *)&qword_140D00AC0;
  memset(v20, 0, sizeof(v20));
  v12 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 488LL);
  LODWORD(v20[7]) = 0;
  v20[3] = a5;
  v20[4] = a6;
  LODWORD(v20[5]) = a7;
  v20[6] = a8;
  v20[2] = a4;
  if ( v12 )
  {
    v13 = sub_14042A5E0(*(_QWORD *)&qword_140D00AC0, a2);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v14 = sub_1406988E0(v8, a2, a3, v20[2], v20[3], v20[4], v20[5], v20[6], v20[7]);
  v15 = v14;
  if ( !v12 )
    return v15;
  LODWORD(v20[0]) = v14;
  v17 = sub_14042A5E0(v8, a2);
  v18 = v17;
  if ( v17 == -1073741822 )
    return v15;
  if ( v17 == -1073741536 )
    return LODWORD(v20[0]);
  v19 = v15;
  if ( v18 )
    return (unsigned int)-1073741595;
  return v19;
}

/*
 * XREFs of sub_1406BDAE4 @ 0x1406BDAE4
 * Callers:
 *     sub_1406BCC20 @ 0x1406BCC20 (sub_1406BCC20.c)
 *     sub_1406BD17C @ 0x1406BD17C (sub_1406BD17C.c)
 *     sub_1406BD994 @ 0x1406BD994 (sub_1406BD994.c)
 *     sub_14076B788 @ 0x14076B788 (sub_14076B788.c)
 *     sub_14077386C @ 0x14077386C (sub_14077386C.c)
 *     sub_140778DA4 @ 0x140778DA4 (sub_140778DA4.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 *     sub_140A27340 @ 0x140A27340 (sub_140A27340.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BDC58 @ 0x1406BDC58 (sub_1406BDC58.c)
 */

__int64 __fastcall sub_1406BDAE4(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v10; // r12
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  _QWORD v19[11]; // [rsp+50h] [rbp-71h] BYREF

  memset(v19, 0, sizeof(v19));
  v10 = *(_QWORD *)(a1 + 504);
  LODWORD(v19[7]) = 0;
  LODWORD(v19[3]) = a4;
  v19[2] = a3;
  v19[5] = a6;
  v19[6] = a7;
  v19[4] = a5;
  if ( v10 )
  {
    v11 = sub_14042A5E0(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v19[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = sub_1406BDC58(a1, a2, v19[2], v19[3], v19[4], v19[5], v19[6], v19[7]);
  v13 = v12;
  if ( !v10 )
    return v13;
  LODWORD(v19[0]) = v12;
  v14 = sub_14042A5E0(a1, a2);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v19[0]);
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}

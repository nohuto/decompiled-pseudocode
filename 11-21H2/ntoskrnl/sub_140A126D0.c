/*
 * XREFs of sub_140A126D0 @ 0x140A126D0
 * Callers:
 *     sub_140A10EB0 @ 0x140A10EB0 (sub_140A10EB0.c)
 *     sub_140A11CF0 @ 0x140A11CF0 (sub_140A11CF0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140A13228 @ 0x140A13228 (sub_140A13228.c)
 */

__int64 __fastcall sub_140A126D0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v11; // ebp
  unsigned int v13; // esi
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned int v16; // r14d
  unsigned int v17; // eax
  _WORD *v18; // rax
  _WORD *v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ebp
  unsigned int v28; // eax
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v11 = a2;
  v30 = 0LL;
  v31 = 0LL;
  *a5 = 0;
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  *a4 = 0LL;
  v16 = 0;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  v17 = sub_140792CCC(a1, a2, 24577);
  if ( !v17 )
    goto LABEL_25;
  v18 = (_WORD *)sub_140842A24(a1, v17);
  v19 = v18;
  if ( !v18 || !*v18 )
    goto LABEL_25;
  v20 = sub_140792CCC(a1, v11, 24624);
  if ( v20 )
    v30 = sub_140842A24(a1, v20);
  v21 = sub_140792CCC(a1, v11, 16465);
  if ( !v21 )
    goto LABEL_15;
  v22 = sub_1407ECF5C(a1, v21, 0);
  v13 = v22;
  if ( !v22 )
    goto LABEL_25;
  if ( v22 <= 2 )
    goto LABEL_23;
  switch ( v22 )
  {
    case 3u:
      v26 = sub_140792CCC(a1, v11, 36882);
      v27 = v26;
      if ( v26 )
      {
        v15 = sub_140A13228(a1, v26);
        if ( v15 )
        {
          v24 = (unsigned int)sub_14079422C(a1, v27);
          goto LABEL_16;
        }
      }
      goto LABEL_25;
    case 4u:
      v25 = sub_140792CCC(a1, v11, 16466);
      if ( v25 )
      {
        v10 = sub_1407ECF5C(a1, v25, 0);
        v24 = 0LL;
        goto LABEL_16;
      }
      goto LABEL_25;
    case 7u:
LABEL_23:
      v28 = sub_140792CCC(a1, v11, 24625);
      if ( v28 )
      {
        v14 = sub_140842A24(a1, v28);
        if ( v14 )
          goto LABEL_15;
      }
LABEL_25:
      sub_1406E0C3C(1LL, (__int64)"SdbpGetRegistryMatchingAttributes");
      return v16;
  }
  if ( v22 != 11 )
    goto LABEL_25;
  v23 = sub_140792CCC(a1, v11, 20507);
  if ( !v23 )
    goto LABEL_25;
  v31 = sub_140842904(a1, v23, 0LL);
LABEL_15:
  v24 = 0LL;
LABEL_16:
  v16 = 1;
  *a3 = v19;
  *a4 = v30;
  *a5 = v13;
  *a6 = v14;
  *a7 = v10;
  *a8 = v31;
  *a9 = v15;
  *a10 = v24;
  return v16;
}

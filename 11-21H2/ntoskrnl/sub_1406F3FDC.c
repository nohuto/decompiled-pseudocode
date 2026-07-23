/*
 * XREFs of sub_1406F3FDC @ 0x1406F3FDC
 * Callers:
 *     MmMapViewInSystemSpace @ 0x1406DEFB0 (MmMapViewInSystemSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x1406DF660 (MmMapViewInSystemSpaceEx.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     sub_140832C70 @ 0x140832C70 (sub_140832C70.c)
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     ntoskrnl_30 @ 0x140938B40 (ntoskrnl_30.c)
 *     sub_1409AB9D8 @ 0x1409AB9D8 (sub_1409AB9D8.c)
 *     sub_1409AC998 @ 0x1409AC998 (sub_1409AC998.c)
 *     sub_1409F352C @ 0x1409F352C (sub_1409F352C.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     sub_14025E274 @ 0x14025E274 (sub_14025E274.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_140287450 @ 0x140287450 (sub_140287450.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 */

__int64 __fastcall sub_1406F3FDC(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  int v14; // ebx
  ULONG_PTR v16[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v16[0] = 0LL;
  v10 = sub_140287970(a1);
  sub_140287450(v10);
  v11 = *a3;
  if ( !*a3 )
  {
    *(_WORD *)a4 = 0;
    v13 = *(_QWORD *)(a1 + 48) - *a4;
    *a3 = v13;
    goto LABEL_5;
  }
  v12 = (unsigned __int16)*(_DWORD *)a4;
  if ( v11 + v12 >= v12 )
  {
    *a3 = v11 + v12;
    *(_WORD *)a4 = 0;
    v13 = *a3;
    if ( *a3 <= *(_QWORD *)(a1 + 48) - *a4 )
    {
LABEL_5:
      v14 = sub_14026D460(v13, a1, a4, a5, a6, v16);
      if ( v14 >= 0 )
      {
        *a2 = v16[0];
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v14 = -1073741793;
LABEL_10:
  sub_14025E274(v10);
  return (unsigned int)v14;
}

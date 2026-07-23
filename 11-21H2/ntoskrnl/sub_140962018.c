/*
 * XREFs of sub_140962018 @ 0x140962018
 * Callers:
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 * Callees:
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int16 __fastcall sub_140962018(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int16 a8,
        unsigned __int16 *a9)
{
  __int64 v9; // rbx
  unsigned __int16 v10; // r9
  int v11; // eax

  v9 = a1 + 72;
  *(_DWORD *)a1 = 23068695;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 48) = a6 - 2;
  *(_DWORD *)(a1 + 64) = a7;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 40) = a4 + a5;
  *(_WORD *)(a1 + 344) = a8;
  *(_QWORD *)(a1 + 32) = a4;
  *(_BYTE *)(a1 + 346) = 0;
  *(_QWORD *)(a1 + 72) = 2097153LL;
  memset((void *)(a1 + 80), 0, 0x100uLL);
  if ( !a9 )
    goto LABEL_5;
  v10 = 0;
  if ( v9 )
    v10 = *(_WORD *)(v9 + 2);
  v11 = sub_1402FF140(a9, (unsigned __int16 *)dword_140D06E40, (_BYTE *)v9, v10);
  if ( !v11 )
LABEL_5:
    LOWORD(v11) = sub_140300030(v9, *(_WORD *)(v9 + 2), (unsigned __int16 *)dword_140D06E40);
  return v11;
}

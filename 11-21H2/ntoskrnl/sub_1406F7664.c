/*
 * XREFs of sub_1406F7664 @ 0x1406F7664
 * Callers:
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 * Callees:
 *     sub_1406CF50C @ 0x1406CF50C (sub_1406CF50C.c)
 *     sub_1406F5F44 @ 0x1406F5F44 (sub_1406F5F44.c)
 *     sub_1406F7778 @ 0x1406F7778 (sub_1406F7778.c)
 *     sub_1406F77DC @ 0x1406F77DC (sub_1406F77DC.c)
 */

__int64 __fastcall sub_1406F7664(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rdi
  _BOOL8 v13; // r9
  __int64 result; // rax
  __int16 v15; // cx
  __int64 v16; // rdx
  int v17; // ecx

  v10 = sub_1406F7778(a1, a3, a5);
  v12 = v10;
  v13 = (a7 & 2) == 0;
  switch ( a6 )
  {
    case 1:
      result = sub_1406F77DC(v10, (unsigned int)(a6 - 1), v11, v13);
      break;
    case 2:
      result = sub_1406CF50C(v10, (unsigned int)(a6 - 2), v11);
      break;
    case 3:
      result = sub_1406F5F44(v10, a3, a4, v13);
      break;
    default:
      result = 3221225473LL;
      break;
  }
  if ( *(_QWORD *)(a1 + 1408) )
  {
    v15 = *(_WORD *)(a1 + 2412);
    if ( (v15 == 332 || v15 == 452) && (int)result >= 0 )
    {
      v16 = *(_QWORD *)(a1 + 1680);
      v17 = v16 + 424;
      if ( v12 != v16 + 424 )
        return sub_1406F5F44(v17, a3, a4, 0);
      v17 = v16 + 456;
      if ( a3 <= 0x100000000LL )
      {
        if ( a4 > 0x100000000LL )
          a4 = 0x100000000LL;
        return sub_1406F5F44(v17, a3, a4, 0);
      }
    }
  }
  return result;
}

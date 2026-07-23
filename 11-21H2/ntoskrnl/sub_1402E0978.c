/*
 * XREFs of sub_1402E0978 @ 0x1402E0978
 * Callers:
 *     sub_140244198 @ 0x140244198 (sub_140244198.c)
 *     sub_1403C624C @ 0x1403C624C (sub_1403C624C.c)
 *     sub_1405DBB20 @ 0x1405DBB20 (sub_1405DBB20.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_140767130 @ 0x140767130 (sub_140767130.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 *     sub_14078CB04 @ 0x14078CB04 (sub_14078CB04.c)
 *     sub_14078D1A8 @ 0x14078D1A8 (sub_14078D1A8.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_14084E03C @ 0x14084E03C (sub_14084E03C.c)
 *     sub_14084FF94 @ 0x14084FF94 (sub_14084FF94.c)
 *     sub_140927394 @ 0x140927394 (sub_140927394.c)
 *     sub_140949470 @ 0x140949470 (sub_140949470.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 *     sub_1409DE4C4 @ 0x1409DE4C4 (sub_1409DE4C4.c)
 *     sub_1409E7AD4 @ 0x1409E7AD4 (sub_1409E7AD4.c)
 *     sub_140A314B0 @ 0x140A314B0 (sub_140A314B0.c)
 *     sub_140B30BB0 @ 0x140B30BB0 (sub_140B30BB0.c)
 *     sub_140B53940 @ 0x140B53940 (sub_140B53940.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E0978(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  __int16 v6; // ax
  _WORD *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(_WORD *)((char *)a1 + v5);
      if ( !v6 )
        break;
      *a1++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = a1 - 1;
    if ( v3 )
      v7 = a1;
    *v7 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}

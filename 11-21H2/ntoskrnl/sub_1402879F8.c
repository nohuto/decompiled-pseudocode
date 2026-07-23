/*
 * XREFs of sub_1402879F8 @ 0x1402879F8
 * Callers:
 *     sub_14023F590 @ 0x14023F590 (sub_14023F590.c)
 *     sub_14023F658 @ 0x14023F658 (sub_14023F658.c)
 *     sub_14023FA50 @ 0x14023FA50 (sub_14023FA50.c)
 *     sub_140286AB0 @ 0x140286AB0 (sub_140286AB0.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14058A4E8 @ 0x14058A4E8 (sub_14058A4E8.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058B784 @ 0x14058B784 (sub_14058B784.c)
 *     sub_140597ED0 @ 0x140597ED0 (sub_140597ED0.c)
 *     sub_14059854C @ 0x14059854C (sub_14059854C.c)
 *     sub_14059D028 @ 0x14059D028 (sub_14059D028.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 */

__int64 __fastcall sub_1402879F8(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (__int64 *)*a1;
      result = sub_14024B0B4((_DWORD *)a1 + 4, 1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}

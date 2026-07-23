/*
 * XREFs of sub_14037D59C @ 0x14037D59C
 * Callers:
 *     sub_14024FDF0 @ 0x14024FDF0 (sub_14024FDF0.c)
 *     sub_14037BB94 @ 0x14037BB94 (sub_14037BB94.c)
 *     sub_140394BE8 @ 0x140394BE8 (sub_140394BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14037D59C(_QWORD *a1, int *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1 >> 60;
  if ( v2 == 15 || (*a1 & 0xFFFFFFFFFFFFFFFuLL) > 0xFFFFFFF )
  {
    result = 3221226537LL;
    if ( v2 != 15 )
      return 3221226124LL;
  }
  else
  {
    *a2 = *(_DWORD *)a1 & 0xFFFFFFF | ((_DWORD)v2 << 28);
    return 0LL;
  }
  return result;
}

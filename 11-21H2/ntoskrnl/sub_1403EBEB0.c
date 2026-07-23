/*
 * XREFs of sub_1403EBEB0 @ 0x1403EBEB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_14042A590 @ 0x14042A590 (sub_14042A590.c)
 */

__int64 __fastcall sub_1403EBEB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rbx

  v3 = a1[2];
  v4 = v3 ^ a1[1];
  v5 = (__int64 (__fastcall *)(__int64))(v3 ^ a1[3]);
  if ( (*(_DWORD *)(v4 + 0x95C) & 0x100000) != 0 )
    sub_14024B6F8(a1, a2, a3);
  else
    _mm_lfence();
  sub_14042A590(v5);
  return v5(v4);
}

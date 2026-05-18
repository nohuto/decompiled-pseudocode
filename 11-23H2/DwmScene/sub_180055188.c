/*
 * XREFs of sub_180055188 @ 0x180055188
 * Callers:
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     sub_1800CC7B4 @ 0x1800CC7B4 (sub_1800CC7B4.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_180055188(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_18001C190();
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  }
  *a1 = v4;
  return a1;
}

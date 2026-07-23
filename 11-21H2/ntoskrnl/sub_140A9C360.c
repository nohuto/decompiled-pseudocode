/*
 * XREFs of sub_140A9C360 @ 0x140A9C360
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 */

__int64 __fastcall sub_140A9C360(LONG *a1)
{
  __int64 v2; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  sub_140A985B4(a1, 4, (__int64)KeGetCurrentThread(), retaddr);
  return sub_14042A5E0(a1, v2);
}

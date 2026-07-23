/*
 * XREFs of sub_140AA1250 @ 0x140AA1250
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 */

__int64 __fastcall sub_140AA1250(LONG *a1, __int64 a2)
{
  __int64 v3; // rbx
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v3 = sub_14042A5E0(a1, a2);
  sub_140A97900(a1, 8, (__int64)KeGetCurrentThread(), 0, retaddr);
  return v3;
}

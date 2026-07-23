/*
 * XREFs of sub_1406F608C @ 0x1406F608C
 * Callers:
 *     sub_140281480 @ 0x140281480 (sub_140281480.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 * Callees:
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 */

__int64 __fastcall sub_1406F608C(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v4 = 0;
  return sub_14032D1C0(*((_QWORD *)KeGetCurrentThread() + 23), a1, a2, a3, 4u, 0, &v5, (__int64)&v4);
}

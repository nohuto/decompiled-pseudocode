/*
 * XREFs of sub_14052E520 @ 0x14052E520
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052E568 @ 0x14052E568 (sub_14052E568.c)
 */

__int64 __fastcall sub_14052E520(int a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r8d
  int v6; // [rsp+20h] [rbp-48h]
  _QWORD v7[3]; // [rsp+50h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(a2 + 48);
  v7[1] = v7;
  v7[0] = v7;
  LOBYTE(a4) = a4 == 0;
  return sub_14052E568(a1, a2, v4, a4, v6);
}

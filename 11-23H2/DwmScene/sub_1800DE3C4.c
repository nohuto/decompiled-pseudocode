/*
 * XREFs of sub_1800DE3C4 @ 0x1800DE3C4
 * Callers:
 *     sub_1800DD5A8 @ 0x1800DD5A8 (sub_1800DD5A8.c)
 *     sub_1800DE600 @ 0x1800DE600 (sub_1800DE600.c)
 * Callees:
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 *     sub_180042890 @ 0x180042890 (sub_180042890.c)
 *     sub_1800DD5A8 @ 0x1800DD5A8 (sub_1800DD5A8.c)
 *     sub_1800DE348 @ 0x1800DE348 (sub_1800DE348.c)
 *     sub_1800DF228 @ 0x1800DF228 (sub_1800DF228.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DE3C4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_18003212C((char *)(a1 + 8), (char *)(a2 + 8));
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  if ( a1 + 64 != a2 + 64 )
  {
    v6 = a1 + 64;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
    sub_1800DD5A8(a1 + 72, **(char ***)(a2 + 72), *(char **)(a2 + 72));
    v4 = sub_180042890(a1 + 64, *(_QWORD *)(a1 + 80));
    sub_1800DF228(a1 + 64, v4);
    v6 = 0LL;
    sub_1800DE348(&v6);
  }
  return a1;
}

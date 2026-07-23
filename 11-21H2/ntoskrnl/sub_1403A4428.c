/*
 * XREFs of sub_1403A4428 @ 0x1403A4428
 * Callers:
 *     sub_1403A4264 @ 0x1403A4264 (sub_1403A4264.c)
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1403A44C8 @ 0x1403A44C8 (sub_1403A44C8.c)
 */

__int64 __fastcall sub_1403A4428(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  result = sub_1403A44C8(v1);
  if ( (_DWORD)result )
  {
    *(_BYTE *)(v1 + 196) = 1;
    *(_DWORD *)(v1 + 120) = 275;
    *(_QWORD *)(v1 + 152) = v1;
    *(_QWORD *)(v1 + 144) = &sub_1405C6870;
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_QWORD *)(v1 + 136) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 56) = 8;
    *(_QWORD *)(v1 + 72) = v1 + 64;
    *(_QWORD *)(v1 + 64) = v1 + 64;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_DWORD *)(v1 + 116) = 0;
    *(_WORD *)(v1 + 112) = 0;
    sub_1402E2D20(v1 + 56, -10000000LL * (unsigned int)result, 0, 0, v1 + 120);
    result = sub_1402F5718();
    *(_QWORD *)(v1 + 48) = result;
  }
  return result;
}

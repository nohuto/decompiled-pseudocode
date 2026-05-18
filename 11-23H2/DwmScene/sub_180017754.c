/*
 * XREFs of sub_180017754 @ 0x180017754
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800176E8 @ 0x1800176E8 (sub_1800176E8.c)
 */

__int64 __fastcall sub_180017754(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  sub_1800176E8(a1 + 48, a2 + 48);
  sub_18001246C((_QWORD *)(a1 + 72), (_QWORD *)(a2 + 72));
  result = a1;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return result;
}

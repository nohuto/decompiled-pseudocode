/*
 * XREFs of sub_1800F881C @ 0x1800F881C
 * Callers:
 *     sub_1800F7A7C @ 0x1800F7A7C (sub_1800F7A7C.c)
 *     sub_1800F8E90 @ 0x1800F8E90 (sub_1800F8E90.c)
 * Callees:
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_1800F7A7C @ 0x1800F7A7C (sub_1800F7A7C.c)
 *     sub_1800F9C6C @ 0x1800F9C6C (sub_1800F9C6C.c)
 *     sub_1800F9D04 @ 0x1800F9D04 (sub_1800F9D04.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F881C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_18003372C((__int64 *)(a1 + 8), (__int64 *)(a2 + 8), a3);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  if ( a1 + 64 != a2 + 64 )
  {
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
    sub_1800F7A7C(a1 + 72, **(__int64 ***)(a2 + 72), *(_QWORD *)(a2 + 72));
    v5 = sub_1800F9C6C(a1 + 64);
    sub_1800F9D04(a1 + 64, v5);
  }
  return a1;
}

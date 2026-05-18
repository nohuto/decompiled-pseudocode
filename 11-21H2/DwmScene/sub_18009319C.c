/*
 * XREFs of sub_18009319C @ 0x18009319C
 * Callers:
 *     sub_180090184 @ 0x180090184 (sub_180090184.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180092B70 @ 0x180092B70 (sub_180092B70.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009319C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v5 = *a2;
  v7[0] = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v5;
  v7[1] = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v4;
  sub_180010910((__int64)v7);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(*a2 + 80LL) - 1;
  sub_180092B70(a1);
  return sub_180010910((__int64)a2);
}

/*
 * XREFs of sub_1800FA384 @ 0x1800FA384
 * Callers:
 *     sub_1800FA4C4 @ 0x1800FA4C4 (sub_1800FA4C4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_1800FB5CC @ 0x1800FB5CC (sub_1800FB5CC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FA384(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 88), 2);
  *(_DWORD *)(a1 + 20) = _InterlockedIncrement((volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F7EB8));
  v2 = (__int64 *)sub_1800FB5CC(v7);
  v3 = *v2;
  v4 = v2[1];
  *v2 = 0LL;
  v2[1] = 0LL;
  v6[0] = *(_QWORD *)a1;
  *(_QWORD *)a1 = v3;
  v6[1] = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  sub_180010910((__int64)v6);
  return sub_180010910((__int64)v7);
}

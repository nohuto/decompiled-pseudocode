/*
 * XREFs of sub_1800DF688 @ 0x1800DF688
 * Callers:
 *     sub_1800DF794 @ 0x1800DF794 (sub_1800DF794.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180070198 @ 0x180070198 (sub_180070198.c)
 *     sub_1800E0384 @ 0x1800E0384 (sub_1800E0384.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DF688(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 88), 2);
  *(_DWORD *)(a1 + 20) = sub_180070198((__int64)&unk_1801D3DB0);
  v2 = (__int64 *)sub_1800E0384(v7);
  v3 = *v2;
  v4 = v2[1];
  *v2 = 0LL;
  v2[1] = 0LL;
  *(_QWORD *)a1 = v3;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v5 )
    sub_180010530(v5);
  if ( v8 )
    sub_180010530(v8);
  return a1;
}

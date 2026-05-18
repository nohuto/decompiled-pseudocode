/*
 * XREFs of sub_1800F5AF4 @ 0x1800F5AF4
 * Callers:
 *     sub_1800F8330 @ 0x1800F8330 (sub_1800F8330.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F5AF4(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (__int64 *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = (__int64 *)sub_180011088(0x20uLL);
  sub_180030730(v8, (__int64 *)&v8);
  sub_180030730((__int64 *)(v5 + 8), (__int64 *)&v8);
  *(_QWORD *)(a1 + 48) = v6;
  return a1;
}

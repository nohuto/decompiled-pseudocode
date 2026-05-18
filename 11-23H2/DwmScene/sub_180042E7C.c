/*
 * XREFs of sub_180042E7C @ 0x180042E7C
 * Callers:
 *     sub_180012394 @ 0x180012394 (sub_180012394.c)
 *     sub_180042DE0 @ 0x180042DE0 (sub_180042DE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18003D3C8 @ 0x18003D3C8 (sub_18003D3C8.c)
 *     sub_1800433D0 @ 0x1800433D0 (sub_1800433D0.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180042E7C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  sub_180010DD0(v6, (__int64)"Light");
  sub_1800810C0(a1, v6, a2);
  sub_180011B24((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Light::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 1065353216;
  sub_1800433D0(a1);
  sub_18003D3C8(*a2, 3, 1);
  v4 = a2[1];
  if ( v4 )
    sub_180010530(v4);
  return a1;
}

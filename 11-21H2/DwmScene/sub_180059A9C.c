/*
 * XREFs of sub_180059A9C @ 0x180059A9C
 * Callers:
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180027068 @ 0x180027068 (sub_180027068.c)
 *     sub_180059BB8 @ 0x180059BB8 (sub_180059BB8.c)
 *     sub_18005A8D0 @ 0x18005A8D0 (sub_18005A8D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180059A9C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = *a3;
  v6[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180027068(a1, a2, v6);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  sub_180059BB8((void *)(a1 + 112), L"RenderDeviceGeneric");
  sub_180059BB8((void *)(a1 + 80), L"Universal");
  sub_18005A8D0(a1);
  sub_180010910((__int64)a3);
  return a1;
}

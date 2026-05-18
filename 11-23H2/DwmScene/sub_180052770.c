/*
 * XREFs of sub_180052770 @ 0x180052770
 * Callers:
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 *     sub_180053660 @ 0x180053660 (sub_180053660.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180052770(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180025598(a1, a2, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  sub_18001E768((char *)(a1 + 112), L"RenderDeviceGeneric", 0x13uLL);
  sub_18001E768((char *)(a1 + 80), L"Universal", 9uLL);
  sub_180053660(a1);
  v5 = a3[1];
  if ( v5 )
    sub_180010530(v5);
  return a1;
}

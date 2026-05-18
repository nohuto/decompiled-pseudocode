/*
 * XREFs of sub_18002B404 @ 0x18002B404
 * Callers:
 *     sub_180029D08 @ 0x180029D08 (sub_180029D08.c)
 *     sub_180029DE4 @ 0x180029DE4 (sub_180029DE4.c)
 *     sub_18002B5A0 @ 0x18002B5A0 (sub_18002B5A0.c)
 *     sub_18002B650 @ 0x18002B650 (sub_18002B650.c)
 *     sub_18003D188 @ 0x18003D188 (sub_18003D188.c)
 *     sub_18005BCD0 @ 0x18005BCD0 (sub_18005BCD0.c)
 *     sub_18005CD50 @ 0x18005CD50 (sub_18005CD50.c)
 *     sub_18007A0EC @ 0x18007A0EC (sub_18007A0EC.c)
 *     sub_180099468 @ 0x180099468 (sub_180099468.c)
 *     sub_1800994BC @ 0x1800994BC (sub_1800994BC.c)
 *     sub_18009A1C8 @ 0x18009A1C8 (sub_18009A1C8.c)
 *     sub_18009A6E8 @ 0x18009A6E8 (sub_18009A6E8.c)
 *     sub_18009A750 @ 0x18009A750 (sub_18009A750.c)
 *     sub_18009AC14 @ 0x18009AC14 (sub_18009AC14.c)
 *     sub_1800AC9A8 @ 0x1800AC9A8 (sub_1800AC9A8.c)
 *     sub_1800EC7E8 @ 0x1800EC7E8 (sub_1800EC7E8.c)
 *     sub_1800FED60 @ 0x1800FED60 (sub_1800FED60.c)
 *     sub_18010044E @ 0x18010044E (sub_18010044E.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 */

void **__fastcall sub_18002B404(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned __int64 v5; // rdx
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  v2 = sub_18007BD8C();
  sub_18007BD68(v2, *(unsigned int *)(v3 + 48), 0LL);
  _InterlockedDecrement((volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F74DC + 4 * *(int *)(a1 + 44)));
  sub_18007BD68(v4, *(unsigned int *)(a1 + 56), 2LL);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 >= 0x10 )
    sub_180010884(*(char **)(a1 + 8), v5 + 1);
  *(_QWORD *)(a1 + 24) = 0LL;
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}

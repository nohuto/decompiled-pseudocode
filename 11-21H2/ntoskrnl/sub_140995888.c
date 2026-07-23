/*
 * XREFs of sub_140995888 @ 0x140995888
 * Callers:
 *     sub_140995CC0 @ 0x140995CC0 (sub_140995CC0.c)
 *     sub_140995D10 @ 0x140995D10 (sub_140995D10.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14039ADE8 @ 0x14039ADE8 (sub_14039ADE8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1408091FC @ 0x1408091FC (sub_1408091FC.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_140997DE0 @ 0x140997DE0 (sub_140997DE0.c)
 *     sub_14099858C @ 0x14099858C (sub_14099858C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

struct _KTHREAD *__fastcall sub_140995888(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 76);
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 64) )
  {
    if ( *(_BYTE *)(a1 + 83) != 1 || (LODWORD(v3) = *(_DWORD *)(a1 + 80), (v3 & 0xFFFFFF) == 0) )
      LODWORD(v3) = 50;
  }
  else
  {
    v3 = sub_14039ADE8(*(_DWORD *)(a1 + 24)) & 0xFFFFFF;
  }
  sub_1408091FC(a1);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  sub_140997DE0();
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0xFFFFFFFC) != 0 || v4 == 1 )
    sub_140809838(1, v3);
  v10 = 0LL;
  sub_140811764(7, &v10);
  sub_140A48330(v5);
  sub_14099858C(1LL);
  sub_14099858C(7LL);
  dword_140C22390 = 0;
  sub_140A47CF8(v7, v6);
  sub_14042A5E0(v2, v8);
  return sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
}

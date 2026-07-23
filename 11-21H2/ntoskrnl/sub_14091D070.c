/*
 * XREFs of sub_14091D070 @ 0x14091D070
 * Callers:
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 */

__int64 __fastcall sub_14091D070(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  _LIST_ENTRY ListHead; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v6[1] = a3;
  v7 = a2;
  v6[0] = 0LL;
  v8 = 0;
  ListHead = 0LL;
  InitializeListHead(&ListHead);
  sub_1406E93C0(v3, (__int64)sub_1407F4D50, (__int64)sub_14091D0F0, (__int64)&ListHead, (__int64)v6, 1, 1);
  sub_140346C60(&ListHead);
  return LODWORD(v6[0]);
}

/*
 * XREFs of sub_140914CA4 @ 0x140914CA4
 * Callers:
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_1409147B4 @ 0x1409147B4 (sub_1409147B4.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 */

void __fastcall sub_140914CA4(__int64 a1)
{
  ULONG_PTR v2; // rcx
  _LIST_ENTRY ListHead; // [rsp+20h] [rbp-18h] BYREF

  ListHead = 0LL;
  InitializeListHead(&ListHead);
  v2 = *(_QWORD *)(a1 + 2936);
  *(_BYTE *)(a1 + 2944) = 0;
  if ( v2 )
  {
    sub_1406FEA54(v2, (__int64)&ListHead, 0);
    *(_QWORD *)(a1 + 2936) = 0LL;
  }
  sub_140346C60(&ListHead);
}

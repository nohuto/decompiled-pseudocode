/*
 * XREFs of sub_14091CF4C @ 0x14091CF4C
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_14091CFF0 @ 0x14091CFF0 (sub_14091CFF0.c)
 */

__int64 __fastcall sub_14091CF4C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  _LIST_ENTRY v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  InitializeListHead(&v7);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = a1;
  sub_1406E93C0(a1, (__int64)sub_14091CB30, (__int64)sub_14091CFF0, (__int64)&v7, v4, 1, 0);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0 )
  {
    sub_14091CFF0(a1, &v7, a2);
    v5 = 0;
    if ( *(int *)(a2 + 8) < 0 )
      v5 = *(_DWORD *)(a2 + 8);
  }
  sub_140346C60(&v7);
  return (unsigned int)v5;
}

/*
 * XREFs of sub_140A85150 @ 0x140A85150
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FE868 @ 0x1405FE868 (sub_1405FE868.c)
 *     sub_140A83888 @ 0x140A83888 (sub_140A83888.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

char __fastcall sub_140A85150(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  char v7; // al
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // r8

  sub_140A88738(a1);
  v6 = sub_140A88430(a1);
  v7 = sub_14042A5E0(a1, a2);
  v8 = v7;
  if ( v6 )
  {
    if ( v7 )
    {
      v9 = sub_1405FE868(v6, 0LL, a3);
      if ( v9 )
      {
        sub_140A83888(v6);
        sub_140A83B84(v6, *(_DWORD *)(v9 + 48));
        if ( *(_QWORD *)(v9 + 96) )
          sub_140A880B0(v6);
        sub_140203D88((__int64)&unk_140D58A80, (_SLIST_ENTRY *)v9, v10);
      }
    }
  }
  return v8;
}

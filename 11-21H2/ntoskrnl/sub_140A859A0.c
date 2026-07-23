/*
 * XREFs of sub_140A859A0 @ 0x140A859A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FE868 @ 0x1405FE868 (sub_1405FE868.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

PSLIST_ENTRY __fastcall sub_140A859A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char v5; // bp
  __int64 v6; // rdi
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *v8; // rbx
  __int64 v9; // r8

  v3 = 0LL;
  v5 = 0;
  sub_140A88738(a1);
  v6 = sub_140A88430(a1);
  if ( v6 )
  {
    sub_140A83CA4(2u);
    v3 = a2;
    if ( a2 == -559026163 )
    {
      a2 = 0LL;
      v5 = 1;
      v3 = 0LL;
    }
    else if ( a2 && *(_DWORD *)a2 == -1393569779 )
    {
      a2 = *(_QWORD *)(a2 + 48);
    }
  }
  result = (PSLIST_ENTRY)sub_14042A5E0(a1, a2);
  if ( v6 )
  {
    if ( v5 == 1 )
      v3 = -559026163LL;
    result = (PSLIST_ENTRY)sub_1405FE868(v6, v3, 0LL);
    v8 = result;
    if ( result )
    {
      sub_140A83B84(v6, (int)result[3].Next);
      if ( v8[6].Next )
        sub_140A880B0(v6);
      return sub_140203D88((__int64)&unk_140D58A80, v8, v9);
    }
  }
  return result;
}

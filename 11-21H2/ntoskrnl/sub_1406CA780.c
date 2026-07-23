/*
 * XREFs of sub_1406CA780 @ 0x1406CA780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1406CAA7C @ 0x1406CAA7C (sub_1406CAA7C.c)
 */

__int64 __fastcall sub_1406CA780(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = (a2 + 128) & -(__int64)(a2 != 0);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = sub_1406CA970(a1, CurrentThread, &v9, v5);
    v7 = v6;
    if ( !v6 )
      break;
    sub_1406CAA7C(v6, v4);
    v5 = v7;
    a1 = v2;
  }
  return 0LL;
}

/*
 * XREFs of sub_14091CBB0 @ 0x14091CBB0
 * Callers:
 *     sub_14091CB44 @ 0x14091CB44 (sub_14091CB44.c)
 * Callees:
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_14071B3F0 @ 0x14071B3F0 (sub_14071B3F0.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 */

__int64 __fastcall sub_14091CBB0(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rsi
  _QWORD v19[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3 + 16;
  v6 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
    __fastfail(3u);
  *(_QWORD *)v3 = v7;
  v8 = (ULONG_PTR)(v6 - 15);
  *(_QWORD *)(v7 + 8) = v3;
  v6[1] = v6;
  *v6 = v6;
  *((_WORD *)v6 - 27) = *(_WORD *)(BugCheckParameter2 + 66);
  v6[9] = *(_QWORD *)(BugCheckParameter2 + 192);
  *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  *(_WORD *)(BugCheckParameter2 + 66) = 0;
  *(_QWORD *)(v6[9] + 16LL) = v6 - 15;
  v9 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( v9 != -1 )
  {
    *(_DWORD *)(v8 + 40) = v9;
    sub_14067EDC0(BugCheckParameter2, a2);
    sub_14071B3F0(v8);
  }
  sub_14067EB68(BugCheckParameter2);
  v10 = *(_QWORD *)(v8 + 32);
  v11 = *(_QWORD *)(v10 + 1648);
  v12 = 3
      * ((unsigned int)(*(_DWORD *)(v10 + 1656) - 1) & ((unsigned int)(101027
                                                                     * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)));
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v11
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v10 + 1656) - 1) & ((unsigned int)(101027
                                                                                                  * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v11 + 8 * v12 + 16) = v8 + 16;
  v13 = *(_QWORD *)(v8 + 192);
  v14 = (_QWORD *)(v13 + 32);
  v15 = *(_QWORD **)(v13 + 32);
  while ( v15 != v14 )
  {
    sub_14071BC64((volatile signed __int64 *)v8);
    sub_14071C0FC((volatile signed __int64 *)BugCheckParameter2);
    v13 = *(_QWORD *)(v8 + 192);
    v15 = (_QWORD *)*v15;
    v14 = (_QWORD *)(v13 + 32);
  }
  v16 = v13 + 48;
  v17 = *(_QWORD **)(v13 + 48);
  while ( v17 != (_QWORD *)v16 )
  {
    sub_14071BC64((volatile signed __int64 *)v8);
    sub_14071C0FC((volatile signed __int64 *)BugCheckParameter2);
    v17 = (_QWORD *)*v17;
    v16 = *(_QWORD *)(v8 + 192) + 48LL;
  }
  v19[0] = BugCheckParameter2;
  v19[1] = v8;
  sub_140915544((__int64)sub_140924550, *(_QWORD *)(v8 + 32), a2, (__int64)v19, 0);
  sub_1406FEA54(BugCheckParameter2, a2, 0);
  sub_1406FEA54(v8, a2, 0);
  return 0LL;
}

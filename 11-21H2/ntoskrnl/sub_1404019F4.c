/*
 * XREFs of sub_1404019F4 @ 0x1404019F4
 * Callers:
 *     sub_140401C90 @ 0x140401C90 (sub_140401C90.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400B44 @ 0x140400B44 (sub_140400B44.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400D40 @ 0x140400D40 (sub_140400D40.c)
 *     sub_140400E9C @ 0x140400E9C (sub_140400E9C.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400F64 @ 0x140400F64 (sub_140400F64.c)
 *     sub_140400FE0 @ 0x140400FE0 (sub_140400FE0.c)
 *     sub_140401154 @ 0x140401154 (sub_140401154.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     sub_140401BCC @ 0x140401BCC (sub_140401BCC.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_1404019F4(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r14
  void *v16; // r12
  __int64 v17; // rbx
  int v18; // eax

  v12 = sub_140401BCC(a1, a2, a3, a4, a7, a8);
  if ( !v12 )
  {
    v13 = (unsigned int)sub_140401368(*(_QWORD *)(a1 + 112));
    v14 = a9 - v13;
    v15 = v13 + a8;
    v16 = (void *)sub_140400F4C();
    v12 = sub_140400FE0(a2, a3, a4, *(_DWORD **)(a1 + 112), v16, v13 + a8, a9 - v13);
    if ( !v12 )
    {
      v17 = sub_140400BBC();
      if ( !v17 )
        sub_14056AF38(1634955892LL);
      sub_140400D40();
      v18 = sub_140400B44();
      sub_140401154(*(_QWORD *)(a1 + 112), (int)v16, v17, v18, 1, (__int64)v16, v15, v14);
      v12 = sub_140400F64(*(_QWORD *)(a1 + 112), (int)v16, a6, a7, a4, v15, v14);
      sub_140400E9C(v17);
    }
  }
  return v12;
}

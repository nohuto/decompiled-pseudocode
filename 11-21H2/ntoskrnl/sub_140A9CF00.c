/*
 * XREFs of sub_140A9CF00 @ 0x140A9CF00
 * Callers:
 *     sub_140A80D10 @ 0x140A80D10 (sub_140A80D10.c)
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1405FDFF0 @ 0x1405FDFF0 (sub_1405FDFF0.c)
 */

void __fastcall sub_140A9CF00(__int64 *a1)
{
  bool v1; // zf
  __int64 v2; // r9
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r8

  v1 = (*((_DWORD *)a1 + 2))-- == 1;
  v2 = *a1;
  if ( v1 )
  {
    v3 = a1 + 2;
    v4 = a1[2];
    if ( *(__int64 **)(v4 + 8) != a1 + 2 || (v5 = (_QWORD *)a1[3], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    a1[3] = (__int64)(a1 + 2);
    *v3 = v3;
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 20));
    if ( (a1[4] & 4) != 0 )
      sub_140203D88((__int64)&unk_140D591C0, (_SLIST_ENTRY *)a1, (__int64)v5);
    else
      sub_1405FDFF0((_SLIST_ENTRY *)a1);
  }
}

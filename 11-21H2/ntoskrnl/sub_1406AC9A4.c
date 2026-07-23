/*
 * XREFs of sub_1406AC9A4 @ 0x1406AC9A4
 * Callers:
 *     sub_1406FA590 @ 0x1406FA590 (sub_1406FA590.c)
 * Callees:
 *     sub_140233AA0 @ 0x140233AA0 (sub_140233AA0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140282874 @ 0x140282874 (sub_140282874.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

PVOID __fastcall sub_1406AC9A4(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  _QWORD *i; // rcx
  PVOID result; // rax
  unsigned __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // r10

  if ( qword_140C52B40 )
  {
    v4 = _InterlockedExchange64(&qword_140C52B40, 0LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( *(_QWORD *)(v4 + 32) + 8 * a2 <= v5 && (__int64)((*(_QWORD *)(v4 + 48) - v5) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 )
        goto LABEL_5;
      sub_140233AA0((_SLIST_ENTRY *)v4);
    }
  }
  v11 = (8 * a2 + 4183) & 0xFFFFFFFFFFFFF000uLL;
  result = sub_1402828F0(64, v11, 0x63416D4Du);
  if ( !result )
    return result;
  v12 = sub_14026DFC0(0);
  sub_140282874((__int64)v12, v13, v11);
  *(_DWORD *)(v4 + 8) = 1;
LABEL_5:
  v6 = *(_QWORD *)(v4 + 40);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v4 + 48);
  for ( i = (_QWORD *)(v6 + 8); (unsigned __int64)i < v8; ++i )
  {
    if ( *i == v7 )
      goto LABEL_10;
  }
  i = *(_QWORD **)(v4 + 40);
  *(_QWORD *)(v4 + 40) = v6 - 8;
  *i = v7;
LABEL_10:
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 32);
  result = (PVOID)v4;
  *(_DWORD *)(v4 + 12) = (__int64)(v8 - (_QWORD)i) >> 3;
  return result;
}

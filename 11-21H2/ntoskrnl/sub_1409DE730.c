/*
 * XREFs of sub_1409DE730 @ 0x1409DE730
 * Callers:
 *     sub_1409DEB60 @ 0x1409DEB60 (sub_1409DEB60.c)
 * Callees:
 *     sub_14075D4B8 @ 0x14075D4B8 (sub_14075D4B8.c)
 *     sub_14075DEAC @ 0x14075DEAC (sub_14075DEAC.c)
 *     sub_14075E074 @ 0x14075E074 (sub_14075E074.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 */

__int64 __fastcall sub_1409DE730(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, ULONG_PTR *a5)
{
  PSLIST_ENTRY v9; // rax
  unsigned int v10; // edi
  ULONG_PTR v11; // rbx
  __int64 result; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v9 = sub_14075E074((__int64)&off_140C037A0);
  v10 = 0;
  v11 = (ULONG_PTR)v9;
  if ( !v9 )
    return 0LL;
  LODWORD(v9[1].Next) |= 8u;
  v13 = &v9[2].Next + 1;
  *((_QWORD *)&v9[3].Next + 1) = a2;
  v9[4].Next = (_SLIST_ENTRY *)a1;
  v14 = (_QWORD *)(a1 + 40);
  v15 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v15 + 8) != a1 + 40 )
    __fastfail(3u);
  *v13 = v15;
  v13[1] = v14;
  *(_QWORD *)(v15 + 8) = v13;
  *v14 = v13;
  if ( (int)sub_14075D4B8(a2, a3, a4, v11, *(_DWORD *)(a1 + 56)) < 0 )
  {
    sub_1407838E0((__int64 *)&off_140C037A0, v11);
    return 0LL;
  }
  LOBYTE(v10) = (int)sub_14075DEAC(a1, 0, 0LL) >= 0;
  result = v10;
  *a5 = v11;
  return result;
}

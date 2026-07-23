/*
 * XREFs of sub_1402477A4 @ 0x1402477A4
 * Callers:
 *     sub_140247300 @ 0x140247300 (sub_140247300.c)
 *     sub_140247914 @ 0x140247914 (sub_140247914.c)
 *     sub_14028D58C @ 0x14028D58C (sub_14028D58C.c)
 *     sub_14053B22C @ 0x14053B22C (sub_14053B22C.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 */

void __fastcall sub_1402477A4(__int64 a1, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *v4; // rdx
  _SLIST_ENTRY *v5; // rdx
  _SLIST_ENTRY *Next; // rax

  while ( 1 )
  {
    v4 = *(_SLIST_ENTRY **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    if ( *((_QWORD *)&v4->Next + 1) != a1 || (Next = v4->Next, *(&v4->Next->Next + 1) != v4) )
      __fastfail(3u);
    *(_QWORD *)a1 = Next;
    *((_QWORD *)&Next->Next + 1) = a1;
    sub_140203D88((__int64)&unk_140CE2240, v4, a3);
    --*(_DWORD *)(a1 + 24);
  }
  v5 = *(_SLIST_ENTRY **)(a1 + 16);
  if ( v5 )
  {
    sub_140203D88((__int64)&unk_140CE2240, v5, a3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

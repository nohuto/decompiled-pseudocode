/*
 * XREFs of sub_140247914 @ 0x140247914
 * Callers:
 *     sub_140247300 @ 0x140247300 (sub_140247300.c)
 *     sub_14028D58C @ 0x14028D58C (sub_14028D58C.c)
 *     sub_14053B22C @ 0x14053B22C (sub_14053B22C.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_1402477A4 @ 0x1402477A4 (sub_1402477A4.c)
 */

char __fastcall sub_140247914(unsigned int a1, char a2, __int64 a3)
{
  char v3; // di
  PSLIST_ENTRY v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  PSLIST_ENTRY *v10; // rcx
  PSLIST_ENTRY v12; // rax

  v3 = 0;
  if ( a1 > *(_DWORD *)(a3 + 24) )
  {
    do
    {
      v7 = sub_140202234((__int64)&unk_140CE2240);
      if ( !v7 )
        goto LABEL_10;
      v10 = *(PSLIST_ENTRY **)(a3 + 8);
      if ( *v10 != (PSLIST_ENTRY)a3 )
        __fastfail(3u);
      v7->Next = (_SLIST_ENTRY *)a3;
      *((_QWORD *)&v7->Next + 1) = v10;
      *v10 = v7;
      *(_QWORD *)(a3 + 8) = v7;
    }
    while ( a1 > ++*(_DWORD *)(a3 + 24) );
  }
  if ( a2 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v12 = sub_140202234((__int64)&unk_140CE22C0);
      *(_QWORD *)(a3 + 16) = v12;
      if ( !v12 )
      {
LABEL_10:
        sub_1402477A4(a3, v8, v9);
        return v3;
      }
    }
  }
  return 1;
}

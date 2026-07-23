/*
 * XREFs of sub_140A8B320 @ 0x140A8B320
 * Callers:
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 * Callees:
 *     sub_1405FDFF0 @ 0x1405FDFF0 (sub_1405FDFF0.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140A8B320(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  _SLIST_ENTRY **v2; // rbx
  _SLIST_ENTRY *v3; // rcx
  _SLIST_ENTRY *Next; // rdx
  _SLIST_ENTRY **v5; // rax

  v2 = (_SLIST_ENTRY **)(BugCheckParameter3 + 264);
  if ( (dword_140C29FC0 & 0x800) != 0 && *v2 != (_SLIST_ENTRY *)v2 )
    sub_140A8C924(0xC4u, 0x62uLL, *(_QWORD *)(a2 + 96), BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 248));
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (_SLIST_ENTRY *)v2 )
      break;
    Next = v3->Next;
    if ( *(&v3->Next->Next + 1) != v3 || (v5 = (_SLIST_ENTRY **)*((_QWORD *)&v3->Next + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = Next;
    *((_QWORD *)&Next->Next + 1) = v5;
    sub_1405FDFF0(v3);
  }
}

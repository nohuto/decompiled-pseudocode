/*
 * XREFs of sub_140B21BAC @ 0x140B21BAC
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140B21CDC @ 0x140B21CDC (sub_140B21CDC.c)
 *     sub_140B21E08 @ 0x140B21E08 (sub_140B21E08.c)
 */

__int64 __fastcall sub_140B21BAC(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rsi
  unsigned int i; // ebp
  void *v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  void *v9; // rdi
  ULONG_PTR SectionAlignment; // rcx
  unsigned __int64 v11; // rdi
  int v13; // eax

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  LODWORD(v2) = 0;
  for ( i = 0; i < 2; ++i )
  {
    v5 = *(void **)(v1 + 48);
    v6 = sub_1402FDD20((unsigned __int64)v5);
    v7 = v2 + 1;
    if ( !v6 )
      v7 = v2;
    v8 = (__int64)v5 + *(unsigned int *)(v1 + 64);
    v2 = v7;
    if ( i )
    {
      qword_140D68720 = v1;
      qword_140D06988 = v5;
      qword_140D06AF0 = v8;
    }
    else
    {
      qword_140D68718 = v1;
      qword_140D068F0 = v5;
      qword_140D06AD8 = v8;
    }
    v1 = *(_QWORD *)v1;
  }
  v9 = *(void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL);
  qword_140C4F4D0 = *(_QWORD *)(BugCheckParameter2 + 16);
  SectionAlignment = RtlImageNtHeader(v9)->OptionalHeader.SectionAlignment;
  if ( (_DWORD)SectionAlignment != 4096 )
    KeBugCheckEx(0x1Au, 0x3030207uLL, BugCheckParameter2, SectionAlignment, 0LL);
  sub_140B21E08((ULONG_PTR)v9);
  if ( !(_DWORD)v2 )
    return 0LL;
  if ( (_DWORD)v2 != 1 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v2, 0LL);
  v11 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL);
  if ( (unsigned int)sub_1402FDD20(v11) != 1 )
  {
    v13 = sub_1402FDD20(v11);
    KeBugCheckEx(0x1Au, 0x3030204uLL, BugCheckParameter2, v11, v13);
  }
  if ( ((v11 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != v11 )
    KeBugCheckEx(0x1Au, 0x3030206uLL, BugCheckParameter2, v11, 0LL);
  sub_140B21CDC(BugCheckParameter2);
  dword_140D06880 |= 4u;
  return 1LL;
}

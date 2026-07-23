/*
 * XREFs of sub_140A9A25C @ 0x140A9A25C
 * Callers:
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

PSLIST_ENTRY __fastcall sub_140A9A25C(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( (*(_QWORD *)(BugCheckParameter3 + 128) || *(_QWORD *)(BugCheckParameter3 + 136)) && (dword_140C29FC0 & 8) != 0 )
    sub_140A8C924(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 116) + *(_DWORD *)(BugCheckParameter3 + 112)));
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(BugCheckParameter3 + 64));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}

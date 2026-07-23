/*
 * XREFs of sub_140A9F2C0 @ 0x140A9F2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B450 @ 0x140A8B450 (sub_140A8B450.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140A9A1DC @ 0x140A9A1DC (sub_140A9A1DC.c)
 */

_SLIST_ENTRY *__fastcall sub_140A9F2C0(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  __int64 v4; // rdx
  _SLIST_ENTRY *v5; // rax
  _SLIST_ENTRY *v6; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)sub_140A96B0C(0)
    || (qword_140D01450 & 0x40000) != 0
    && qword_140D57510
    && (unsigned __int8)sub_14042A5E0("MmAllocateContiguousMemory", v4) )
  {
    return 0LL;
  }
  if ( (dword_140C29FC0 & 0x4000000) != 0 && BugCheckParameter2 < 0x100000000LL )
    sub_140A8C924(0xC4u, 0x141uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v5 = (_SLIST_ENTRY *)sub_14042A5E0(BugCheckParameter3, 0LL);
  v6 = v5;
  if ( v5 )
  {
    sub_140A9A1DC(v5, BugCheckParameter3);
    if ( (dword_140C29FC0 & 8) != 0 )
      sub_140A8B450(retaddr, v6, BugCheckParameter3);
  }
  return v6;
}

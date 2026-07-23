/*
 * XREFs of sub_140A9F6A0 @ 0x140A9F6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 *     sub_140A8B450 @ 0x140A8B450 (sub_140A8B450.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140A9A1DC @ 0x140A9A1DC (sub_140A9A1DC.c)
 */

_SLIST_ENTRY *__fastcall sub_140A9F6A0(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int a5)
{
  _SLIST_ENTRY *v9; // rax
  _SLIST_ENTRY *v10; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_140A82EB0(a5, retaddr);
  if ( (unsigned int)sub_140A96B0C(0) )
    return 0LL;
  if ( (dword_140C29FC0 & 0x4000000) != 0 && a3 < 0x100000000LL )
    sub_140A8C924(0xC4u, 0x141uLL, a3, BugCheckParameter3, 0LL);
  v9 = (_SLIST_ENTRY *)sub_14042A5E0(BugCheckParameter3, a2);
  v10 = v9;
  if ( v9 )
  {
    sub_140A9A1DC(v9, BugCheckParameter3);
    if ( (dword_140C29FC0 & 8) != 0 )
      sub_140A8B450(retaddr, v10, BugCheckParameter3);
  }
  return v10;
}

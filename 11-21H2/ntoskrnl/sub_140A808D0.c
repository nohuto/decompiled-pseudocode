/*
 * XREFs of sub_140A808D0 @ 0x140A808D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A808D0(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  if ( (dword_140C29FC0 & 0x10) != 0 && *(_QWORD *)(BugCheckParameter2 + 40) )
    sub_140A8C924(0xC9u, 0xAuLL, BugCheckParameter2, 0LL, 0LL);
  return sub_14042A5E0(BugCheckParameter2, a2);
}

/*
 * XREFs of sub_140AA0640 @ 0x140AA0640
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA0640(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0x7BuLL, CurrentIrql, BugCheckParameter3, a2);
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B064(retaddr, 216LL, 0xE0u, -a2);
  return sub_14042A5E0(BugCheckParameter3, a2);
}

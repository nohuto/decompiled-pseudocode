/*
 * XREFs of sub_140AA0500 @ 0x140AA0500
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA0500(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v4; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0x78uLL, CurrentIrql, BugCheckParameter2, 0LL);
  v4 = *(__int16 *)(BugCheckParameter2 + 10);
  if ( (v4 & 2) == 0 && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0x7CuLL, BugCheckParameter2, v4, 0LL);
  if ( (unsigned int)dword_140C0B1F8 >= 3 && (v4 & 4) != 0 && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0x7DuLL, BugCheckParameter2, v4, 0LL);
  if ( (v4 & 0x10) != 0 && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0xB4uLL, BugCheckParameter2, v4, 16LL);
  if ( (v4 & 1) != 0 && _bittest(&dword_140C29FC0, 0xCu) )
    sub_140A8B064(retaddr, 200LL, 0xD0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  if ( _bittest(&dword_140C29FC0, 0xCu) )
    sub_140A8B064(retaddr, 184LL, 0xC0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  return sub_14042A5E0(BugCheckParameter2, a2);
}

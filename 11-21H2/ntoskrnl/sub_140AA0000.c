/*
 * XREFs of sub_140AA0000 @ 0x140AA0000
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96C48 @ 0x140A96C48 (sub_140A96C48.c)
 *     sub_140AA08D8 @ 0x140AA08D8 (sub_140AA08D8.c)
 */

__int64 __fastcall sub_140AA0000(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  if ( (dword_140C29FC0 & 1) != 0 )
    sub_140AA08D8(BugCheckParameter2);
  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 0xDu)
    && (unsigned int)sub_140A96C48()
    && (dword_140C29FC0 & 1) != 0 )
  {
    sub_140A8C924(0xC4u, 0x81uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), 0LL);
  }
  LOBYTE(a2) = v2;
  v4 = sub_14042A5E0(BugCheckParameter2, a2);
  if ( v4 && (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B064(retaddr, 200LL, 0xD0u, *(unsigned int *)(BugCheckParameter2 + 40));
  return v4;
}

/*
 * XREFs of sub_140A9FDD0 @ 0x140A9FDD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140AA09D0 @ 0x140AA09D0 (sub_140AA09D0.c)
 */

__int64 __fastcall sub_140A9FDD0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int)dword_140C29FC0 >> 17;
  LOBYTE(v2) = (dword_140C29FC0 & 0x20000) != 0;
  sub_140AA09D0(v2);
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B064(retaddr, 232LL, 0xF0u, -(__int64)*(unsigned int *)(a1 + 40));
  return sub_14042A5E0(a1, v3);
}

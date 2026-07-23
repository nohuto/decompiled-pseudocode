/*
 * XREFs of sub_140A82F58 @ 0x140A82F58
 * Callers:
 *     VfCheckNxPoolType @ 0x1405FE080 (VfCheckNxPoolType.c)
 *     sub_140A7EF40 @ 0x140A7EF40 (sub_140A7EF40.c)
 *     sub_140A8FF70 @ 0x140A8FF70 (sub_140A8FF70.c)
 *     sub_140A90090 @ 0x140A90090 (sub_140A90090.c)
 *     sub_140A902F0 @ 0x140A902F0 (sub_140A902F0.c)
 *     sub_140A90380 @ 0x140A90380 (sub_140A90380.c)
 *     sub_140A90450 @ 0x140A90450 (sub_140A90450.c)
 *     sub_140A90530 @ 0x140A90530 (sub_140A90530.c)
 *     sub_140A9C2A0 @ 0x140A9C2A0 (sub_140A9C2A0.c)
 *     sub_140A9ED10 @ 0x140A9ED10 (sub_140A9ED10.c)
 *     sub_140A9EE20 @ 0x140A9EE20 (sub_140A9EE20.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83044 @ 0x140A83044 (sub_140A83044.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 */

void __fastcall sub_140A82F58(int a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdi
  const char *v6; // rdx

  if ( (dword_140C29FC0 & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v5 = a1;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    sub_140A83044(byte_140C0D8DC, v6, 0x2000LL, a2, a1, a3);
    sub_1405FFA20(0xC4u, 0x2000uLL, a2, v5, v4, byte_140C0D8DC);
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B2AC(a2, 280LL);
    _InterlockedIncrement(&dword_140C2A058);
  }
}

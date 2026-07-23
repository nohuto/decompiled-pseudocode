/*
 * XREFs of sub_140A962A0 @ 0x140A962A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 */

__int64 __fastcall sub_140A962A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C29FC8;
  v4 = retaddr;
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B2AC(retaddr, 164LL);
  LOBYTE(v4) = 2;
  v5 = sub_140A96894(v4);
  result = sub_14042A5E0(a1, a2);
  if ( v5 )
    *(_WORD *)(v5 + 10) = HIDWORD(KeGetPcr()[1].LockArray);
  return result;
}

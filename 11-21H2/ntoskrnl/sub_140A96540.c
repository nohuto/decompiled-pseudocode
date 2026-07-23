/*
 * XREFs of sub_140A96540 @ 0x140A96540
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 */

__int64 __fastcall sub_140A96540(char a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( sub_1402ABBD0() )
  {
    ++dword_140C29FC4;
    v2 = retaddr;
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B2AC(retaddr, 160LL);
  }
  LOBYTE(v2) = a1;
  v3 = sub_140A96894(v2);
  LOBYTE(v4) = a1;
  result = sub_14042A5E0(v4, v5);
  if ( v3 )
    *(_WORD *)(v3 + 10) = HIDWORD(KeGetPcr()[1].LockArray);
  return result;
}

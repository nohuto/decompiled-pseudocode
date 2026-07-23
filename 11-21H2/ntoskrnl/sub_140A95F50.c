/*
 * XREFs of sub_140A95F50 @ 0x140A95F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 */

__int64 sub_140A95F50()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C29FC4;
  v0 = retaddr;
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B2AC(retaddr, 160LL);
  LOBYTE(v0) = 2;
  v1 = sub_140A96894(v0);
  result = sub_14042A5E0(v3, v2);
  if ( v1 )
    *(_WORD *)(v1 + 10) = HIDWORD(KeGetPcr()[1].LockArray);
  return result;
}

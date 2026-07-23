/*
 * XREFs of sub_140A965D0 @ 0x140A965D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 */

__int64 __fastcall sub_140A965D0(ULONG_PTR a1, _BYTE *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax

  ++dword_140C29FC8;
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B2AC(a3, 164LL);
  sub_1406021F8(a1, 8uLL);
  LOBYTE(v5) = 2;
  v6 = sub_140A96894(v5);
  result = sub_14042A5E0(a1, v7);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = HIDWORD(KeGetPcr()[1].LockArray);
  return result;
}

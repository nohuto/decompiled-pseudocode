/*
 * XREFs of sub_140A8A770 @ 0x140A8A770
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 */

__int64 __fastcall sub_140A8A770(char a1, char a2)
{
  __int64 v3; // rdx

  if ( a2 && (dword_140C29FC0 & 8) != 0 )
  {
    if ( *((PVOID *)KeGetCurrentThread() + 23) == qword_140D06940 )
      sub_140A8C924(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()[36].Unused0[2] & 1) != 0 )
      sub_140A8C924(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)sub_140A96B0C(0LL) )
    return 0LL;
  LOBYTE(v3) = a1;
  return sub_14042A5E0(0LL, v3);
}

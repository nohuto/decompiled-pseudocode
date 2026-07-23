/*
 * XREFs of sub_140A8A4C0 @ 0x140A8A4C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A8A4C0(__int64 a1, __int64 a2, char a3)
{
  char v3; // di

  v3 = a2;
  if ( a3 && (dword_140C29FC0 & 8) != 0 )
  {
    if ( *((PVOID *)KeGetCurrentThread() + 23) == qword_140D06940 )
      sub_140A8C924(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()[36].Unused0[2] & 1) != 0 )
      sub_140A8C924(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  LOBYTE(a2) = v3;
  return sub_14042A5E0(a1, a2);
}

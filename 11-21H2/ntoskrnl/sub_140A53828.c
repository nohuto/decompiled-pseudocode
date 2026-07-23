/*
 * XREFs of sub_140A53828 @ 0x140A53828
 * Callers:
 *     sub_140A5029C @ 0x140A5029C (sub_140A5029C.c)
 *     sub_140A5A8F8 @ 0x140A5A8F8 (sub_140A5A8F8.c)
 * Callees:
 *     sub_1403AAC80 @ 0x1403AAC80 (sub_1403AAC80.c)
 *     sub_1403AAD84 @ 0x1403AAD84 (sub_1403AAD84.c)
 *     sub_1403AADCC @ 0x1403AADCC (sub_1403AADCC.c)
 *     sub_1403AADFC @ 0x1403AADFC (sub_1403AADFC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140A53828(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  __int64 v6; // r14
  char result; // al
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  if ( byte_140C0C685 )
  {
    if ( (sub_14042A5E0(a2, 377LL) & 0x100) != 0 )
      sub_14042A5E0(a2, 379LL);
    if ( sub_1403AAC80() )
    {
      ++dword_140D016D8;
      sub_14042A5E0(a2, 1232LL);
      sub_14042A5E0(a2, 1232LL);
    }
    else
    {
      ++dword_140C54980;
    }
    if ( !byte_140C549B0 )
    {
      v10 = __readmsr(0x179u);
      byte_140C549B0 = v10;
    }
    v4 = (unsigned __int8)byte_140C549B0;
    v5 = 0;
    if ( byte_140C549B0 )
    {
      v6 = a1 + 84;
      do
      {
        if ( !byte_140C54968 || PshedIsSystemWheaEnabled() )
          sub_1403AAD84(a2, v5);
        sub_1403AADFC(a2, v5);
        sub_1403AADCC(a2, v5++);
        v6 += 28LL;
      }
      while ( v5 < v4 );
    }
  }
  result = byte_140C0C684;
  v8 = __readcr4();
  if ( result )
    v9 = v8 | 0x40;
  else
    v9 = v8 ^ 0x40;
  __writecr4(v9);
  return result;
}

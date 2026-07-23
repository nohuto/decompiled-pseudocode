/*
 * XREFs of sub_140A821E0 @ 0x140A821E0
 * Callers:
 *     sub_1405FDEC0 @ 0x1405FDEC0 (sub_1405FDEC0.c)
 *     MmIsDriverSuspectForVerifier @ 0x140A816C0 (MmIsDriverSuspectForVerifier.c)
 *     sub_140A93724 @ 0x140A93724 (sub_140A93724.c)
 *     sub_140A93A60 @ 0x140A93A60 (sub_140A93A60.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_140A821E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  const UNICODE_STRING *v3; // rdi

  v1 = qword_140C1B2C0;
  result = 0LL;
  if ( (__int64 *)qword_140C1B2C0 != &qword_140C1B2C0 )
  {
    v3 = (const UNICODE_STRING *)(a1 + 88);
    do
    {
      result = RtlEqualUnicodeString((PCUNICODE_STRING)(v1 + 24), v3, 1u);
      if ( (_BYTE)result )
        break;
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &qword_140C1B2C0 );
  }
  return result;
}

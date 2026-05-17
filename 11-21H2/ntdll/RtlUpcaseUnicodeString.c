/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18000F280
 * Callers:
 *     RtlCreateVirtualAccountSid @ 0x18000BD90 (RtlCreateVirtualAccountSid.c)
 *     RtlCreateServiceSid @ 0x18000F3F0 (RtlCreateServiceSid.c)
 *     RtlpComputeLangListCheckSum @ 0x180043308 (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18004A1A0 (RtlDeriveCapabilitySidsFromName.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000F37C (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeString(_WORD *a1, unsigned __int16 *a2, char a3)
{
  _WORD *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  _WORD *v8; // r9
  _WORD *v9; // r8
  unsigned int v10; // r10d
  unsigned int i; // r9d
  unsigned __int64 v12; // r8

  v5 = a1;
  if ( !a3 && !*a2 )
  {
    *a1 = 0;
    return 0LL;
  }
  v7 = qword_1801776F8;
  v8 = a1 + 1;
  v9 = a1 + 4;
  LOBYTE(a1) = a3;
  result = AllocateOrValidateUnicodeStringBuffer(a1, *a2, v9, v8);
  if ( (int)result >= 0 )
  {
    v10 = *a2 >> 1;
    for ( i = 0; i < v10; ++i )
    {
      v12 = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * i);
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( v7 )
          {
            if ( (unsigned __int16)v12 >= 0xC0u )
              LOWORD(v12) = *(_WORD *)(v7
                                     + 2
                                     * ((v12 & 0xF)
                                      + *(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((unsigned __int8)v12 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v7 + 2 * (v12 >> 8))))))
                          + v12;
          }
        }
        else
        {
          LOWORD(v12) = v12 - 32;
        }
      }
      *(_WORD *)(*((_QWORD *)v5 + 1) + 2LL * i) = v12;
    }
    *v5 = *a2;
    return 0LL;
  }
  return result;
}

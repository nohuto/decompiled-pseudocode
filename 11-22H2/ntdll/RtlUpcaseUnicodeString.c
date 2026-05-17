/*
 * XREFs of RtlUpcaseUnicodeString @ 0x180010160
 * Callers:
 *     RtlCreateServiceSid @ 0x1800102D0 (RtlCreateServiceSid.c)
 *     RtlpComputeLangListCheckSum @ 0x1800137EC (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002AEB0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x180085B70 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180010258 (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeString(_WORD *a1, unsigned __int16 *a2, char a3)
{
  _WORD *v5; // rdi
  __int64 v6; // rsi
  _WORD *v7; // r9
  _WORD *v8; // r8
  __int64 result; // rax
  unsigned int v10; // r10d
  unsigned int i; // r9d
  unsigned int v12; // r8d

  v5 = a1;
  if ( a3 || *a2 )
  {
    v6 = qword_1801817B8;
    v7 = a1 + 1;
    v8 = a1 + 4;
    LOBYTE(a1) = a3;
    result = AllocateOrValidateUnicodeStringBuffer(a1, *a2, v8, v7);
    if ( (int)result < 0 )
      return result;
    v10 = *a2 >> 1;
    for ( i = 0; i < v10; ++i )
    {
      v12 = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * i);
      if ( v12 >= 0x61 )
      {
        if ( v12 <= 0x7A )
        {
          LOWORD(v12) = v12 - 32;
        }
        else if ( v6 )
        {
          if ( (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *(_WORD *)(v6
                                   + 2LL
                                   * ((v12 & 0xF)
                                    + *(unsigned __int16 *)(v6
                                                          + 2LL
                                                          * (((unsigned __int8)v12 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v6
                                                                                               + 2
                                                                                               * ((unsigned __int64)v12 >> 8))))))
                        + v12;
        }
      }
      *(_WORD *)(*((_QWORD *)v5 + 1) + 2LL * i) = v12;
    }
    *v5 = *a2;
  }
  else
  {
    *a1 = 0;
  }
  return 0LL;
}

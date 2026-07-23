/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1407E5410
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_14061C370 @ 0x14061C370 (sub_14061C370.c)
 *     sub_1406CE4C4 @ 0x1406CE4C4 (sub_1406CE4C4.c)
 *     sub_14075B0E4 @ 0x14075B0E4 (sub_14075B0E4.c)
 *     sub_14075B9CC @ 0x14075B9CC (sub_14075B9CC.c)
 *     sub_1407DB510 @ 0x1407DB510 (sub_1407DB510.c)
 *     sub_1407E5234 @ 0x1407E5234 (sub_1407E5234.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14094E390 @ 0x14094E390 (sub_14094E390.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_140A96D84 @ 0x140A96D84 (sub_140A96D84.c)
 *     sub_140A9700C @ 0x140A9700C (sub_140A9700C.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rdx
  char v7; // r10
  NTSTATUS result; // eax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  if ( AllocateDestinationString || SourceString->Length )
  {
    v5 = *((_QWORD *)sub_140347DB0() + 154);
    result = sub_1402D7DE0(v7, *v6, (__int64 *)&DestinationString->Buffer, &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v9 = SourceString->Length >> 1;
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = SourceString->Buffer[i];
      if ( (unsigned int)v11 >= 0x61 )
      {
        if ( (unsigned int)v11 > 0x7A )
        {
          if ( v5 )
          {
            if ( (unsigned __int16)v11 >= 0xC0u )
              LOWORD(v11) = *(_WORD *)(v5
                                     + 2
                                     * ((v11 & 0xF)
                                      + *(unsigned __int16 *)(v5
                                                            + 2LL
                                                            * (((unsigned __int8)v11 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v5 + 2 * (v11 >> 8))))))
                          + v11;
          }
        }
        else
        {
          LOWORD(v11) = v11 - 32;
        }
      }
      DestinationString->Buffer[i] = v11;
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}

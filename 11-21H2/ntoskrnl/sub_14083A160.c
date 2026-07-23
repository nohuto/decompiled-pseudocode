/*
 * XREFs of sub_14083A160 @ 0x14083A160
 * Callers:
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 */

PSLIST_ENTRY __fastcall sub_14083A160(_SLIST_ENTRY *a1, __int64 a2, char a3, _SLIST_ENTRY *a4, __int64 a5)
{
  PSLIST_ENTRY result; // rax

  result = sub_140202234((__int64)&stru_140CF92C0);
  if ( result )
  {
    BYTE1(result[2].Next) = 0;
    WORD1(result[2].Next) = 0;
    *((_QWORD *)&result[1].Next + 1) = a5;
    result->Next = a1;
    *((_QWORD *)&result->Next + 1) = a2;
    LOBYTE(result[2].Next) = a3;
    result[1].Next = a4;
  }
  return result;
}

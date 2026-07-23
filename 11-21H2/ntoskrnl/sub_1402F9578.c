/*
 * XREFs of sub_1402F9578 @ 0x1402F9578
 * Callers:
 *     sub_140205A98 @ 0x140205A98 (sub_140205A98.c)
 *     sub_1402F8EF0 @ 0x1402F8EF0 (sub_1402F8EF0.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 * Callees:
 *     <none>
 */

PSID __fastcall sub_1402F9578(_BYTE *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *a1 )
  {
    case 0x12:
      return (PSID)qword_140C1B9F0;
    case 0x31:
      return (PSID)qword_140C1B9E8;
    case 0x51:
      return (PSID)qword_140C1B9D8;
    case 0x52:
      return (PSID)qword_140C1B9F8;
    case 0x61:
      return (PSID)qword_140C1B9E0;
    case 0x62:
    case 0x72:
      return ProcessTrustLabelSid;
  }
  if ( (unsigned __int8)*a1 == 129 )
    return (PSID)qword_140C1B9D0;
  return (PSID)v1;
}

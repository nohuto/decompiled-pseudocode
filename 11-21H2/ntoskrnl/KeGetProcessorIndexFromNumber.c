/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140293580
 * Callers:
 *     sub_1402485E0 @ 0x1402485E0 (sub_1402485E0.c)
 *     sub_140252164 @ 0x140252164 (sub_140252164.c)
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_140293268 @ 0x140293268 (sub_140293268.c)
 *     sub_140293444 @ 0x140293444 (sub_140293444.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     HalSendNMI @ 0x1402DA8E0 (HalSendNMI.c)
 *     sub_140303740 @ 0x140303740 (sub_140303740.c)
 *     sub_1403861B4 @ 0x1403861B4 (sub_1403861B4.c)
 *     sub_1403C0E9C @ 0x1403C0E9C (sub_1403C0E9C.c)
 *     HalGetInterruptTargetInformation @ 0x1403D8950 (HalGetInterruptTargetInformation.c)
 *     sub_140523D5C @ 0x140523D5C (sub_140523D5C.c)
 *     sub_1405C70FC @ 0x1405C70FC (sub_1405C70FC.c)
 *     sub_1405C8BDC @ 0x1405C8BDC (sub_1405C8BDC.c)
 *     sub_1405C9740 @ 0x1405C9740 (sub_1405C9740.c)
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 *     sub_140829930 @ 0x140829930 (sub_140829930.c)
 *     sub_14098AAF0 @ 0x14098AAF0 (sub_14098AAF0.c)
 *     sub_14098E9D8 @ 0x14098E9D8 (sub_14098E9D8.c)
 *     sub_14098EB00 @ 0x14098EB00 (sub_14098EB00.c)
 *     sub_14098ED44 @ 0x14098ED44 (sub_14098ED44.c)
 *     sub_140A505D4 @ 0x140A505D4 (sub_140A505D4.c)
 *     sub_140A62EE4 @ 0x140A62EE4 (sub_140A62EE4.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
    return 0;
  if ( (unsigned __int16)Group >= (unsigned __int16)word_140D05018 )
    return -1;
  Number = ProcNumber->Number;
  if ( (unsigned __int8)Number >= 0x40u )
    return -1;
  result = dword_140D105E0[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}

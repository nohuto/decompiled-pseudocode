/*
 * XREFs of RtlInitAnsiString @ 0x1402A07B0
 * Callers:
 *     sub_1403C4550 @ 0x1403C4550 (sub_1403C4550.c)
 *     sub_1403C5578 @ 0x1403C5578 (sub_1403C5578.c)
 *     sub_1403DE020 @ 0x1403DE020 (sub_1403DE020.c)
 *     sub_14053F1A8 @ 0x14053F1A8 (sub_14053F1A8.c)
 *     sub_1405D4980 @ 0x1405D4980 (sub_1405D4980.c)
 *     sub_140644BE4 @ 0x140644BE4 (sub_140644BE4.c)
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 *     sub_14066D3F8 @ 0x14066D3F8 (sub_14066D3F8.c)
 *     RtlIsApiSetImplemented @ 0x1406D9680 (RtlIsApiSetImplemented.c)
 *     sub_14070B610 @ 0x14070B610 (sub_14070B610.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_140834684 @ 0x140834684 (sub_140834684.c)
 *     sub_140837688 @ 0x140837688 (sub_140837688.c)
 *     sub_140837AD4 @ 0x140837AD4 (sub_140837AD4.c)
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 *     sub_140864BA0 @ 0x140864BA0 (sub_140864BA0.c)
 *     sub_140950744 @ 0x140950744 (sub_140950744.c)
 *     sub_140964D68 @ 0x140964D68 (sub_140964D68.c)
 *     sub_14096C4AC @ 0x14096C4AC (sub_14096C4AC.c)
 *     sub_1409DC2AC @ 0x1409DC2AC (sub_1409DC2AC.c)
 *     sub_1409DC780 @ 0x1409DC780 (sub_1409DC780.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     NaptrDnsRecordConvert_3 @ 0x140B0BC60 (NaptrDnsRecordConvert_3.c)
 *     sub_140B0BE8C @ 0x140B0BE8C (sub_140B0BE8C.c)
 *     sub_140B0CCAC @ 0x140B0CCAC (sub_140B0CCAC.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B0E52C @ 0x140B0E52C (sub_140B0E52C.c)
 *     sub_140B0E670 @ 0x140B0E670 (sub_140B0E670.c)
 *     sub_140B179D4 @ 0x140B179D4 (sub_140B179D4.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 *     sub_140B4F790 @ 0x140B4F790 (sub_140B4F790.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}

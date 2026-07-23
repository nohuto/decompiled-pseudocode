/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14075A5D0
 * Callers:
 *     sub_1403C5578 @ 0x1403C5578 (sub_1403C5578.c)
 *     sub_1403DE020 @ 0x1403DE020 (sub_1403DE020.c)
 *     sub_1403DF0F4 @ 0x1403DF0F4 (sub_1403DF0F4.c)
 *     sub_14053F1A8 @ 0x14053F1A8 (sub_14053F1A8.c)
 *     sub_1405D4980 @ 0x1405D4980 (sub_1405D4980.c)
 *     sub_1405D9260 @ 0x1405D9260 (sub_1405D9260.c)
 *     sub_14061ABB0 @ 0x14061ABB0 (sub_14061ABB0.c)
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 *     sub_14066D3F8 @ 0x14066D3F8 (sub_14066D3F8.c)
 *     RtlIsApiSetImplemented @ 0x1406D9680 (RtlIsApiSetImplemented.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_1407584B4 @ 0x1407584B4 (sub_1407584B4.c)
 *     RtlInt64ToUnicodeString @ 0x14075A520 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     sub_1407F0ED0 @ 0x1407F0ED0 (sub_1407F0ED0.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     sub_1408271EC @ 0x1408271EC (sub_1408271EC.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_14082F3C4 @ 0x14082F3C4 (sub_14082F3C4.c)
 *     sub_140834684 @ 0x140834684 (sub_140834684.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140837640 (RtlCreateUnicodeStringFromAsciiz.c)
 *     sub_140837688 @ 0x140837688 (sub_140837688.c)
 *     sub_140837AD4 @ 0x140837AD4 (sub_140837AD4.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 *     sub_140864BA0 @ 0x140864BA0 (sub_140864BA0.c)
 *     sub_14091E3D0 @ 0x14091E3D0 (sub_14091E3D0.c)
 *     sub_1409346B0 @ 0x1409346B0 (sub_1409346B0.c)
 *     sub_140950744 @ 0x140950744 (sub_140950744.c)
 *     sub_14096C4AC @ 0x14096C4AC (sub_14096C4AC.c)
 *     sub_1409DC2AC @ 0x1409DC2AC (sub_1409DC2AC.c)
 *     sub_1409DC780 @ 0x1409DC780 (sub_1409DC780.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 *     sub_140A00DB0 @ 0x140A00DB0 (sub_140A00DB0.c)
 *     sub_140A03B84 @ 0x140A03B84 (sub_140A03B84.c)
 *     sub_140A14988 @ 0x140A14988 (sub_140A14988.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140B0BE8C @ 0x140B0BE8C (sub_140B0BE8C.c)
 *     sub_140B0CCAC @ 0x140B0CCAC (sub_140B0CCAC.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B0E52C @ 0x140B0E52C (sub_140B0E52C.c)
 *     sub_140B0E670 @ 0x140B0E670 (sub_140B0E670.c)
 *     sub_140B102C0 @ 0x140B102C0 (sub_140B102C0.c)
 *     sub_140B179D4 @ 0x140B179D4 (sub_140B179D4.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 *     sub_140B4F790 @ 0x140B4F790 (sub_140B4F790.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     RtlMultiByteToUnicodeN @ 0x14075A6A0 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14075A820 (RtlxAnsiStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r15
  wchar_t **p_Buffer; // rbx
  NTSTATUS result; // eax
  ULONG v10; // edx
  int v11; // edi
  ULONG v12; // ecx
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  BytesInUnicodeString = v6;
  if ( v6 > 0xFFFE )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = sub_1402D7DE0(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v11 = RtlMultiByteToUnicodeN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInUnicodeString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePoolWithTag(*p_Buffer, v10);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    else
    {
      v12 = BytesInUnicodeString;
      DestinationString->Length = BytesInUnicodeString;
      (*p_Buffer)[(unsigned __int64)v12 >> 1] = 0;
    }
    return v11;
  }
  return result;
}

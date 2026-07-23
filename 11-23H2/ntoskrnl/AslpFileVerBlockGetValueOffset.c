/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x14022BF7C
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1406D4870 (AslpFileVerQueryBlock.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14075946C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407BE704 (AslpFileVerStringBlockGetValue.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14022BFF0 (RtlStringCbLengthW.c)
 */

NTSTATUS __fastcall AslpFileVerBlockGetValueOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  size_t *v4; // r10
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  pcbLength = 0LL;
  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return -1073741811;
  result = RtlStringCbLengthW((STRSAFE_PCNZWCH)(a2 + 6), a3 - 6, &pcbLength);
  if ( result >= 0 )
  {
    if ( pcbLength + 8 < pcbLength )
    {
      return -1073741675;
    }
    else
    {
      *v4 = (pcbLength + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0;
    }
  }
  return result;
}

/*
 * XREFs of RtlAddRefActivationContext @ 0x18001C2D0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18001C23C (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlFindActivationContextSectionString @ 0x180045CB0 (RtlFindActivationContextSectionString.c)
 *     LdrpAllocateModuleEntry @ 0x18004DF68 (LdrpAllocateModuleEntry.c)
 *     RtlGetActiveActivationContext @ 0x180050D30 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x1800687C0 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180085580 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    for ( i = *a1; i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1, i + 1, i); i = *a1 )
      ;
  }
}

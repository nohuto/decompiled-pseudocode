/*
 * XREFs of RtlAddRefActivationContext @ 0x180033C00
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001D420 (RtlFindActivationContextSectionString.c)
 *     LdrpAllocateModuleEntry @ 0x18002E490 (LdrpAllocateModuleEntry.c)
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueryInformationActivationContext @ 0x180033520 (RtlQueryInformationActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x1800755B0 (RtlActivateActivationContextEx.c)
 *     RtlGetActiveActivationContext @ 0x180077430 (RtlGetActiveActivationContext.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180081504 (RtlpFindActivationContextSection_FillOutReturnedData.c)
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

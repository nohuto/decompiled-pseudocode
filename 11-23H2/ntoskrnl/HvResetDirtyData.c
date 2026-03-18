/*
 * XREFs of HvResetDirtyData @ 0x14070546C
 * Callers:
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x140707534 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x140290D50 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x1407084D8 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 104));
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}

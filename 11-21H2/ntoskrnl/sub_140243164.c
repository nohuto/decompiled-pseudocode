/*
 * XREFs of sub_140243164 @ 0x140243164
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedAddUlong @ 0x140386240 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14063F230 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14063F290 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14063F2E0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140243164(volatile signed __int64 *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // r8
  __int64 result; // rax

  _InterlockedAnd64(a1, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v4 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      result = (unsigned int)(*(_DWORD *)(v4 + 24) - 1);
      *(_DWORD *)(v4 + 24) = result;
      if ( !(_DWORD)result )
        result = sub_140418E4C(CurrentPrcb);
    }
  }
  if ( a2 )
    _enable();
  return result;
}

/*
 * XREFs of CcInitializeProcessor @ 0x1408215BC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 *     CcInitializeCacheManager @ 0x140B4D188 (CcInitializeCacheManager.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1402907D0 (MmIsThisAnNtAsSystem.c)
 *     ExInitializeSystemLookasideList @ 0x140A8BD08 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcInitializeProcessor(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  BOOLEAN v3; // si
  PVOID PoolWithTag; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  *(_QWORD *)(a1 + 2152) = &CcTwilightLookasideList;
  v3 = IsThisAnNtAsSystem;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4B576343u);
  if ( PoolWithTag )
    ExInitializeSystemLookasideList(
      (_DWORD)PoolWithTag,
      512,
      160,
      1264018243,
      v3 != 0 ? 256 : 128,
      (__int64)&ExSystemLookasideListHead);
  else
    PoolWithTag = &CcTwilightLookasideList;
  result = 0LL;
  *(_QWORD *)(a1 + 2144) = PoolWithTag;
  return result;
}

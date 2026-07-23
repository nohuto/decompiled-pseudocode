/*
 * XREFs of sub_1405CC6C4 @ 0x1405CC6C4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 */

bool __fastcall sub_1405CC6C4(PVOID Object)
{
  bool v1; // di
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  ULONG RequiredSize; // [rsp+40h] [rbp-48h] BYREF
  ULONG Type; // [rsp+44h] [rbp-44h] BYREF
  __int64 Str1; // [rsp+48h] [rbp-40h] BYREF

  Str1 = 0LL;
  v1 = 0;
  RequiredSize = 0;
  Type = 0;
  ObfReferenceObjectWithTag(Object, 0x78466F50u);
  if ( Object )
  {
    v3 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    if ( v3 )
    {
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
      _m_prefetchw((const void *)(v3 + 296));
      if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 296), 0) & 4) != 0 )
        v1 = (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 80) + 824LL), 0, 0) & 0x10) != 0;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = *((_QWORD *)CurrentPrcb + 4375);
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v8;
            if ( v9 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      if ( !v1
        && IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(v3 + 32), &stru_1400181F8, 0, 0, 8u, &Str1, &RequiredSize, &Type) >= 0
        && Type == 18
        && RequiredSize > 2
        && !*((_WORD *)&Type + ((unsigned __int64)RequiredSize >> 1) + 1) )
      {
        v1 = wcsicmp((const wchar_t *)&Str1, L"USB") == 0;
      }
    }
  }
  ObfDereferenceObjectWithTag(Object, 0x78466F50u);
  return v1;
}

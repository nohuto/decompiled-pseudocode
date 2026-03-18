/*
 * XREFs of Bulk_EP_ProcessExpectedEventTRBs @ 0x1C000F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 */

void __fastcall Bulk_EP_ProcessExpectedEventTRBs(__int64 a1)
{
  KIRQL v2; // al
  bool v3; // zf
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 352) == 0;
  *(_BYTE *)(a1 + 104) = v2;
  if ( v3 )
  {
    v4 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 324) |= 2u;
    v4 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v5 + 37)
      || (v6 = *(_QWORD *)(v5 + 136), _InterlockedIncrement((volatile signed __int32 *)(v6 + 20)) == *(_DWORD *)(v6 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v5 + 296), 150);
    }
  }
}

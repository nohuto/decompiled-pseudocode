/*
 * XREFs of PoEnergyContextCleanup @ 0x1407B0F10
 * Callers:
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 * Callees:
 *     KeQueryTimelineBitmapTime @ 0x1402C0AF4 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationCapture @ 0x1402C0D84 (RtlStateDurationCapture.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140356984 (RtlTimelineBitmapUpdateRange.c)
 *     PopEtEnumEnergyTrackers @ 0x1407B1124 (PopEtEnumEnergyTrackers.c)
 *     PopEtAppIdDereference @ 0x1407B2C10 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1407B2CD0 (RtlInternEntryDereference.c)
 */

void __fastcall PoEnergyContextCleanup(__int64 a1)
{
  __int64 *v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int TimelineBitmapTime; // r15d
  __int64 v6; // r14
  __int64 *v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 *v19; // [rsp+38h] [rbp-20h]

  v1 = *(__int64 **)(a1 + 2280);
  if ( !v1 )
    return;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = 0LL;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v6 = 3LL;
  do
  {
    v8 = RtlStateDurationCapture((__int64)&v1[v4 + 13], &v1[v4 + 13], v3);
    if ( v7 == v1 + 13 )
    {
      v9 = v1 + 38;
    }
    else
    {
      if ( v7 != v1 + 14 )
        goto LABEL_11;
      v9 = v1 + 39;
    }
    if ( v9 && v8 )
      RtlTimelineBitmapUpdateRange(v9, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
LABEL_11:
    ++v4;
    --v6;
  }
  while ( v6 );
  RtlStateDurationCapture((__int64)(v1 + 52), v1 + 52, v3);
  v16[1] = 0;
  v18 = 0LL;
  v16[0] = 4;
  v19 = v1;
  v17 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 54));
  PopEtEnumEnergyTrackers(v10, v16);
  PopReleaseRwLock(v1 + 54);
  v14 = v1[56];
  if ( v14 )
  {
    PopEtAppIdDereference(v14, v11, v12, v13);
    v1[56] = 0LL;
  }
  v15 = v1[57];
  if ( v15 )
  {
    RtlInternEntryDereference(PopEtGlobals + 56, v15);
    v1[57] = 0LL;
  }
}

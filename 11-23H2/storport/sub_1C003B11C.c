/*
 * XREFs of sub_1C003B11C @ 0x1C003B11C
 * Callers:
 *     sub_1C003FB90 @ 0x1C003FB90 (sub_1C003FB90.c)
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 * Callees:
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C003F7E4 @ 0x1C003F7E4 (sub_1C003F7E4.c)
 *     sub_1C003FDB8 @ 0x1C003FDB8 (sub_1C003FDB8.c)
 *     sub_1C007854C @ 0x1C007854C (sub_1C007854C.c)
 *     sub_1C00A07AC @ 0x1C00A07AC (sub_1C00A07AC.c)
 *     sub_1C00A9460 @ 0x1C00A9460 (sub_1C00A9460.c)
 *     sub_1C00A94F4 @ 0x1C00A94F4 (sub_1C00A94F4.c)
 *     sub_1C00AA17C @ 0x1C00AA17C (sub_1C00AA17C.c)
 *     sub_1C00AA5B0 @ 0x1C00AA5B0 (sub_1C00AA5B0.c)
 *     sub_1C00AA894 @ 0x1C00AA894 (sub_1C00AA894.c)
 *     sub_1C00B0558 @ 0x1C00B0558 (sub_1C00B0558.c)
 */

void __fastcall sub_1C003B11C(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v9; // rcx
  void *v10; // rcx
  KIRQL v11; // bl
  void *v12; // rcx
  _DWORD *v13; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  PSLIST_ENTRY i; // rax
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  signed __int32 v25[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 5912);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49436152u);
    *(_QWORD *)(a1 + 5912) = 0LL;
  }
  v3 = *(void **)(a1 + 5968);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x464D6152u);
    *(_QWORD *)(a1 + 5968) = 0LL;
  }
  v4 = *(void **)(a1 + 6032);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x464D6152u);
    *(_QWORD *)(a1 + 6032) = 0LL;
  }
  sub_1C007854C(a1 + 1944);
  *(_DWORD *)(a1 + 2000) = 0;
  sub_1C00AA5B0(a1 + 320);
  LOBYTE(v5) = *(_BYTE *)(a1 + 4306) == 0;
  sub_1C00AA17C(a1 + 336, v5);
  if ( *(_DWORD *)(a1 + 808) )
    sub_1C00AA894(a1 + 760, a1 + 792);
  v6 = *(_QWORD *)(a1 + 4488);
  if ( v6 )
  {
    sub_1C00084E4(a1, v6);
    *(_QWORD *)(a1 + 4488) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4306) )
    sub_1C00A94F4(a1 + 760);
  sub_1C00A9460(a1 + 656);
  sub_1C003F7E4(a1 + 944);
  sub_1C003F7E4(a1 + 1328);
  v7 = *(_QWORD *)(a1 + 1936);
  *(_DWORD *)a1 = 0;
  if ( v7 )
  {
    sub_1C00B0558();
    *(_QWORD *)(a1 + 1936) = 0LL;
  }
  v8 = *(void **)(a1 + 4312);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x52446152u);
    *(_QWORD *)(a1 + 4312) = 0LL;
  }
  if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(a1) )
    sub_1C00A07AC();
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1912));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5944));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5472));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5640));
  sub_1C003FDB8(a1);
  v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 296);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v9 )
  {
    ExFreeCacheAwareRundownProtection(v9);
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  v10 = *(void **)(a1 + 4296);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x72446152u);
    *(_QWORD *)(a1 + 4296) = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 4596) & 1) != 0 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( _InterlockedExchangeAdd(&dword_1C0093B58, 0xFFFFFFFF) == 1 )
    {
      dword_1C0093AA8 = 0;
      _InterlockedOr(v25, 0);
      ExFreePoolWithTag(P, 0x72446152u);
      ExFreePoolWithTag(qword_1C0093AA0, 0x72446152u);
      P = 0LL;
      qword_1C0093AA0 = 0LL;
    }
    KeReleaseSpinLock(&SpinLock, v11);
    v12 = *(void **)(a1 + 4616);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x72446152u);
      *(_QWORD *)(a1 + 4616) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4600) > 1 && *(_QWORD *)(a1 + 4608) )
  {
    v13 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v15 = 0;
    v16 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
      do
      {
        for ( i = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4608) + ((unsigned __int64)v15 << 6)));
              i;
              i = i->Next )
        {
          v13 = i;
          if ( !HIDWORD(i[1].Next) )
            break;
        }
        if ( !v13[5] )
          break;
        ++v15;
      }
      while ( v15 < v16 );
      ExFreePoolWithTag(v13, 0x54436152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 4608), 0x54436152u);
    *(_QWORD *)(a1 + 4608) = 0LL;
  }
  v18 = *(void **)(a1 + 4664);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x54456152u);
    *(_QWORD *)(a1 + 4664) = 0LL;
  }
  v19 = *(void **)(a1 + 4816);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x4D566152u);
    *(_QWORD *)(a1 + 4816) = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 168) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 184), 0x74636944u);
  v20 = *(void **)(a1 + 48);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x53446152u);
  v21 = *(void **)(a1 + 5320);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x45436152u);
    *(_QWORD *)(a1 + 5320) = 0LL;
  }
  v22 = *(void **)(a1 + 5016);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x54456152u);
    *(_QWORD *)(a1 + 5016) = 0LL;
  }
  *(_DWORD *)(a1 + 4864) = -1;
  v23 = *(void **)(a1 + 6008);
  *(_DWORD *)(a1 + 4868) = 0;
  *(_QWORD *)(a1 + 4872) = 0LL;
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x43546152u);
    *(_QWORD *)(a1 + 6008) = 0LL;
  }
  v24 = *(void **)(a1 + 6016);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x43546152u);
    *(_QWORD *)(a1 + 6016) = 0LL;
  }
}

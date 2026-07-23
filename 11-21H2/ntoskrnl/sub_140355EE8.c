/*
 * XREFs of sub_140355EE8 @ 0x140355EE8
 * Callers:
 *     sub_14022ED94 @ 0x14022ED94 (sub_14022ED94.c)
 * Callees:
 *     sub_14024A824 @ 0x14024A824 (sub_14024A824.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403563F8 @ 0x1403563F8 (sub_1403563F8.c)
 *     sub_140356DBC @ 0x140356DBC (sub_140356DBC.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140355EE8(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r13d
  int v3; // esi
  __int64 *v4; // rdi
  __int64 v5; // rbx
  REGHANDLE v6; // rsi
  unsigned __int8 CurrentIrql; // r15
  int v8; // ebp
  __int64 v9; // rbx
  volatile LONG *v10; // rcx
  __int64 v11; // rax
  int v12; // r10d
  unsigned int v13; // eax
  __int64 v14; // r11
  int v15; // r9d
  char v16; // si
  int v17; // r14d
  int v18; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // r11
  __int64 v23; // r9
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v26; // r8
  int v27; // eax
  bool v28; // zf
  int v29; // [rsp+44h] [rbp-64h]
  __int64 v31; // [rsp+58h] [rbp-50h] BYREF
  __int64 v32; // [rsp+60h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v29 = 0;
  v3 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C20A30, 0LL);
  v4 = off_140C02BB0;
  if ( off_140C02BB0 == &qword_140C20A40 )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&off_140C02BB0,
      *off_140C02BB0,
      (signed __int64)off_140C02BB0);
    v4 = off_140C02BB0;
  }
  v5 = v4[4];
  v31 = 0LL;
  if ( byte_140C5AE14 )
  {
    v6 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_14000EBE0) )
    {
      if ( v5 )
        v31 = *(_QWORD *)(v5 + 48);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v31;
      EtwWriteEx(v6, &stru_14000EBE0, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
    v3 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = 0;
  while ( 2 )
  {
    v9 = (__int64)v4;
    do
    {
      v32 = 0LL;
      v10 = (volatile LONG *)(v9 + 64);
      if ( v8 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v10);
        v20 = v3 + 1;
        if ( v8 != 2 )
          v20 = v3;
        v29 = v20;
      }
      else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10) )
      {
        goto LABEL_20;
      }
      v11 = *(_QWORD *)(v9 + 32);
      if ( v11 )
        v32 = *(_QWORD *)(v11 + 48);
      v12 = *(_DWORD *)(v9 + 120);
      if ( v12 )
      {
        v15 = sub_140356DBC(v9 + 72, 0LL, 0LL);
        if ( v15 != 6 )
        {
          v16 = sub_1403563F8(v9, 0, (int)v9 + 72, v15, v9 + 120, a1);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
          v17 = 1;
          goto LABEL_28;
        }
      }
      v13 = *(_DWORD *)(v9 + 180);
      v2 = 0;
      if ( v13 )
      {
        v14 = v9 + 192;
        while ( !*(_DWORD *)(v14 + 104) )
        {
          ++v2;
          v14 += 208LL;
          if ( v2 >= v13 )
            goto LABEL_18;
        }
        v21 = sub_140356DBC(v14 + 56, 1LL, 3LL);
        v16 = sub_1403563F8(v9, v22, (int)v22 + 56, v21, v22 + 104, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
        v17 = 2;
        goto LABEL_28;
      }
LABEL_18:
      if ( v12 )
      {
        v18 = sub_140356DBC(v9 + 72, 4LL, 5LL);
        v16 = sub_1403563F8(v9, 0, (int)v9 + 72, v18, v9 + 120, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
        v17 = 3;
        goto LABEL_28;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
LABEL_20:
      v9 = *(_QWORD *)v9;
      if ( (__int64 *)v9 == &qword_140C20A40 )
        v9 = *(_QWORD *)v9;
      v3 = v29;
    }
    while ( (__int64 *)v9 != v4 );
    if ( (unsigned int)++v8 < 3 )
      continue;
    break;
  }
  v16 = 0;
  v17 = 0;
LABEL_28:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = *((_QWORD *)CurrentPrcb + 4375);
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v27;
        if ( v28 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (__int64 *)v9 != v4 )
    _InterlockedExchange64((volatile __int64 *)&off_140C02BB0, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C20A30, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C20A30);
  sub_1402AFC00((ULONG_PTR)&qword_140C20A30);
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_14024A824(v32, v17, v2, v8, v29);
  return v16;
}

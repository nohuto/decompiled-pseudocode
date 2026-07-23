/*
 * XREFs of sub_140681CB0 @ 0x140681CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140681AD4 @ 0x140681AD4 (sub_140681AD4.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     sub_140681FE4 @ 0x140681FE4 (sub_140681FE4.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     sub_1409E21EC @ 0x1409E21EC (sub_1409E21EC.c)
 */

__int64 __fastcall sub_140681CB0(__int64 *a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char v6; // si
  __int64 v7; // rcx
  char v8; // r12
  int v9; // ecx
  int v10; // esi
  __int64 v11; // rax
  __int64 v13; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+C8h] [rbp+20h]

  v13 = 0LL;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_BYTE *)CurrentThread + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *a1 = 0LL;
  v8 = PoEnergyEstimationEnabled();
  LOBYTE(v9) = v6;
  v10 = sub_14072B3B0(v9, (_DWORD)PsJobType, a3, v6);
  if ( v10 >= 0 )
  {
    memset(0LL, 0, v8 != 0 ? 2224 : 1792);
    MEMORY[0x4F8] = 0LL;
    MEMORY[0x30] = 40LL;
    MEMORY[0x28] = 40LL;
    MEMORY[0x4E8] = 1248LL;
    MEMORY[0x4E0] = 1248LL;
    MEMORY[0x4D8] = 1232LL;
    MEMORY[0x4D0] = 1232LL;
    MEMORY[0x508] = 1280LL;
    MEMORY[0x500] = 1280LL;
    KeInitializeEvent(0LL, NotificationEvent, 0);
    MEMORY[0x4C8] = 0LL;
    MEMORY[0x108] = 2097153LL;
    memset((void *)0x110, 0, 0x100uLL);
    MEMORY[0x2C8] = 2097153LL;
    memset((void *)0x2D0, 0, 0x100uLL);
    MEMORY[0x5C8] = 1472LL;
    MEMORY[0x5C0] = 1472LL;
    MEMORY[0x5D0] = 0LL;
    if ( v8 )
      MEMORY[0x5F0] = 1792LL;
    MEMORY[0x240] = -1;
    MEMORY[0x42C] = 16382;
    MEMORY[0x6B0] = 1LL;
    MEMORY[0x414] = 10;
    MEMORY[0x244] = 5;
    ExInitializeResourceLite((PERESOURCE)0x38);
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3B148, 0LL);
    if ( *(__int64 **)qword_140D3B2F8 != &qword_140D3B2F0 )
      __fastfail(3u);
    MEMORY[0x18] = &qword_140D3B2F0;
    MEMORY[0x20] = qword_140D3B2F8;
    *(_QWORD *)qword_140D3B2F8 = 24LL;
    qword_140D3B2F8 = 24LL;
    sub_140681AD4((__int64)CurrentThread);
    MEMORY[0x5E8] |= 0x200000u;
    v15 = MEMORY[0x5E8];
    while ( 1 )
    {
      v10 = ExUuidCreate((UUID *)0x598);
      if ( v10 != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v10 == 1073872982 )
      v10 = 0;
    if ( v10 >= 0 )
    {
      v11 = sub_1407A1CE8(qword_140D3B128, 0, 0, 0, 0LL);
      if ( v11 )
        MEMORY[0x594] = v11;
      else
        v10 = -1073741670;
    }
    sub_140681FE4(1592LL);
    MEMORY[0x678] = 0LL;
    MEMORY[0x680] = 0LL;
    MEMORY[0x6A8] = 0LL;
    if ( v10 < 0 || (ObfReferenceObject(0LL), v10 = sub_140729C30(0LL, 0LL, 0, 0LL, (__int64)&v13), v10 < 0) )
      ObfDereferenceObject(0LL);
    else
      *a1 = v13;
  }
  if ( (xmmword_140D06900 & 0x80000) != 0 )
    sub_1409E21EC(0LL, v15, (unsigned int)v10, 1824LL);
  return (unsigned int)v10;
}

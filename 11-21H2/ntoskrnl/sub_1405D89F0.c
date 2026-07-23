/*
 * XREFs of sub_1405D89F0 @ 0x1405D89F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_140989AB0 @ 0x140989AB0 (sub_140989AB0.c)
 *     sub_140992C10 @ 0x140992C10 (sub_140992C10.c)
 *     sub_140998A68 @ 0x140998A68 (sub_140998A68.c)
 *     sub_140998B6C @ 0x140998B6C (sub_140998B6C.c)
 *     sub_1409A0C98 @ 0x1409A0C98 (sub_1409A0C98.c)
 */

__int64 sub_1405D89F0()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int128 v8; // xmm6
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 result; // rax
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  ULONG ActiveConsoleId; // eax
  ULONG_PTR v18; // rax
  int v19; // [rsp+58h] [rbp-29h] BYREF
  _BYTE Uuid[24]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v21; // [rsp+78h] [rbp-9h]
  __int128 v22; // [rsp+88h] [rbp+7h]
  __int128 v23; // [rsp+98h] [rbp+17h]

  v19 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  LOBYTE(v0) = KeAcquireSpinLockRaiseToDpc(&qword_140C1F640);
  do
  {
    *(_OWORD *)Uuid = xmmword_140C1F6F8;
    *(_QWORD *)&Uuid[16] = qword_140C1F708;
    KeReleaseSpinLockFromDpcLevel(&qword_140C1F640);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v3 = *((_QWORD *)CurrentPrcb + 4375);
          v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v5 = (v4 & *(_DWORD *)(v3 + 20)) == 0;
          *(_DWORD *)(v3 + 20) &= v4;
          if ( v5 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v0);
    v6 = *(_DWORD *)&Uuid[4];
    v7 = *(_DWORD *)Uuid;
    if ( (dword_140C1F710 & 1) != 0 && ((Uuid[0] & 1) == 0 || *(_DWORD *)&Uuid[4] != dword_140C1F714) )
    {
      sub_140989AB0(0LL);
      dword_140C1F710 = 0;
      byte_140C1F7E8 = 0;
      sub_140998A68(&dword_140C1F710);
      sub_1402D40E4((__int64)&unk_140C1F648, 1, 1, 0LL);
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (dword_140C1F710 & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v8 = *(_OWORD *)&Uuid[8];
        LOBYTE(v9) = 1;
        xmmword_140C1F7C0 = *(_OWORD *)&Uuid[8];
        sub_140989AB0(v9);
        v6 = *(_DWORD *)&Uuid[4];
        dword_140C1F714 = *(_DWORD *)&Uuid[4];
        xmmword_140C1F718 = v8;
        dword_140C1F728 = sub_140998B6C();
        v19 = 65544;
        sub_1403725A0((__int64)&unk_140C1F648, (__int64)sub_1405D8980, v6, (unsigned __int8 *)&v19, 2);
        KeSetTimer2((__int64)&unk_140C1F648, -10000000LL, 10000000LL, 0LL);
        v7 = *(_DWORD *)Uuid;
      }
      dword_140C1F710 = v7;
      sub_140998A68(&dword_140C1F710);
      v11 = v7 >> 1;
      if ( v7 >> 1 >= 0x1B58 )
      {
        if ( dword_140C1F820 )
          sub_14042A5E0(0LL, v10);
        sub_140992C10(v11);
        sub_1409A0C98();
        if ( dword_140C1F728 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          v18 = sub_1402DF880(ActiveConsoleId);
          if ( v18 && (int)sub_1402312E0(v18) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v7 >> 1, (ULONG_PTR)&dword_140C1F780, 0LL, 0LL);
        }
      }
      if ( (qword_140C1F804 & 0x100000000LL) != 0 && !dword_140C1F728 && v11 == 1000 * (BYTE4(qword_140C1F804) >> 4) )
      {
        v12 = BYTE4(qword_140C1F804) & 4 | ((BYTE4(qword_140C1F804) & 2 | 0x10u) >> 1);
        v13 = DbgkWerCaptureLiveKernelDump(
                (unsigned int)L"PopPowerButton",
                4552,
                v7 >> 1,
                (unsigned int)&dword_140C1F780,
                0LL,
                0LL,
                0LL,
                0LL,
                v12);
        DbgPrintEx(
          0x92u,
          2u,
          "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump completed with Status: %08x, UserPages:  %08x, Hyperv"
          "isorPages:  %08x\n",
          v13,
          v12 & 1,
          (v12 >> 2) & 1);
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F640);
  }
  while ( __PAIR64__(v6, v7) != (_QWORD)xmmword_140C1F6F8 );
  _InterlockedExchange(&dword_140C1F6F0, 0);
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F640);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v16 = *((_QWORD *)v15 + 4375);
        v5 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v5 )
          result = sub_140418E4C((__int64)v15);
      }
    }
  }
  __writecr8(v0);
  return result;
}

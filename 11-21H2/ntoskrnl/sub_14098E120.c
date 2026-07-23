/*
 * XREFs of sub_14098E120 @ 0x14098E120
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1405CD96C @ 0x1405CD96C (sub_1405CD96C.c)
 *     sub_1405D67D4 @ 0x1405D67D4 (sub_1405D67D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14098E120(__int64 P)
{
  __int64 v1; // rbp
  __int64 *v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(P + 16);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23C60, 0LL);
  if ( byte_140C23C78 )
  {
    v3 = (__int64 *)qword_140C23C70;
    if ( *(__int64 **)qword_140C23C70 != &qword_140C23C68 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140C23C68;
    *(_QWORD *)(P + 8) = v3;
    *v3 = P;
    qword_140C23C70 = P;
  }
  else
  {
    ++dword_140C23C7C;
    KeResetEvent(&stru_140C23C80);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23C60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C23C60);
    sub_1402AFC00((ULONG_PTR)&qword_140C23C60);
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
    sub_1402D2848(v4);
    sub_1405D67D4(v1, *(_DWORD *)(P + 24));
    sub_1402D25CC(v4);
    sub_1405CD96C(v1);
    ExFreePoolWithTag((PVOID)P, 0x4D584650u);
    ZwUpdateWnfStateData(&stru_140037758, 0LL, 0, 0LL, 0LL, 0, 0);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23C60, 0LL);
    if ( !--dword_140C23C7C )
      KeSetEvent(&stru_140C23C80, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23C60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C23C60);
  return sub_1402AFC00((ULONG_PTR)&qword_140C23C60);
}

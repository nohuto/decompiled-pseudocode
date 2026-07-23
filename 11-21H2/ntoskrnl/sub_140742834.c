/*
 * XREFs of sub_140742834 @ 0x140742834
 * Callers:
 *     sub_1407424F0 @ 0x1407424F0 (sub_1407424F0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_140742834(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  sub_140AB4370(a1, a2, a3);
  sub_140AB41FC(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 1) == 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
    v8 = sub_14071F430(a1, 0, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 80);
    sub_1402AFC00(a1 + 80);
    if ( v8 < 0 )
    {
      sub_140AB41E0(a1);
      sub_140AB4260(v11, v10, v12, v13);
      return (unsigned int)v8;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) |= 1u;
  }
  sub_140AB41E0(a1);
  sub_140AB4260(v5, v4, v6, v7);
  v8 = 0;
  if ( (int)sub_1406885A4(a1, 0) < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v8;
}

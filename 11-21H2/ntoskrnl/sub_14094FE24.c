/*
 * XREFs of sub_14094FE24 @ 0x14094FE24
 * Callers:
 *     sub_1407491FC @ 0x1407491FC (sub_1407491FC.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14074CA14 @ 0x14074CA14 (sub_14074CA14.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14094FE24(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  if ( a2 == 2 )
  {
    v4 = (__int64 *)(a1 + 576);
    if ( (__int64 *)*v4 == v4 )
    {
      ExAcquireFastMutex(&stru_140C44960);
      v5 = qword_140C449A0;
      if ( *(__int64 **)(qword_140C449A0 + 8) != &qword_140C449A0 )
        __fastfail(3u);
      v4[1] = (__int64)&qword_140C449A0;
      *v4 = v5;
      *(_QWORD *)(v5 + 8) = v4;
      ++dword_140C44998;
      qword_140C449A0 = (__int64)v4;
      KeReleaseGuardedMutex(&stru_140C44960);
    }
    if ( (int)sub_14074CA14(*(_QWORD *)(a1 + 32), 4, &P) >= 0 && P )
      ExFreePoolWithTag(P, 0);
  }
  _InterlockedIncrement(&dword_140C449B0);
  *(_DWORD *)(a1 + 568) = a2;
}

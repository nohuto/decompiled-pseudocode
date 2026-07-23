/*
 * XREFs of sub_14078D5D8 @ 0x14078D5D8
 * Callers:
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 * Callees:
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140748F48 @ 0x140748F48 (sub_140748F48.c)
 *     sub_14078D340 @ 0x14078D340 (sub_14078D340.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 */

__int64 __fastcall sub_14078D5D8(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v6; // edi
  __int64 *v7; // r14
  __int64 v8; // rbx
  PVOID **v9; // rbp
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v13; // [rsp+20h] [rbp-78h] BYREF
  int v14; // [rsp+28h] [rbp-70h] BYREF
  __int128 v15; // [rsp+2Ch] [rbp-6Ch]
  __int128 v16; // [rsp+3Ch] [rbp-5Ch]
  int v17; // [rsp+4Ch] [rbp-4Ch]
  __int64 v18; // [rsp+50h] [rbp-48h]

  v3 = *a1;
  v17 = 0;
  v4 = *(_OWORD *)a2;
  v13 = 0;
  v15 = v3;
  v6 = -1;
  v16 = v4;
  v14 = 3145729;
  v18 = a3;
  KeAcquireGuardedMutex(&stru_140C46A00);
  v7 = (__int64 *)((char *)&unk_140D3D650 + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v8 = *v7;
  while ( (__int64 *)v8 != v7 )
  {
    v9 = (PVOID **)v8;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *(_DWORD *)(v8 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      v6 = sub_140748F48();
    ++*(_WORD *)(v8 + 56);
    KeReleaseGuardedMutex(&stru_140C46A00);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 72), 1u);
    if ( (v6 == -1 || *(_DWORD *)(v8 + 20) == v6)
      && !*(_BYTE *)(v8 + 58)
      && ((_DWORD *)(v8 + 80) == a2 || RtlCompareMemory((const void *)(v8 + 80), a2, 0x10uLL) == 16) )
    {
      sub_14078D3DC(v8, (__int64)&v14, &v13);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 72));
    KeLeaveCriticalRegion();
    KeAcquireGuardedMutex(&stru_140C46A00);
    v8 = *(_QWORD *)v8;
    sub_14078D340(v9);
  }
  KeReleaseGuardedMutex(&stru_140C46A00);
  return 0LL;
}

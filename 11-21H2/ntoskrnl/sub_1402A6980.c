/*
 * XREFs of sub_1402A6980 @ 0x1402A6980
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckOplock @ 0x1402A68A0 (FsRtlCheckOplock.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x1402A3840 (IoGetOplockKeyContextEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1406BE148 @ 0x1406BE148 (sub_1406BE148.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1402A6980(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  __int64 v6; // rsi
  char v7; // bl
  int v8; // ecx
  __int64 OplockKeyContext; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  _OWORD *Pool2; // rax

  v5 = *(_QWORD *)(a2 + 184);
  v6 = *a1;
  v7 = 0;
  if ( !*(_BYTE *)v5 && (*(_DWORD *)(v5 + 16) & 0x1000) != 0
    || *(_BYTE *)v5 == 6
    && ((v8 = *(_DWORD *)(v5 + 16), v8 == 13) && **(_BYTE **)(a2 + 24) || v8 == 64 && (**(_DWORD **)(a2 + 24) & 1) != 0) )
  {
    OplockKeyContext = IoGetOplockKeyContextEx(*(_QWORD *)(v5 + 48));
    v12 = OplockKeyContext;
    if ( OplockKeyContext )
    {
      if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0 )
      {
        if ( !v6 )
        {
          v6 = sub_1406BE148(v11, v10);
          *a1 = v6;
        }
        if ( (a3 & 0x20000000) == 0 )
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
        v7 = 1;
        Pool2 = *(_OWORD **)(v6 + 136);
        if ( !Pool2 )
        {
          Pool2 = (_OWORD *)ExAllocatePool2(290LL, 16LL, 1869763398LL);
          *(_QWORD *)(v6 + 136) = Pool2;
        }
        *Pool2 = *(_OWORD *)(v12 + 4);
      }
    }
  }
  if ( v7 )
  {
    if ( (a3 & 0x20000000) == 0 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
  }
}

/*
 * XREFs of sub_14078BC74 @ 0x14078BC74
 * Callers:
 *     sub_1406DF998 @ 0x1406DF998 (sub_1406DF998.c)
 *     sub_1406E6000 @ 0x1406E6000 (sub_1406E6000.c)
 *     sub_1407698C4 @ 0x1407698C4 (sub_1407698C4.c)
 *     sub_14078B9BC @ 0x14078B9BC (sub_14078B9BC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14078AE24 @ 0x14078AE24 (sub_14078AE24.c)
 *     sub_14078BD64 @ 0x14078BD64 (sub_14078BD64.c)
 *     sub_14078BDBC @ 0x14078BDBC (sub_14078BDBC.c)
 *     sub_14078BE00 @ 0x14078BE00 (sub_14078BE00.c)
 *     sub_14078BE3C @ 0x14078BE3C (sub_14078BE3C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078BC74(__int64 a1, __int64 a2)
{
  int v4; // edi
  char v5; // si
  __int64 Pool2; // rsi

  v4 = 0;
  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( !(unsigned __int8)sub_14078BE3C(a2) )
      goto LABEL_3;
    ++*(_DWORD *)(a2 + 136);
  }
  v5 = 1;
LABEL_3:
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1500540496LL);
    if ( Pool2 )
    {
      sub_14078BE00(a1);
      *(_QWORD *)(Pool2 + 24) = a1;
      ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      v4 = sub_14078BDBC(a2, Pool2);
      if ( v4 < 0 )
      {
        sub_14078AE24(a2, *(void **)(a2 + 112), 0);
        ++*(_DWORD *)(a2 + 136);
        v4 = sub_14078BDBC(a2, Pool2);
      }
      if ( v4 < 0 )
      {
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      }
      else
      {
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        sub_14078BD64(a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}

/*
 * XREFs of sub_140816040 @ 0x140816040
 * Callers:
 *     sub_140815FD0 @ 0x140815FD0 (sub_140815FD0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1403AE2A4 @ 0x1403AE2A4 (sub_1403AE2A4.c)
 *     sub_140816288 @ 0x140816288 (sub_140816288.c)
 */

__int64 __fastcall sub_140816040(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  int v6; // r8d
  __int64 v7; // rbx
  __int32 v8; // ecx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C18E88, 0LL);
  if ( a1 )
  {
    sub_1403AE2A4(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = _InterlockedExchange(&dword_140C18E98, dword_140C18E98);
      if ( (*(_DWORD *)(v7 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v7 + 40) )
        {
          LOBYTE(v6) = *(_BYTE *)(v7 + 16);
          v3 = sub_140816288(v8, a1, v6, *(_QWORD *)(v7 + 24), *(_DWORD *)(v7 + 32), 1);
          if ( v3 >= 0 )
          {
            *(_BYTE *)(v7 + 48) = *(_BYTE *)(v7 + 16);
            *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 24);
            *(_DWORD *)(v7 + 64) = *(_DWORD *)(v7 + 32);
          }
        }
        else
        {
          v3 = sub_140816288(v8, a1, 0, 0, 0, 0);
          if ( v3 >= 0 )
          {
            *(_OWORD *)(v7 + 48) = 0LL;
            *(_OWORD *)(v7 + 64) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C18E88, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}

/*
 * XREFs of sub_140816190 @ 0x140816190
 * Callers:
 *     sub_140816134 @ 0x140816134 (sub_140816134.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140816288 @ 0x140816288 (sub_140816288.c)
 */

__int64 __fastcall sub_140816190(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  int v4; // r8d
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // r15
  int v11; // r14d

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C18E88, 0LL);
  if ( !a1 )
  {
    v2 = -1073741811;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_BYTE *)(a1 + 18);
    v7 = *(_BYTE *)(v5 + 48);
    v8 = *(_QWORD *)(v5 + 56);
    v9 = *(_DWORD *)(v5 + 64);
    if ( v6 <= v7 )
      v6 = *(_BYTE *)(v5 + 48);
    v10 = v8 | *(_QWORD *)(a1 + 24);
    v11 = v9 | *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(v5 + 69) && v10 == v8 && v6 == v7 && v11 == v9 )
      goto LABEL_8;
    LOBYTE(v4) = v6;
    v2 = sub_140816288(
           _InterlockedExchange(&dword_140C18E98, dword_140C18E98),
           a1,
           v4,
           (unsigned int)v8 | *(_DWORD *)(a1 + 24),
           v11,
           1);
    if ( v2 >= 0 )
    {
      *(_BYTE *)(v5 + 69) = 1;
      *(_QWORD *)(v5 + 56) = v10;
      *(_BYTE *)(v5 + 48) = v6;
      *(_DWORD *)(v5 + 64) = v11;
LABEL_8:
      ++*(_DWORD *)(v5 + 72);
    }
  }
LABEL_9:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C18E88, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}

/*
 * XREFs of sub_1406EB948 @ 0x1406EB948
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EB948(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // r15
  void **v6; // rdi
  unsigned __int64 v7; // r14
  void **v8; // rcx
  void **v9; // rsi
  void *v10; // rax
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( qword_140D070E0 )
    sub_14042A5E0(a1, a2);
  if ( qword_140C2ADB0 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v5 = v3 + *(unsigned int *)(a1 + 64) - 1LL;
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2ADC0, 0LL);
    v6 = (void **)(qword_140C2ADB0 + 8 * ((v3 >> 4) & 0x3FFF));
    v7 = qword_140C2ADB0 + 8 * ((v5 >> 4) & 0x3FFF);
    while ( (unsigned __int64)v6 <= v7 )
    {
      v8 = (void **)*v6;
      v9 = v6;
      while ( v8 )
      {
        v10 = v8[1];
        if ( (unsigned __int64)v10 < v3 || (unsigned __int64)v10 > v5 )
        {
          v9 = v8;
        }
        else
        {
          if ( *((_BYTE *)v8 + 48) )
            --dword_140C2ADA4;
          *v9 = *v8;
          _InterlockedOr(v11, 0);
          --dword_140C2ADA0;
          while ( dword_140C2ADA8 )
            _mm_pause();
          ExFreePoolWithTag(v8, 0x70727446u);
        }
        v8 = (void **)*v9;
      }
      ++v6;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2ADC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C2ADC0);
    sub_1402AFC00((ULONG_PTR)&qword_140C2ADC0);
    KeLeaveCriticalRegion();
  }
}

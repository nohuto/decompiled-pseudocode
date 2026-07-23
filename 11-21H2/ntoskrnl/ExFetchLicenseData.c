/*
 * XREFs of ExFetchLicenseData @ 0x1409F95A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // rsi
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rdx
  unsigned int v11; // [rsp+70h] [rbp+18h]

  v11 = 0;
  v6 = *((_QWORD *)sub_140347DB0() + 113);
  if ( !v7 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx(v6 + 46840, 0LL);
  if ( *(_BYTE *)(v6 + 46992) )
    goto LABEL_4;
  v10 = *(unsigned int **)(v6 + 46832);
  if ( *(_QWORD *)v6 )
    v10 = *(unsigned int **)v6;
  if ( !v10 )
  {
LABEL_4:
    v11 = -1073741595;
  }
  else
  {
    *a3 = *v10;
    if ( a1 && a2 && a2 >= *v10 )
    {
      memmove(a1, v10, *v10);
      if ( a2 >= 0x14 )
        *((_DWORD *)a1 + 3) &= ~1u;
    }
    else
    {
      v11 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 46840), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 46840));
  sub_1402AFC00(v6 + 46840);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v11;
}

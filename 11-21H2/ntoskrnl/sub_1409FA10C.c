/*
 * XREFs of sub_1409FA10C @ 0x1409FA10C
 * Callers:
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14085E1D0 @ 0x14085E1D0 (sub_14085E1D0.c)
 */

__int64 __fastcall sub_1409FA10C(__int64 a1)
{
  signed __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+68h] [rbp+10h]
  int v8; // [rsp+70h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  KeyHandle = 0LL;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v8 = sub_14085E1D0(v4, v3, &KeyHandle);
    if ( v8 >= 0 )
    {
      v7 = 1;
      v8 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140A38A60,
             0,
             3u,
             *(PVOID *)(a1 + 46832),
             **(_DWORD **)(a1 + 46832));
    }
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  sub_1402AFC00((ULONG_PTR)v2);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v7 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}

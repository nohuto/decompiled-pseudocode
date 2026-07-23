/*
 * XREFs of sub_140749A80 @ 0x140749A80
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14074B21C @ 0x14074B21C (sub_14074B21C.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140749A80(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  ULONG *v4; // rbx
  unsigned int v5; // r14d
  ULONG DataSize; // esi
  int v7; // eax
  HANDLE v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID Data; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  Data = 0LL;
  ValueName = 0LL;
  KeyHandle = 0LL;
  v3 = sub_14074B21C(v2, &Data);
  v4 = (ULONG *)Data;
  v5 = v3;
  if ( v3 < 0 )
    v4 = 0LL;
  Data = v4;
  if ( v4 )
    DataSize = *v4;
  else
    DataSize = 0;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0
    && (*(_DWORD *)(a1 + 404) == 9 || *(_DWORD *)(a1 + 404) == 3 || *(_DWORD *)(a1 + 404) == 19) )
  {
    goto LABEL_18;
  }
  v7 = sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(a1 + 48), 20, 0, 983103, v4 != 0LL, (__int64)&KeyHandle, 0LL);
  v8 = KeyHandle;
  if ( v7 < 0 )
    v8 = 0LL;
  KeyHandle = v8;
  if ( v8 )
  {
    *(_DWORD *)&ValueName.Length = 2359330;
    ValueName.Buffer = (wchar_t *)L"BasicConfigVector";
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
    v4 = (ULONG *)Data;
    if ( Data )
    {
      ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
      ExAcquireFastMutex(&stru_140C461A0);
      *(_QWORD *)(a1 + 440) = v4;
      KeReleaseGuardedMutex(&stru_140C461A0);
      sub_14076FB70(a1, 512LL);
      v4 = 0LL;
    }
    else
    {
      ZwDeleteValueKey(KeyHandle, &ValueName);
    }
    ExReleaseResourceLite(&stru_140C462A0);
    KeLeaveCriticalRegion();
LABEL_18:
    v8 = KeyHandle;
  }
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v8 = KeyHandle;
  }
  if ( v8 )
    ZwClose(v8);
  return v5;
}

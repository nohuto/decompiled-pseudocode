/*
 * XREFs of sub_140A6D528 @ 0x140A6D528
 * Callers:
 *     sub_140644030 @ 0x140644030 (sub_140644030.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140A09E34 @ 0x140A09E34 (sub_140A09E34.c)
 *     sub_140A6D5D8 @ 0x140A6D5D8 (sub_140A6D5D8.c)
 */

__int64 __fastcall sub_140A6D528(__int64 a1)
{
  bool v3; // bl
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v4[0] = 0LL;
  v4[1] = 0LL;
  v6 = 0;
  if ( _InterlockedIncrement(dword_140D04C9C) > 8 )
    return 3221225473LL;
  ExAcquireFastMutex((PFAST_MUTEX)&stru_140C0E9A8.AttachedDevice);
  v3 = byte_140CE1AD4 != 0;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140C0E9A8.AttachedDevice);
  if ( !v3 )
    return sub_140A6D5D8(a1);
  v7 = a1 + 40;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
  return sub_140A09E34((__int64)v4);
}

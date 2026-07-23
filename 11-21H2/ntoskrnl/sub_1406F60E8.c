/*
 * XREFs of sub_1406F60E8 @ 0x1406F60E8
 * Callers:
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 */

void __fastcall sub_1406F60E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  void *v6; // rcx
  __int64 v7; // rsi
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(void **)(a1 + 64);
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 32) != v7 )
    {
      sub_14030D5C0(*(_QWORD *)(a1 + 32), 0LL, (__int64)v8, a4);
      v6 = *(void **)(a1 + 64);
    }
    MmUnsecureVirtualMemory(v6);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      sub_1402D0930((__int64)v8, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 80) = a1;
}

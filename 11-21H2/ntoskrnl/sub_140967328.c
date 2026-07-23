/*
 * XREFs of sub_140967328 @ 0x140967328
 * Callers:
 *     sub_1407E0D28 @ 0x1407E0D28 (sub_1407E0D28.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

void __fastcall sub_140967328(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rsi
  ULONG_PTR v3; // rbx
  __int64 v4; // r9
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = a1;
  v1 = *(_QWORD *)(a1 + 16);
  memset(v5, 0, sizeof(v5));
  sub_1407A6A34(v1);
  if ( v3 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v3 + 64) )
    {
      sub_14030D5C0(v2, 0LL, (__int64)v5, v4);
      MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 64));
      sub_1402D0930((__int64)v5, 0LL);
      *(_QWORD *)(v3 + 64) = 0LL;
    }
    *(_DWORD *)(v3 + 72) |= 1u;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v3 + 72) |= 4u;
  }
  else
  {
    v3 = 0LL;
  }
  sub_1407B0F40(v1);
  if ( v3 )
    sub_1407A5A54(v3, 1);
}

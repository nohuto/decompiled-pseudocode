/*
 * XREFs of VslAllocateSecureHibernateResources @ 0x14094180C
 * Callers:
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PoSetHiberRange @ 0x14058E8A0 (PoSetHiberRange.c)
 */

__int64 __fastcall VslAllocateSecureHibernateResources(PVOID MemoryMap)
{
  int v2; // ebx
  ULONG_PTR v4[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  v2 = VslpEnterIumSecureMode(2u, 36, 0, (__int64)v4);
  if ( v2 >= 0 )
    PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)v4[3], v4[2], 0x526C7356u);
  return (unsigned int)v2;
}

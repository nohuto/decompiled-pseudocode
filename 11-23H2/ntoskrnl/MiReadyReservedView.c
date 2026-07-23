/*
 * XREFs of MiReadyReservedView @ 0x14062F3E0
 * Callers:
 *     MmMapViewInSystemCache @ 0x14029F8C0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1402A0120 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiCompareTbFlushTimeStamp @ 0x14033DDE8 (MiCompareTbFlushTimeStamp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiReadyReservedView(unsigned __int64 a1, int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[24]; // [rsp+20h] [rbp-D8h] BYREF

  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = *v3;
  if ( qword_140C65B40 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140C65B40;
  if ( MiCompareTbFlushTimeStamp(SHIDWORD(v4), a2) )
  {
    memset(v6, 0, 0xB8uLL);
    v6[3] = 0LL;
    LODWORD(v6[1]) = 20;
    MiInsertTbFlushEntry((__int64)v6, a1, 64LL, 0);
    MiFlushTbList((int *)v6);
  }
  result = ZeroPte;
  *v3 = ZeroPte;
  return result;
}

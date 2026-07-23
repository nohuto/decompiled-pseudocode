/*
 * XREFs of sub_1406EADD4 @ 0x1406EADD4
 * Callers:
 *     PoUserShutdownCancelled @ 0x1406EADA0 (PoUserShutdownCancelled.c)
 *     sub_140990340 @ 0x140990340 (sub_140990340.c)
 * Callees:
 *     sub_14025DC0C @ 0x14025DC0C (sub_14025DC0C.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1406EADD4(int a1)
{
  char v1; // di
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = 0;
  sub_140A48330(a1);
  if ( byte_140C235C8 )
  {
    KeCancelTimer(&stru_140C23520);
    dword_140C4EEF8 = 0;
    byte_140C235C8 = 0;
    v2 = 1;
  }
  sub_140A47CF8(v4, v3);
  result = qword_140C5AD50;
  if ( qword_140C5AD50 )
  {
    LOBYTE(v6) = v1;
    result = sub_14042A5E0(v6, v5);
    v2 = result;
  }
  if ( v2 )
    return sub_14025DC0C(3);
  return result;
}

/*
 * XREFs of CmpLogFlushPhaseStart @ 0x140752D70
 * Callers:
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmpLogFlushPhaseStart(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  char v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140C043C8 > 4 )
  {
    v3 = a2;
    v5 = &v3;
    v7 = 0;
    v6 = 1;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C043C8,
             (unsigned __int8 *)byte_140036B5B,
             0LL,
             0LL,
             3u,
             &v4);
  }
  return result;
}

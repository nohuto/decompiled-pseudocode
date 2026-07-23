/*
 * XREFs of sub_140829870 @ 0x140829870
 * Callers:
 *     sub_140A693D8 @ 0x140A693D8 (sub_140A693D8.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall sub_140829870(__int64 a1)
{
  __int16 v1; // ax
  int v3; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  __int128 v6; // [rsp+58h] [rbp-20h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 208);
  Handle = 0LL;
  v6 = 0LL;
  WORD4(v6) = v1;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 200);
  v3 = PsCreateSystemThreadEx(
         (int)&Handle,
         0x1FFFFF,
         0LL,
         0LL,
         0LL,
         (__int64)sub_1403CB9F0,
         a1,
         &v6,
         (_DWORD *)(a1 + 36));
  if ( v3 < 0 )
  {
    if ( dword_140D0501C )
      KeCancelTimer((PKTIMER)(a1 + 34328));
  }
  else
  {
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}

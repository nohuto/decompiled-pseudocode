/*
 * XREFs of sub_14062D8E4 @ 0x14062D8E4
 * Callers:
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14062D8E4(int a1, int a2)
{
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-38h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  __int64 v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+80h] [rbp+8h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( qword_140C15FD0 )
  {
    *(_QWORD *)&v3.Size = 4LL;
    v3.Ptr = (ULONGLONG)&v6;
    v5 = 4LL;
    v4 = &v7;
    return EtwWriteEx(qword_140C15FD0, &stru_140038E60, 0LL, 0, 0LL, 0LL, 2u, &v3);
  }
  return result;
}

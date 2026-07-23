/*
 * XREFs of sub_1406E3BE0 @ 0x1406E3BE0
 * Callers:
 *     sub_1407D7CA0 @ 0x1407D7CA0 (sub_1407D7CA0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1406E3BE0(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  int v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  v3.Ptr = (ULONGLONG)&v7;
  v3.Reserved = 0;
  v3.Size = 4;
  v4 = &v8;
  v6 = 0;
  v5 = 4;
  return EtwWrite(qword_140C15DF8, &stru_14000ED10, 0LL, 2u, &v3);
}

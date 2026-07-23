/*
 * XREFs of sub_1409E0824 @ 0x1409E0824
 * Callers:
 *     sub_1406DEC48 @ 0x1406DEC48 (sub_1406DEC48.c)
 *     sub_140797650 @ 0x140797650 (sub_140797650.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1409E0824(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v6.Ptr = *(_QWORD *)(a4 + 32) + 40LL;
  v6.Reserved = 0;
  v6.Size = 16;
  v7 = &a5;
  v9 = 0;
  v8 = 4;
  return EtwWrite(qword_140C15FA8, &stru_140014A68, 0LL, 2u, &v6);
}

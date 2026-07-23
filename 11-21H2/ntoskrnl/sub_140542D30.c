/*
 * XREFs of sub_140542D30 @ 0x140542D30
 * Callers:
 *     sub_140542C10 @ 0x140542C10 (sub_140542C10.c)
 *     sub_14092FB38 @ 0x14092FB38 (sub_14092FB38.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140542D30(REGHANDLE *a1, __int64 a2, const GUID *a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v7 = a4;
  v9 = 0;
  v8 = 16;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return sub_1402D1760(a1, (const EVENT_DESCRIPTOR *)qword_14003ACF8, a3, 3u, &v6);
}

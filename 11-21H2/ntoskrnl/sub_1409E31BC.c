/*
 * XREFs of sub_1409E31BC @ 0x1409E31BC
 * Callers:
 *     sub_1409E2E90 @ 0x1409E2E90 (sub_1409E2E90.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E31BC(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  UserData.Reserved = 0;
  v6 = 0;
  v4 = a2 + 1;
  v2 = 68 * *a2;
  UserData.Ptr = (ULONGLONG)a2;
  UserData.Size = 4;
  v5 = v2;
  if ( a1 )
  {
    sub_1402AB170((__int64)&UserData, *(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 2u, 0x27Du, 0x401804u);
  }
  else
  {
    sub_14035EDE4((__int64)&UserData, 2u, 0x20800000u, 0x27Du, 0x401804u);
    if ( qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4544) & 0x800000) != 0 )
      EtwWrite(qword_140C15FB0, &stru_140037F38, 0LL, 2u, &UserData);
  }
}

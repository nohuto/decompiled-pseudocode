/*
 * XREFs of sub_14055BBDC @ 0x14055BBDC
 * Callers:
 *     sub_140A65D84 @ 0x140A65D84 (sub_140A65D84.c)
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char __fastcall sub_14055BBDC(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // rcx
  const GUID *ActivityId; // r8
  const EVENT_DESCRIPTOR *v5; // rdx
  BOOL v6; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  BOOL *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v6 = a2 == 258;
  result = sub_14055A67C();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v10;
    v5 = (const EVENT_DESCRIPTOR *)qword_140039268;
    v9 = 4LL;
    v8 = &v6;
    if ( (*(_DWORD *)(v3 + 80) & 1) == 0 )
      v5 = &stru_140038EC0;
    return EtwWriteEx(qword_140D00A98, v5, (ULONG64)ActivityId, 0, ActivityId, ActivityId, 2u, &UserData);
  }
  return result;
}

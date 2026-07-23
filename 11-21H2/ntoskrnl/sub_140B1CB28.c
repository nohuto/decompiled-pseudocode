/*
 * XREFs of sub_140B1CB28 @ 0x140B1CB28
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_1403B7244 @ 0x1403B7244 (sub_1403B7244.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 */

int sub_140B1CB28()
{
  int result; // eax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  const EVENT_DESCRIPTOR *v4; // rdx
  REGHANDLE RegHandle; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+64h] [rbp-1Ch]
  __int64 v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  RegHandle = 0LL;
  result = sub_1403B7244((const GUID *)&qword_1400128A0, 1, &RegHandle);
  if ( result >= 0 )
  {
    v1 = *(_QWORD *)(qword_140D068D0 + 240);
    UserData.Reserved = 0;
    UserData.Ptr = v1 + 2896;
    UserData.Size = 4;
    v2 = *(_QWORD *)(qword_140D068D0 + 240);
    v9 = 0;
    v7 = v2 + 2888;
    v8 = 4;
    v3 = *(_QWORD *)(qword_140D068D0 + 240);
    v12 = 0;
    v10 = v3 + 2892;
    v11 = 4;
    v4 = &stru_140012880;
    if ( *(int *)(*(_QWORD *)(qword_140D068D0 + 240) + 2896LL) < 0 )
      v4 = (const EVENT_DESCRIPTOR *)qword_140037C68;
    result = EtwWriteEx(RegHandle, v4, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  if ( RegHandle )
    return EtwUnregister(RegHandle);
  return result;
}

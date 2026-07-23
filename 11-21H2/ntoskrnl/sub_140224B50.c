/*
 * XREFs of sub_140224B50 @ 0x140224B50
 * Callers:
 *     sub_140224A24 @ 0x140224A24 (sub_140224A24.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

BOOLEAN __fastcall sub_140224B50(__int64 a1, __int64 a2)
{
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rcx
  BOOLEAN result; // al
  REGHANDLE v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF

  v2 = dword_140C20394;
  v3 = *(_QWORD *)(qword_140C20398 + 8LL * (unsigned int)dword_140C20394);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = (unsigned int)(v2 + 1);
      dword_140C20394 = v4;
      result = sub_14042A5E0(v4, a2, v3);
      if ( !result )
        break;
      v2 = dword_140C20394;
      v3 = *(_QWORD *)(qword_140C20398 + 8LL * (unsigned int)dword_140C20394);
      if ( !v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = sub_140224C00(&qword_140C22FE0);
    if ( byte_140C5AE30 )
    {
      v6 = qword_140C1F580;
      result = EtwEventEnabled(qword_140C1F580, &stru_14000E930);
      if ( result )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&qword_140C204B8;
        return EtwWriteEx(v6, &stru_14000E930, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
  }
  return result;
}

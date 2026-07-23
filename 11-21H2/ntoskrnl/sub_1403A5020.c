/*
 * XREFs of sub_1403A5020 @ 0x1403A5020
 * Callers:
 *     sub_1403A4B90 @ 0x1403A4B90 (sub_1403A4B90.c)
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 * Callees:
 *     sub_140259568 @ 0x140259568 (sub_140259568.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_140395628 @ 0x140395628 (sub_140395628.c)
 *     sub_1403A51D0 @ 0x1403A51D0 (sub_1403A51D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1403A5020(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  const WCHAR *v5; // r11
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  const WCHAR *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  _WORD v18[64]; // [rsp+80h] [rbp-80h] BYREF

  v11 = a1;
  result = sub_1403A51D0();
  if ( byte_140C5AE14 )
  {
    result = EtwEventEnabled(RegHandle, &stru_140010280);
    if ( result )
    {
      v2 = *(_QWORD *)(v11 + 72LL * *(char *)(v11 + 66) + 200);
      v3 = *(int *)(v11 + 48);
      v10 = v3;
      v4 = *(_DWORD *)(v2 + 188);
      if ( (int)v3 >= 0 || v4 )
      {
        v5 = &word_1404370A0;
        if ( v4 == 1 )
        {
          v5 = &word_1404370A0;
          if ( *(_BYTE *)(v2 + 184) == 2 )
          {
            v7 = *(_QWORD *)(v2 + 24);
            if ( v7 )
              v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
            else
              v8 = 0LL;
            sub_140355058(v8, 0, 23, v3);
            v5 = &word_1404370A0;
          }
        }
      }
      else
      {
        v9 = sub_140259568(v11);
        if ( (int)sub_140395628(v9, v18) >= 0 )
          v5 = v18;
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v11;
      v13 = &v10;
      v6 = -1LL;
      v14 = 4LL;
      v15 = v5;
      do
        ++v6;
      while ( v5[v6] );
      v16 = 2 * v6 + 2;
      v17 = 0;
      return EtwWriteEx(RegHandle, &stru_140010280, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}

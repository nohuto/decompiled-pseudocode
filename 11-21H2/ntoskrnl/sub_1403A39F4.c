/*
 * XREFs of sub_1403A39F4 @ 0x1403A39F4
 * Callers:
 *     sub_1403A39B8 @ 0x1403A39B8 (sub_1403A39B8.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140395628 @ 0x140395628 (sub_140395628.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1403A39F4(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  int v4; // eax
  const WCHAR *v5; // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-A8h]
  __int64 v11; // [rsp+68h] [rbp-A0h]
  const WCHAR *v12; // [rsp+70h] [rbp-98h]
  int v13; // [rsp+78h] [rbp-90h]
  int v14; // [rsp+7Ch] [rbp-8Ch]
  _WORD v15[64]; // [rsp+88h] [rbp-80h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF
  __int64 v17; // [rsp+128h] [rbp+20h] BYREF

  v2 = &retaddr;
  v17 = a1;
  v8 = a2;
  if ( byte_140C5AE14 )
  {
    LOBYTE(v2) = EtwEventEnabled(RegHandle, &stru_140010260);
    if ( (_BYTE)v2 )
    {
      v4 = sub_140395628(a2, v15);
      *(_QWORD *)&UserData.Size = 8LL;
      v11 = 8LL;
      v5 = v15;
      if ( v4 < 0 )
        v5 = &word_1404370A0;
      UserData.Ptr = (ULONGLONG)&v17;
      v10 = &v8;
      v6 = -1LL;
      v12 = v5;
      do
        ++v6;
      while ( v5[v6] );
      v13 = 2 * v6 + 2;
      v14 = 0;
      LOBYTE(v2) = EtwWriteEx(RegHandle, &stru_140010260, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}

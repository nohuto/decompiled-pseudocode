/*
 * XREFs of sub_14055B244 @ 0x14055B244
 * Callers:
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14055B244(const GUID *a1, ...)
{
  int v2; // eax
  _DWORD *v3; // rcx
  const EVENT_DESCRIPTOR *v4; // rdx
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  va_list v12; // [rsp+88h] [rbp-80h]
  __int64 v13; // [rsp+90h] [rbp-78h]
  va_list v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A0h] [rbp-68h]
  va_list v16; // [rsp+A8h] [rbp-60h]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v19; // [rsp+D8h] [rbp-30h]
  __int64 v20; // [rsp+E0h] [rbp-28h]
  __int64 *v21; // [rsp+E8h] [rbp-20h]
  __int64 v22; // [rsp+F0h] [rbp-18h]
  __int64 *v23; // [rsp+F8h] [rbp-10h]
  __int64 v24; // [rsp+100h] [rbp-8h]
  __int64 *v25; // [rsp+108h] [rbp+0h]
  __int64 v26; // [rsp+110h] [rbp+8h]
  __int64 *v27; // [rsp+118h] [rbp+10h]
  __int64 v28; // [rsp+120h] [rbp+18h]
  __int64 v29; // [rsp+170h] [rbp+68h] BYREF
  va_list va; // [rsp+170h] [rbp+68h]
  __int64 v31; // [rsp+178h] [rbp+70h] BYREF
  va_list va1; // [rsp+178h] [rbp+70h]
  __int64 v33; // [rsp+180h] [rbp+78h] BYREF
  va_list va2; // [rsp+180h] [rbp+78h]
  __int64 v35; // [rsp+188h] [rbp+80h] BYREF
  va_list va3; // [rsp+188h] [rbp+80h]
  va_list va4; // [rsp+190h] [rbp+88h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v35 = va_arg(va4, _QWORD);
  LOBYTE(v2) = sub_14055A67C();
  if ( (_BYTE)v2 )
  {
    if ( !v3[104] )
    {
      v2 = v3[78];
      if ( (v2 & 1) != 0 )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        va_copy((va_list)UserData.Ptr, va);
        v4 = (const EVENT_DESCRIPTOR *)qword_140037D58;
        v13 = 8LL;
        va_copy(v12, va1);
        va_copy(v14, va2);
        va_copy(v16, va3);
        if ( (v3[20] & 1) == 0 )
          v4 = &stru_140037D98;
        v15 = 8LL;
        v17 = 8LL;
        LOBYTE(v2) = EtwWriteEx(qword_140D00A98, v4, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        if ( (unsigned int)dword_140C064E0 > 5 )
        {
          LOBYTE(v2) = sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL);
          if ( (_BYTE)v2 )
          {
            v6 = 0x1000000LL;
            v19 = &v6;
            v7 = v29;
            v20 = 8LL;
            v21 = &v7;
            v8 = v31;
            v23 = &v8;
            v9 = v33;
            v25 = &v9;
            v10 = v35;
            v27 = &v10;
            v22 = 8LL;
            v24 = 8LL;
            v26 = 8LL;
            v28 = 8LL;
            LOBYTE(v2) = sub_14020A9C4(
                           (__int64)&dword_140C064E0,
                           (unsigned __int8 *)byte_14002B191,
                           a1 + 60,
                           a1 + 59,
                           7u,
                           &v18);
          }
        }
      }
    }
  }
  return v2;
}

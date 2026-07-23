/*
 * XREFs of sub_14055B970 @ 0x14055B970
 * Callers:
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char __fastcall sub_14055B970(const GUID *a1, __int64 a2)
{
  int v3; // eax
  _DWORD *v4; // rcx
  const EVENT_DESCRIPTOR *v5; // rdx
  __int64 v7; // [rsp+40h] [rbp-19h] BYREF
  __int64 v8; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]
  __int64 *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF

  v17 = a2;
  LOBYTE(v3) = sub_14055A67C();
  if ( (_BYTE)v3 )
  {
    if ( !v4[104] )
    {
      v3 = v4[78];
      if ( (v3 & 1) != 0 )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v17;
        v5 = (const EVENT_DESCRIPTOR *)qword_1400382F8;
        if ( (v4[20] & 1) == 0 )
          v5 = &stru_1400397B8;
        UserData.Size = 8;
        LOBYTE(v3) = EtwWriteEx(qword_140D00A98, v5, 0LL, 0, 0LL, 0LL, 1u, &UserData);
        if ( (unsigned int)dword_140C064E0 > 5 )
        {
          LOBYTE(v3) = sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v13 = 0;
            v16 = 0;
            v11 = &v7;
            v8 = v17;
            v7 = 0x1000000LL;
            v14 = &v8;
            v12 = 8;
            v15 = 8;
            LOBYTE(v3) = sub_14020A9C4(
                           (__int64)&dword_140C064E0,
                           (unsigned __int8 *)word_14002B332,
                           a1 + 60,
                           a1 + 59,
                           4u,
                           &v10);
          }
        }
      }
    }
  }
  return v3;
}

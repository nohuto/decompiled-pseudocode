/*
 * XREFs of sub_14055AD48 @ 0x14055AD48
 * Callers:
 *     sub_140A66B0C @ 0x140A66B0C (sub_140A66B0C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char __fastcall sub_14055AD48(const GUID *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  __int64 v7; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+8Ch] [rbp+33h]
  __int64 *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]
  __int64 v16; // [rsp+C8h] [rbp+6Fh] BYREF

  v16 = a2;
  LOBYTE(v3) = sub_14055A67C();
  if ( (_BYTE)v3 )
  {
    if ( !*(_DWORD *)(v4 + 416) )
    {
      v3 = *(_DWORD *)(v4 + 312);
      if ( (v3 & 1) != 0 )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v16;
        UserData.Size = 8;
        LOBYTE(v3) = EtwWriteEx(qword_140D00A98, &stru_1400379E8, 0LL, 0, 0LL, 0LL, 1u, &UserData);
        if ( (unsigned int)dword_140C064E0 > 5 )
        {
          LOBYTE(v3) = sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v12 = 0;
            v15 = 0;
            v10 = &v6;
            v7 = v16;
            v6 = 0x1000000LL;
            v13 = &v7;
            v11 = 8;
            v14 = 8;
            LOBYTE(v3) = sub_14020A9C4(
                           (__int64)&dword_140C064E0,
                           (unsigned __int8 *)byte_14002B540,
                           a1 + 60,
                           a1 + 59,
                           4u,
                           &v9);
          }
        }
      }
    }
  }
  return v3;
}

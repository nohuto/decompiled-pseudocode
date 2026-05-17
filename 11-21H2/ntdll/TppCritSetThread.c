/*
 * XREFs of TppCritSetThread @ 0x180014EE8
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x1800A4670 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x1800A4890 (NtAdjustPrivilegesToken.c)
 *     NtDuplicateToken @ 0x1800A48B0 (NtDuplicateToken.c)
 *     NtSetInformationObject @ 0x1800A4BE0 (NtSetInformationObject.c)
 */

int __fastcall TppCritSetThread(HANDLE *a1)
{
  struct _TEB *v2; // rax
  __int16 v4; // [rsp+30h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  int v6; // [rsp+40h] [rbp-88h] BYREF
  __int64 v7; // [rsp+48h] [rbp-80h] BYREF
  HANDLE v8[2]; // [rsp+50h] [rbp-78h] BYREF
  int v9; // [rsp+60h] [rbp-68h] BYREF
  __int128 v10; // [rsp+68h] [rbp-60h]
  int v11; // [rsp+78h] [rbp-50h]
  __int128 v12; // [rsp+80h] [rbp-48h]
  int v13; // [rsp+90h] [rbp-38h] BYREF
  __int64 v14; // [rsp+94h] [rbp-34h]
  int v15; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+A4h] [rbp-24h]
  int v17; // [rsp+ACh] [rbp-1Ch]

  v9 = 48;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  *a1 = 0LL;
  v2 = NtCurrentTeb();
  if ( (v2->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    LODWORD(v2) = NtOpenProcessTokenEx(-1LL, 2LL, 0LL, v8);
    if ( (int)v2 >= 0 )
    {
      v14 = 2LL;
      v13 = 12;
      *((_QWORD *)&v12 + 1) = &v13;
      if ( (int)NtDuplicateToken(v8[0], 36LL, &v9, 0LL, 2, &Handle) >= 0 )
      {
        v4 = 256;
        if ( (int)NtSetInformationObject(Handle, 4LL, &v4, 2LL) >= 0 )
        {
          if ( (int)NtSetInformationThread(-2LL, 5LL, &Handle, 8LL) >= 0 )
          {
            v15 = 1;
            v8[1] = (HANDLE)20;
            v16 = 20LL;
            v17 = 2;
            if ( (int)NtAdjustPrivilegesToken(Handle, 0LL, &v15, 16LL, 0LL, 0LL) >= 0 )
            {
              v6 = 1;
              if ( (int)NtSetInformationThread(-2LL, 18LL, &v6, 4LL) >= 0 )
              {
                *a1 = Handle;
                Handle = 0LL;
              }
            }
            v7 = 0LL;
            NtSetInformationThread(-2LL, 5LL, &v7, 8LL);
          }
          if ( Handle )
          {
            v4 = 0;
            NtSetInformationObject(Handle, 4LL, &v4, 2LL);
          }
        }
        if ( Handle )
          NtClose(Handle);
      }
      LODWORD(v2) = NtClose(v8[0]);
    }
  }
  return (int)v2;
}

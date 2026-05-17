/*
 * XREFs of TppCritSetThread @ 0x18007E584
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x1800A14B0 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x1800A16D0 (NtAdjustPrivilegesToken.c)
 *     NtDuplicateToken @ 0x1800A16F0 (NtDuplicateToken.c)
 *     NtSetInformationObject @ 0x1800A1A20 (NtSetInformationObject.c)
 */

int __fastcall TppCritSetThread(HANDLE *a1)
{
  struct _TEB *v2; // rax
  int v4; // [rsp+20h] [rbp-A8h]
  __int16 v5; // [rsp+30h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  int v7; // [rsp+40h] [rbp-88h] BYREF
  __int64 v8; // [rsp+48h] [rbp-80h] BYREF
  HANDLE v9[2]; // [rsp+50h] [rbp-78h] BYREF
  int v10; // [rsp+60h] [rbp-68h] BYREF
  __int128 v11; // [rsp+68h] [rbp-60h]
  int v12; // [rsp+78h] [rbp-50h]
  __int128 v13; // [rsp+80h] [rbp-48h]
  int v14; // [rsp+90h] [rbp-38h] BYREF
  __int64 v15; // [rsp+94h] [rbp-34h]
  int v16; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+A4h] [rbp-24h]
  int v18; // [rsp+ACh] [rbp-1Ch]

  v10 = 48;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  *a1 = 0LL;
  v2 = NtCurrentTeb();
  if ( (v2->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    LODWORD(v2) = NtOpenProcessTokenEx(-1LL, 2LL, 0LL, v9);
    if ( (int)v2 >= 0 )
    {
      v15 = 2LL;
      v14 = 12;
      *((_QWORD *)&v13 + 1) = &v14;
      v4 = 2;
      if ( (int)NtDuplicateToken(v9[0], 36LL, &v10, 0LL, v4, &Handle) >= 0 )
      {
        v5 = 256;
        if ( (int)NtSetInformationObject(Handle, 4LL, &v5, 2LL) >= 0 )
        {
          if ( (int)NtSetInformationThread(-2LL, 5LL, &Handle) >= 0 )
          {
            v16 = 1;
            v9[1] = (HANDLE)20;
            v17 = 20LL;
            v18 = 2;
            if ( (int)NtAdjustPrivilegesToken(Handle, 0LL, &v16) >= 0 )
            {
              v7 = 1;
              if ( (int)NtSetInformationThread(-2LL, 18LL, &v7) >= 0 )
              {
                *a1 = Handle;
                Handle = 0LL;
              }
            }
            v8 = 0LL;
            NtSetInformationThread(-2LL, 5LL, &v8);
          }
          if ( Handle )
          {
            v5 = 0;
            NtSetInformationObject(Handle, 4LL, &v5, 2LL);
          }
        }
        if ( Handle )
          NtClose(Handle);
      }
      LODWORD(v2) = NtClose(v9[0]);
    }
  }
  return (int)v2;
}

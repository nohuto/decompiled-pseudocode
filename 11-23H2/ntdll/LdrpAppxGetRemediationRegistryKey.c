/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800D649C
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D5FE0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     RtlStringCbCatW @ 0x18007F404 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x18007F4B0 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800A33C0 (NtOpenKeyEx.c)
 */

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r11
  char *v6; // rcx
  __int64 v7; // r11
  __int64 v8; // rax
  signed __int64 v9; // rdx
  __int16 v10; // r8
  char *v11; // rax
  __int64 v12; // r11
  __int16 v13; // ax
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int128 *v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+70h] [rbp-90h]
  __int128 v20; // [rsp+78h] [rbp-88h]
  _WORD v21[264]; // [rsp+90h] [rbp-70h] BYREF

  result = RtlGetPersistedStateLocation(
             L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             0,
             v21,
             0x20Au,
             (unsigned int *)&v14);
  if ( (int)result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      v15 = 0LL;
      result = RtlStringLengthWorkerW(v21, 0x7FFFLL, &v14);
      if ( (int)result < 0 )
        return result;
      LOWORD(v15) = 2 * v14;
      v13 = 2 * v14 + 2;
      goto LABEL_17;
    }
    result = RtlStringLengthWorkerW(v21, 261LL, &v14);
    if ( (int)result >= 0 )
    {
      v6 = (char *)&v21[v14];
      v7 = v5 - v14;
      if ( v7 )
      {
        v8 = v7 + v14 + 2147483385;
        v9 = (char *)L"\\PackageList\\" - v6;
        do
        {
          if ( !v8 )
            break;
          v10 = *(_WORD *)&v6[v9];
          if ( !v10 )
            break;
          *(_WORD *)v6 = v10;
          --v8;
          v6 += 2;
          --v7;
        }
        while ( v7 );
      }
      v11 = v6 - 2;
      if ( v7 )
        v11 = v6;
      v12 = -v7;
      *(_WORD *)v11 = 0;
      result = v12 == 0 ? 0x80000005 : 0;
      if ( v12 )
      {
        result = RtlStringCbCatW((__int64)v21, 0x20AuLL, a2);
        if ( (int)result >= 0 )
        {
          v15 = 0LL;
          result = RtlStringLengthWorkerW(v21, 0x7FFFLL, &v14);
          if ( (int)result >= 0 )
          {
            LOWORD(v15) = 2 * v14;
            v13 = 2 * v14 + 2;
LABEL_17:
            WORD1(v15) = v13;
            v16 = 48;
            *((_QWORD *)&v15 + 1) = v21;
            v17 = 0LL;
            v18 = &v15;
            v19 = 64;
            v20 = 0LL;
            return NtOpenKeyEx();
          }
        }
      }
    }
  }
  return result;
}

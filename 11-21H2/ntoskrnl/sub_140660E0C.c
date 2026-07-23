/*
 * XREFs of sub_140660E0C @ 0x140660E0C
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 */

signed __int16 __fastcall sub_140660E0C(_QWORD *a1, _QWORD *a2, char a3, char a4, char a5, char a6)
{
  signed __int16 result; // ax
  const GUID *v11; // r9
  __int64 v12; // rax
  char v13; // [rsp+38h] [rbp-49h] BYREF
  char v14; // [rsp+39h] [rbp-48h] BYREF
  char v15; // [rsp+3Ah] [rbp-47h] BYREF
  char v16; // [rsp+3Bh] [rbp-46h] BYREF
  LONGLONG v17; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-39h] BYREF
  LONGLONG *v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  char *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  char *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  char *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  char *v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]

  result = RtlRunOnceExecuteOnce(&stru_140CE2150, sub_140662030, 0LL, 0LL);
  if ( a1 )
  {
    if ( a2 )
    {
      if ( *a1 )
      {
        if ( *a2 )
        {
          if ( stru_140CE2158.QuadPart )
          {
            result = _InterlockedDecrement16(&word_140C0B8B4);
            if ( !result )
            {
              if ( (unsigned int)dword_140C03098 > 5 )
              {
                if ( sub_1402A2000((__int64)&dword_140C03098, 0x200000000000LL) )
                {
                  v12 = 1000000LL * (*a2 - *a1);
                  v20 = 8LL;
                  v13 = a3;
                  v22 = 1LL;
                  v17 = v12 / stru_140CE2158.QuadPart;
                  v19 = &v17;
                  v21 = &v13;
                  v23 = &v14;
                  v15 = a5;
                  v25 = &v15;
                  v16 = a6;
                  v27 = &v16;
                  v14 = a4;
                  v24 = 1LL;
                  v26 = 1LL;
                  v28 = 1LL;
                  sub_14020A9C4((__int64)&dword_140C03098, (unsigned __int8 *)&byte_14003423F, 0LL, v11, 7u, &v18);
                }
              }
              result = word_140C0B8B4;
              word_140C0B8B4 = 100;
            }
          }
        }
      }
    }
  }
  return result;
}

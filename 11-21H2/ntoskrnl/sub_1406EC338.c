/*
 * XREFs of sub_1406EC338 @ 0x1406EC338
 * Callers:
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 *     sub_14097FF40 @ 0x14097FF40 (sub_14097FF40.c)
 *     sub_140980040 @ 0x140980040 (sub_140980040.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1406EC338(PEPROCESS Process, char a2, __int64 a3)
{
  REGHANDLE v3; // rdi
  BOOLEAN result; // al
  ULONG v8; // r9d
  __int64 *v9; // rdx
  unsigned int ProcessId; // [rsp+38h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  __int64 v12; // [rsp+58h] [rbp-9h]
  int v13; // [rsp+60h] [rbp-1h]
  int v14; // [rsp+64h] [rbp+3h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  __int64 v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  __int64 v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  __int64 v24; // [rsp+98h] [rbp+37h]
  int v25; // [rsp+A0h] [rbp+3Fh]
  int v26; // [rsp+A4h] [rbp+43h]

  v3 = qword_140C15FB0;
  result = EtwProviderEnabled(qword_140C15FB0, 0, 0x80uLL);
  if ( result )
  {
    UserData.Reserved = 0;
    v14 = 0;
    ProcessId = (unsigned int)PsGetProcessId(Process);
    UserData.Size = 4;
    v8 = 2;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v13 = 4;
    if ( (a2 & 2) != 0 )
    {
      v12 = a3;
      v9 = qword_14000EE98;
      if ( (a2 & 1) == 0 )
        v9 = (__int64 *)&stru_14000EE88;
    }
    else
    {
      v12 = a3 + 32;
      if ( (a2 & 1) != 0 )
      {
        v9 = qword_14000EE58;
      }
      else
      {
        v17 = 0;
        v20 = 0;
        v9 = qword_14000EE68;
        v23 = 0;
        v26 = 0;
        v18 = a3 + 8;
        v21 = a3 + 16;
        v24 = a3 + 24;
        v8 = 6;
        v15 = a3;
        v16 = 8;
        v19 = 8;
        v22 = 8;
        v25 = 8;
      }
    }
    return EtwWrite(v3, (PCEVENT_DESCRIPTOR)v9, 0LL, v8, &UserData);
  }
  return result;
}

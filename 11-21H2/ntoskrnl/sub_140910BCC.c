/*
 * XREFs of sub_140910BCC @ 0x140910BCC
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

char __fastcall sub_140910BCC(__int64 a1, unsigned __int16 *a2)
{
  _UNKNOWN **v2; // rax
  char v4; // bl
  __int64 CurrentThreadProcess; // rax
  int v7; // r8d
  unsigned __int16 *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int16 v12; // [rsp+38h] [rbp-39h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[3]; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp+7h] BYREF
  __int64 v16; // [rsp+88h] [rbp+17h]
  int v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+94h] [rbp+23h]
  __int16 *v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+A4h] [rbp+33h]
  __int64 v22; // [rsp+A8h] [rbp+37h]
  int v23; // [rsp+B0h] [rbp+3Fh]
  int v24; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  v4 = 0;
  memset(v14, 0, sizeof(v14));
  if ( qword_140C16480 )
  {
    LOBYTE(v2) = EtwEventEnabled(qword_140C16480, &stru_140037F90);
    if ( (_BYTE)v2 )
    {
      if ( (*(_DWORD *)(a1 + 160) & 1) == 0 )
      {
        sub_140AB4550(v14);
        v4 = 1;
      }
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      v7 = *a2;
      v8 = *(unsigned __int16 **)(CurrentThreadProcess + 1472);
      LOWORD(CurrentThreadProcess) = *v8;
      UserData.Reserved = 0;
      v12 = (unsigned __int16)CurrentThreadProcess >> 1;
      v13 = (unsigned __int16)v7 >> 1;
      UserData.Ptr = (ULONGLONG)&v12;
      UserData.Size = 2;
      v9 = *((_QWORD *)v8 + 1);
      v10 = *v8;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = v9;
      v19 = &v13;
      v22 = *((_QWORD *)a2 + 1);
      v17 = v10;
      v20 = 2;
      v23 = v7;
      LOBYTE(v2) = EtwWrite(qword_140C16480, &stru_140037F90, 0LL, 4u, &UserData);
      if ( v4 )
        LOBYTE(v2) = sub_140AB4580(v14);
    }
  }
  return (char)v2;
}

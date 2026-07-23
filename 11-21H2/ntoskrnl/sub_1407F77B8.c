/*
 * XREFs of sub_1407F77B8 @ 0x1407F77B8
 * Callers:
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1407F77B8(__int64 a1, int a2, char a3)
{
  __int64 CurrentThreadProcess; // rax
  unsigned __int16 *v7; // r9
  _WORD *v8; // r10
  unsigned __int64 v9; // rax
  bool v10; // zf
  _WORD *v11; // r9
  const WCHAR *v12; // r9
  const WCHAR *v13; // r10
  const WCHAR *v14; // rdx
  char v16; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  char v22[16]; // [rsp+78h] [rbp+7h] BYREF
  int *v23; // [rsp+88h] [rbp+17h]
  __int64 v24; // [rsp+90h] [rbp+1Fh]
  __int64 v25; // [rsp+98h] [rbp+27h]
  __int64 v26; // [rsp+A0h] [rbp+2Fh]
  char *v27; // [rsp+A8h] [rbp+37h]
  __int64 v28; // [rsp+B0h] [rbp+3Fh]

  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v7 = *(unsigned __int16 **)(CurrentThreadProcess + 1472);
  if ( v7 )
  {
    v8 = (_WORD *)*((_QWORD *)v7 + 1);
    v9 = (unsigned __int64)*v7 >> 1;
    v10 = 2 * v9 == 0;
    CurrentThreadProcess = 2 * v9;
    v11 = (_WORD *)((char *)v8 + CurrentThreadProcess);
    if ( !v10 )
    {
      do
      {
        if ( *v11 == 92 )
          break;
        --v11;
      }
      while ( v11 != v8 );
    }
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      LOBYTE(CurrentThreadProcess) = sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL);
      if ( (_BYTE)CurrentThreadProcess )
      {
        v18 = 0x2000000LL;
        v14 = v12 + 1;
        v21 = 8LL;
        if ( v12 == v13 )
          v14 = v12;
        v20 = &v18;
        sub_1402A2094((__int64)v22, v14);
        v17 = a2;
        v23 = &v17;
        v24 = 4LL;
        v27 = &v16;
        v25 = a1;
        v26 = 16LL;
        v16 = a3;
        v28 = 1LL;
        LOBYTE(CurrentThreadProcess) = sub_14020A9C4(
                                         (__int64)&dword_140C03A00,
                                         (unsigned __int8 *)byte_14003006D,
                                         0LL,
                                         0LL,
                                         7u,
                                         &v19);
      }
    }
  }
  return CurrentThreadProcess;
}

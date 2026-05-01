/*
 * XREFs of CrmGlobalsRegistrationRundownHelper @ 0x18002FC28
 * Callers:
 *     CrmGlobalsRundown @ 0x18002E744 (CrmGlobalsRundown.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CrmLogActivityUpdate @ 0x180031800 (CrmLogActivityUpdate.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRundownHelper(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 *i; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+60h] [rbp-49h] BYREF
  __int64 v9; // [rsp+80h] [rbp-29h]
  int v10; // [rsp+88h] [rbp-21h]
  int v11; // [rsp+8Ch] [rbp-1Dh]
  _QWORD *v12; // [rsp+90h] [rbp-19h]
  int v13; // [rsp+98h] [rbp-11h]
  int v14; // [rsp+9Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+A0h] [rbp-9h] BYREF
  UUID *v16; // [rsp+C0h] [rbp+17h]
  int v17; // [rsp+C8h] [rbp+1Fh]
  int v18; // [rsp+CCh] [rbp+23h]
  _QWORD *v19; // [rsp+D0h] [rbp+27h]
  int v20; // [rsp+D8h] [rbp+2Fh]
  int v21; // [rsp+DCh] [rbp+33h]

  v1 = a1 - 32;
  v2 = MEMORY[0x7FFE0008];
  if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 2LL) )
  {
    v6 = *(_QWORD *)(v1 + 16);
    v11 = 0;
    v14 = 0;
    v7[0] = v6;
    v12 = v7;
    v9 = v5;
    v10 = 16;
    v13 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BDBD0,
      0LL,
      0LL,
      4u,
      &v8);
  }
  RtlAcquireSRWLockShared(v1);
  for ( i = *(__int64 **)(v1 + 56); i != (__int64 *)(v1 + 56); i = (__int64 *)*i )
  {
    CrmLogActivityUpdate(
      i[6],
      *((_DWORD *)i + 15),
      *(_QWORD *)(v1 + 16),
      0,
      0,
      0,
      *((_DWORD *)i + 23),
      *((_DWORD *)i + 23),
      i[14],
      v2);
    i[14] = v2;
  }
  RtlReleaseSRWLockShared(v1);
  if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 2LL) )
  {
    v18 = 0;
    v21 = 0;
    v16 = &Uuid;
    v7[0] = *(_QWORD *)(v1 + 16);
    v17 = 16;
    v19 = v7;
    v20 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BDE8B,
      0LL,
      0LL,
      4u,
      &v15);
  }
  return 0LL;
}

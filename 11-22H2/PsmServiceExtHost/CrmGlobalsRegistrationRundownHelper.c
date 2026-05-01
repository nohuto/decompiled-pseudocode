/*
 * XREFs of CrmGlobalsRegistrationRundownHelper @ 0x18003F7E0
 * Callers:
 *     CrmGlobalsRundown @ 0x18003E8B8 (CrmGlobalsRundown.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     CrmLogActivityUpdate @ 0x18002A240 (CrmLogActivityUpdate.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRundownHelper(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r8
  __int64 *i; // rdi
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+90h] [rbp-70h] BYREF
  __int64 v9; // [rsp+B0h] [rbp-50h]
  int v10; // [rsp+B8h] [rbp-48h]
  int v11; // [rsp+BCh] [rbp-44h]
  _QWORD *v12; // [rsp+C0h] [rbp-40h]
  int v13; // [rsp+C8h] [rbp-38h]
  int v14; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v16; // [rsp+F0h] [rbp-10h]
  int v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+FCh] [rbp-4h]
  _QWORD *v19; // [rsp+100h] [rbp+0h]
  int v20; // [rsp+108h] [rbp+8h]
  int v21; // [rsp+10Ch] [rbp+Ch]

  v1 = a1 - 32;
  v2 = MEMORY[0x7FFE0008];
  if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 2LL) )
  {
    v6 = *(_QWORD *)(v1 + 16);
    v11 = 0;
    v14 = 0;
    v7[0] = v6;
    v12 = v7;
    v9 = v3;
    v10 = 16;
    v13 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BEAEE,
      0LL,
      0LL,
      4u,
      &v8);
  }
  RtlAcquireSRWLockShared(v1);
  for ( i = *(__int64 **)(v1 + 56); i != (__int64 *)(v1 + 56); i = (__int64 *)*i )
  {
    CrmLogActivityUpdate(
      i[7],
      *((_DWORD *)i + 17),
      *(_QWORD *)(v1 + 16),
      0,
      0,
      0,
      3,
      3,
      *((_DWORD *)i + 25),
      *((_DWORD *)i + 25),
      *((_DWORD *)i + 26),
      *((_DWORD *)i + 26),
      0,
      i[17],
      v2);
    i[17] = v2;
  }
  RtlReleaseSRWLockShared(v1);
  if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 2LL) )
  {
    v18 = 0;
    v21 = 0;
    v16 = &Uuid;
    v7[0] = *(_QWORD *)(v1 + 16);
    v17 = 16;
    v19 = v7;
    v20 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BEDBF,
      0LL,
      0LL,
      4u,
      &v15);
  }
  return 0LL;
}

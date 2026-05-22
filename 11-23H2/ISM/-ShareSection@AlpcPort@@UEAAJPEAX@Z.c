/*
 * XREFs of ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x18011B420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180093924 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180118344 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x18011A02C (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18011B374 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::ShareSection(AlpcPort *this, void *a2)
{
  struct SipcPort::SectionListEntry *SectionListEntry; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct SipcPort::SectionListEntry *v7; // rbx
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+198h] [rbp+98h] BYREF
  int v23; // [rsp+1A0h] [rbp+A0h]
  __int64 v24; // [rsp+1A8h] [rbp+A8h]
  __int64 v25; // [rsp+1B0h] [rbp+B0h]
  __int64 v26; // [rsp+1B8h] [rbp+B8h]

  SectionListEntry = SipcPort::FindSectionListEntry(this, a2);
  v7 = SectionListEntry;
  if ( !SectionListEntry )
  {
    v8 = -2147024809;
LABEL_3:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v8, v4, v5, v6);
    return v8;
  }
  if ( !*((_QWORD *)SectionListEntry + 9) )
  {
    v8 = -2147467259;
    goto LABEL_3;
  }
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v22 = 1610612736LL;
  WORD1(v20[0]) = 40;
  v10 = *((_QWORD *)SectionListEntry + 9);
  v11 = *((_QWORD *)v7 + 4);
  v12 = *((_QWORD *)v7 + 3);
  v23 = 0;
  HIDWORD(v22) = 0x40000000;
  v19 = 0LL;
  v24 = v10;
  v25 = v12;
  v13 = *((_QWORD *)this + 7);
  v26 = v11;
  v14 = NtAlpcSendWaitReceivePort(v13, 0x10000LL, v20, &v22, 0LL, 0LL, 0LL, &v19);
  if ( v14 < 0 )
    return wil::details::NtStatusToHr((wil::details *)(unsigned int)v14);
  v15 = NtAlpcDeletePortSection(*((_QWORD *)this + 7), 0LL, *((_QWORD *)v7 + 9));
  if ( v15 < 0 )
    return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v15, v16, v17, v18);
  *((_QWORD *)v7 + 9) = 0LL;
  return 0LL;
}

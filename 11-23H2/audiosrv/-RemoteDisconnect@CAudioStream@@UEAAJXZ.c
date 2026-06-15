/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@UEAAJXZ @ 0x1800ECD70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180004494 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CC864 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioStream::RemoteDisconnect(HANDLE *this)
{
  DWORD v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  int v5; // eax
  unsigned int v6; // edi
  DWORD v8; // edi
  HANDLE v9; // rcx
  DWORD v10; // eax
  const char *v11; // rax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = WaitForSingleObjectEx(this[50], 0x3E8u, 0);
  if ( v2 == 258 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL);
  }
  else
  {
    if ( v2 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, 2602LL, v3, v4);
    (*((void (__fastcall **)(char *))*(this - 1) + 9))((char *)this - 8);
    if ( !this[7] )
      return 0LL;
    v5 = (*((__int64 (__fastcall **)(HANDLE *))*this + 21))(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v8 = 1;
    v9 = this[8];
    Handles[0] = this[49];
    if ( (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)v9 + 176LL))(v9) )
    {
      Handles[1] = (HANDLE)(*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this[8] + 176LL))(this[8]);
      v8 = 2;
    }
    v10 = WaitForMultipleObjects(v8, Handles, 0, 0x3E8u);
    if ( v10 != -1 && v10 != 258 )
      return 0LL;
    v11 = (const char *)(*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this[8] + 72LL))(this[8]);
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x50D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL,
      (unsigned __int64)"Application Id: %ws",
      v11);
  }
  return 2147500037LL;
}

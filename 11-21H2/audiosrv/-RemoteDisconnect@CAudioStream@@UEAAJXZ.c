/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@UEAAJXZ @ 0x1800E4FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BE884 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C8FE4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
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

  v2 = WaitForSingleObjectEx(this[47], 0x3E8u, 0);
  if ( v2 == 258 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x480,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL);
  }
  else
  {
    if ( v2 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0xA0C, v3, v4);
    (*((void (__fastcall **)(char *))*(this - 1) + 8))((char *)this - 8);
    if ( !this[7] )
      return 0LL;
    v5 = (*((__int64 (__fastcall **)(HANDLE *))*this + 21))(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v8 = 1;
    v9 = this[8];
    Handles[0] = this[46];
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
      (void *)0x49F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL,
      (int)"Application Id: %ws",
      v11);
  }
  return 2147500037LL;
}

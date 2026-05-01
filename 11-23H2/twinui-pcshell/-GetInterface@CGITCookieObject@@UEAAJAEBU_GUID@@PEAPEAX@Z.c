/*
 * XREFs of ?GetInterface@CGITCookieObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCookieObject::GetInterface(CGITCookieObject *this, const struct _GUID *a2, void **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**((_QWORD **)this + 7) + 40LL))(
         *((_QWORD *)this + 7),
         *((unsigned int *)this + 12),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"shell\\lib\\gitreglist.cpp",
      (const char *)(unsigned int)v3,
      v6);
  return v4;
}

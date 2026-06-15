/*
 * XREFs of ?UnregisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x140031F8C
 * Callers:
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140017308 (--1CAPOWrapperSrv@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::UnregisterAPONotifications(CAPOWrapperSrv *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)this + 32) )
    return 0LL;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 48LL))(
         *((_QWORD *)this + 11),
         *((_QWORD *)this + 15));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8A,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}

/*
 * XREFs of ?RegisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x140031EF4
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x140017630 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::RegisterAPONotifications(CAPOWrapperSrv *this)
{
  __int64 result; // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 12))(
             *((_QWORD *)this + 12),
             &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
             (char *)this + 120);
  if ( (int)result >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(
           *((_QWORD *)this + 11),
           *((_QWORD *)this + 15));
    v4 = v3;
    if ( v3 >= 0 )
    {
      *((_DWORD *)this + 32) = 1;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  return result;
}

/*
 * XREFs of ?RegisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x14006EDC8
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOWrapperSrv::RegisterAPONotifications(CAPOWrapperSrv *this)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 128);
  result = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 12))(
             *((_QWORD *)this + 12),
             &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
             (char *)this + 128);
  if ( (int)result >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11), *v2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *((_DWORD *)this + 34) = 1;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  return result;
}

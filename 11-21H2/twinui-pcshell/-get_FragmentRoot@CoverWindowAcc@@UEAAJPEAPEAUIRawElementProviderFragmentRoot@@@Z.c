/*
 * XREFs of ?get_FragmentRoot@CoverWindowAcc@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x1805274A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CoverWindowAcc::get_FragmentRoot(CoverWindowAcc *this, struct IRawElementProviderFragmentRoot **a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
    if ( v4 < 0 )
    {
      v5 = 202LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  else
  {
    v4 = (**((__int64 (__fastcall ***)(char *, GUID *, struct IRawElementProviderFragmentRoot **))this - 1))(
           (char *)this - 8,
           &GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58,
           a2);
    if ( v4 < 0 )
    {
      v5 = 204LL;
      goto LABEL_6;
    }
  }
  return (unsigned int)v4;
}

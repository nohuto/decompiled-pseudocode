/*
 * XREFs of ?GetSubmix@CProcessSubmixProxy@@UEAAJPEAPEAUISubmix@@@Z @ 0x1800F9520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::GetSubmix(CProcessSubmixProxy *this, struct ISubmix **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct ISubmix *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmix *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ISubmix **))this + 5))(
         *((_QWORD *)this + 5),
         &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v8;
    if ( v8 )
    {
      *a2 = v8;
      (*(void (__fastcall **)(struct ISubmix *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      *a2 = 0LL;
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA81,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
  return v4;
}

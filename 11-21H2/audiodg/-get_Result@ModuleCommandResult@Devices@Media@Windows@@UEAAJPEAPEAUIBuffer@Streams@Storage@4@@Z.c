/*
 * XREFs of ?get_Result@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x140080C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::get_Result(
        Windows::Media::Devices::ModuleCommandResult *this,
        struct Windows::Storage::Streams::IBuffer **a2)
{
  struct Windows::Storage::Streams::IBuffer *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (struct Windows::Storage::Streams::IBuffer *)*((_QWORD *)this + 9);
    *a2 = v3;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v3 + 8LL))(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}

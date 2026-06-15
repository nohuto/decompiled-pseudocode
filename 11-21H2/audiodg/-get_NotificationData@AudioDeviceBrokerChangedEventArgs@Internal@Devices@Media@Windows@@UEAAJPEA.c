/*
 * XREFs of ?get_NotificationData@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x140080B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::get_NotificationData(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this,
        struct Windows::Storage::Streams::IBuffer **a2)
{
  struct Windows::Storage::Streams::IBuffer *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (struct Windows::Storage::Streams::IBuffer *)*((_QWORD *)this + 8);
    *a2 = v3;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v3 + 8LL))(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}

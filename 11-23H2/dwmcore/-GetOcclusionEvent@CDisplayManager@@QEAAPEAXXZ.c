/*
 * XREFs of ?GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ @ 0x180048F4C
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180048C6C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180101048 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void *__fastcall CDisplayManager::GetOcclusionEvent(CDisplayManager *this)
{
  void *result; // rax
  char *EventW; // rbx
  __int64 RemoteSessionOcclusionEvent; // rdx

  result = (void *)qword_1803EA190;
  if ( (unsigned __int64)(qword_1803EA190 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( qword_1803EA188 )
    {
      if ( !byte_1803EA19D )
      {
        EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
        if ( (unsigned __int64)(EventW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( !EventW || EventW == (char *)-1LL )
            return (void *)qword_1803EA190;
        }
        else if ( (*(int (__fastcall **)(CDisplayManager *, char *, int *))(*(_QWORD *)qword_1803EA188 + 176LL))(
                    qword_1803EA188,
                    EventW,
                    &dword_1803EA198) >= 0 )
        {
          RemoteSessionOcclusionEvent = (__int64)EventW;
LABEL_7:
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &qword_1803EA190,
            RemoteSessionOcclusionEvent);
          return (void *)qword_1803EA190;
        }
        CloseHandle(EventW);
        return (void *)qword_1803EA190;
      }
      RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
      goto LABEL_7;
    }
    return 0LL;
  }
  return result;
}

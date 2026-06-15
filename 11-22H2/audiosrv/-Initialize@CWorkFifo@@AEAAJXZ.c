/*
 * XREFs of ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180134EFC
 * Callers:
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x1801340D8 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1801365B0 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800CCC1C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x180135050 (-InitializeTheadpool@CWorkFifo@@AEAAJXZ.c)
 *     ?ReleaseThreadpool@CWorkFifo@@AEAAXXZ @ 0x180136070 (-ReleaseThreadpool@CWorkFifo@@AEAAXXZ.c)
 */

__int64 __fastcall CWorkFifo::Initialize(wil::details **this)
{
  signed int LastErrorFailHr; // ebx
  __int64 v3; // rdx
  wil::details *v4; // rcx
  wil::details *Event; // rbx
  __int64 v6; // r8
  const char *v7; // r9

  LastErrorFailHr = 0;
  if ( !*this )
  {
    LastErrorFailHr = CWorkFifo::InitializeTheadpool(this);
    if ( LastErrorFailHr >= 0 )
    {
      Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
      if ( Event )
      {
        GetLastError();
        _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
          this + 28,
          Event);
        return 0;
      }
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v4, v3, v6, v7);
      if ( LastErrorFailHr >= 0 )
        return (unsigned int)LastErrorFailHr;
    }
    CWorkFifo::ReleaseThreadpool((CWorkFifo *)this);
  }
  return (unsigned int)LastErrorFailHr;
}

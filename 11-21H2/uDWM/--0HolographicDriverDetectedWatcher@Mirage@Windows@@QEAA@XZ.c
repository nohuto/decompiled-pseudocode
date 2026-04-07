/*
 * XREFs of ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180056140
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180054C44 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180013914 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18009496C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

Windows::Mirage::HolographicDriverDetectedWatcher *__fastcall Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this)
{
  wil::details *v2; // rcx
  wil::details *Event; // rdi
  wil::details *v4; // rcx
  wil::details *v5; // rdi
  int LastErrorFailHr; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v2);
    if ( LastErrorFailHr < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1B,
        (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)(unsigned int)LastErrorFailHr,
        v9);
  }
  v5 = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( v5 )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 1,
      v5);
  }
  else
  {
    v8 = wil::details::GetLastErrorFailHr(v4);
    if ( v8 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1C,
        (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)(unsigned int)v8,
        v9);
  }
  return this;
}

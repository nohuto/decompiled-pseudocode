/*
 * XREFs of ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140072F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1400706A4 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsDelegator::OnPropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  wil::details::weak_query_policy::query(
    *(struct IWeakReference **)(a1 + 16),
    &GUID_20049d40_56d5_400e_a2ef_385599feed49,
    &v12);
  if ( v12
    && (v5 = *(_QWORD *)v12,
        *(_OWORD *)v9 = *(_OWORD *)a3,
        v10 = *(_DWORD *)(a3 + 16),
        v6 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(v5 + 24))(v12, a2, v9),
        v7 = v6,
        v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v7 = 0;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v12);
  return v7;
}

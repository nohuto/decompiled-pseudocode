/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x1800B9510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18009BFB4 (-reset@-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800B92E8 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurred(
        _OWORD *a1,
        _QWORD **a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct MPCHeadUpdateListener *Instance; // rsi
  __int64 *v10; // rcx
  __int64 (__fastcall *v11)(_QWORD **, GUID *, char *); // rbx
  int v12; // eax
  __int64 *v13; // rsi
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *v17; // rcx
  struct MPCHeadUpdateListener *v18; // rax
  void *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::GetInstance((__int64)a1, (__int64)a2) + 160);
  EnterCriticalSection(v6);
  Instance = MPCHeadUpdateListener::GetInstance(v8, v7);
  *((_OWORD *)Instance + 6) = *a1;
  *((_OWORD *)Instance + 7) = a1[1];
  *((_OWORD *)Instance + 8) = a1[2];
  *((_OWORD *)Instance + 9) = a1[3];
  v10 = (__int64 *)((char *)Instance + 80);
  if ( a2 )
  {
    v11 = (__int64 (__fastcall *)(_QWORD **, GUID *, char *))**a2;
    wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(v10);
    v12 = v11(a2, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, (char *)Instance + 80);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        78LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v12);
  }
  else
  {
    wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(v10);
  }
  v13 = (__int64 *)((char *)Instance + 88);
  if ( a3 )
  {
    v14 = **a3;
    wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(v13);
    v15 = v14(a3, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, v13);
    v17 = retaddr;
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        87LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v15);
  }
  else
  {
    wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(v13);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  v18 = MPCHeadUpdateListener::GetInstance((__int64)v17, v16);
  wil::details::SetEvent(*(wil::details **)(*((_QWORD *)v18 + 9) + 120LL), v19);
}

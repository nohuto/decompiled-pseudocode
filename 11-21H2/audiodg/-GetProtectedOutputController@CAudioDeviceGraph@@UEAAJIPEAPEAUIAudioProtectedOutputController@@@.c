/*
 * XREFs of ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14005C090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002B3A4 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x14005A978 (-Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetProtectedOutputController(
        CAudioDeviceGraph *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // ebx
  __int64 Tail; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  v11 = v6;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *((_DWORD *)this + 62) )
    {
      if ( a2 != 4 || *((_DWORD *)this + 74) )
      {
        v10 = 0LL;
        Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 19) + 16LL);
        v7 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
               **(_QWORD **)(*(_QWORD *)Tail + 32LL),
               &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
               &v10);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 a2,
                 a3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      else if ( *((_QWORD *)this + 14)
             || (v7 = CProtectedOutputController::Create(
                        (CAudioDeviceGraph *)((char *)this - 8),
                        (struct CProtectedOutputController **)this + 14),
                 v7 >= 0) )
      {
        v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioProtectedOutputController **))this + 14))(
               *((_QWORD *)this + 14),
               &GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842,
               a3);
      }
    }
    else
    {
      v7 = -2005139437;
    }
  }
  else
  {
    v7 = -2147467261;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
  return (unsigned int)v7;
}

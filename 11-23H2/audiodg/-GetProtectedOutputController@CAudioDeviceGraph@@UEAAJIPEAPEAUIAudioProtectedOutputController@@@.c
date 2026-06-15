/*
 * XREFs of ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14005FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x14005DE58 (-Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetProtectedOutputController(
        CAudioDeviceGraph *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // ebx
  _QWORD *v8; // rsi
  __int64 Tail; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *((_DWORD *)this + 62) )
    {
      if ( a2 != 4 || *((_DWORD *)this + 74) )
      {
        v11 = 0LL;
        Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 19) + 16LL);
        v7 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
               **(_QWORD **)(*(_QWORD *)Tail + 32LL),
               &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
               &v11);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v11 + 24LL))(
                 v11,
                 a2,
                 a3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      else
      {
        v8 = (_QWORD *)((char *)this + 112);
        if ( *((_QWORD *)this + 14)
          || (v7 = CProtectedOutputController::Create(
                     (CAudioDeviceGraph *)((char *)this - 8),
                     (struct CProtectedOutputController **)this + 14),
              v7 >= 0) )
        {
          v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioProtectedOutputController **))*v8)(
                 *v8,
                 &GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842,
                 a3);
        }
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
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v7;
}

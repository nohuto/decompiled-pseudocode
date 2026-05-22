/*
 * XREFs of ?Message_TimeEvent@CAnimationInstance@DirectComposition@@QEAAJII@Z @ 0x1800E8EB8
 * Callers:
 *     ?Thunk_Message_TimeEvent_55@?$IAnimationInstance_Receive@VCAnimationInstance@DirectComposition@@@@SAJPEAXPEAPEAX@Z @ 0x1800F6940 (-Thunk_Message_TimeEvent_55@-$IAnimationInstance_Receive@VCAnimationInstance@DirectComposition@@.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJI@Z @ 0x1800E9094 (-RemoveAt@-$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::Message_TimeEvent(
        DirectComposition::CAnimationInstance *this,
        int a2,
        unsigned int a3)
{
  unsigned int v3; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(__int64); // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx

  v3 = 0;
  if ( *((_DWORD *)this + 26) == a2 )
  {
    if ( a3 > *((_DWORD *)this + 27) )
    {
      return (unsigned int)-2147024809;
    }
    else
    {
      v5 = 0;
      if ( *((_DWORD *)this + 24) )
      {
        v6 = *((_QWORD *)this + 9);
        do
        {
          if ( *(_DWORD *)(v6 + 16LL * v5 + 12) == a3 )
            break;
          ++v5;
        }
        while ( v5 < *((_DWORD *)this + 24) );
      }
      if ( v5 < *((_DWORD *)this + 24) )
      {
        v7 = *((_QWORD *)this + 5);
        v8 = *(void (__fastcall **)(__int64))(v7 + 16LL * v5);
        v9 = *(_QWORD *)(v7 + 16LL * v5 + 8);
        DynArray<DwmAnimationTimeEventData,0>::RemoveAt((char *)this + 40, v5);
        DynArray<DwmAnimationTimeEventData,0>::RemoveAt((char *)this + 72, v5);
        v10 = *((_QWORD *)this + 3);
        DirectComposition::CDeviceLock::Leave((DirectComposition::CDeviceLock *)(v10 + 96));
        v8(v9);
        DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(v10 + 96));
      }
    }
  }
  return v3;
}

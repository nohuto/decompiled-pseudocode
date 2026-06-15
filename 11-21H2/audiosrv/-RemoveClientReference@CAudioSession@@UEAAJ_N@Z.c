/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180008EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x1800DB85C (WPP_SF_qdd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  bool v3; // di
  __int64 v4; // rdi
  int v5; // eax
  int v7; // [rsp+20h] [rbp-58h]
  _QWORD v8[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 83, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 82, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 256LL))(this);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids);
    }
LABEL_6:
    if ( this )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v4 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    if ( this )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v8[0] = &off_180167A20;
    v8[1] = this;
    v8[7] = v8;
    v5 = CSerialWorkQueue::QueueWorkItem(v4, v8);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD8B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v5,
        v7);
    if ( this )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = *((_DWORD *)this + 82);
    WPP_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, this);
  }
  if ( v3 )
    goto LABEL_6;
  return 0LL;
}

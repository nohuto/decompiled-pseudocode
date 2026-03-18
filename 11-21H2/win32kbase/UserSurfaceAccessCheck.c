/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C0082C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // ebx

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( a1 )
  {
    v8 = *(_QWORD *)(v2 + 456);
    if ( !v8 || (v5 = *(_QWORD **)(v8 + 8), v4 = (_QWORD *)*v5, *(_QWORD *)*v5 != a1) )
    {
      v5 = (_QWORD *)*(unsigned int *)(v2 + 488);
      if ( ((unsigned __int8)v5 & 8) == 0 )
      {
        v5 = (_QWORD *)*(unsigned int *)(v2 + 1256);
        if ( ((unsigned __int8)v5 & 4) == 0 )
          return 0LL;
      }
    }
  }
  v10 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4, v6, v7) + 12);
  if ( (v10 & 0x10) == 0 || (v10 & 0x40000) == 0 )
    return 0LL;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
             && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)v9 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      476,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  v12 = 0;
  if ( qword_1C029BC78 && (int)qword_1C029BC78() >= 0 && qword_1C029BC80 )
    v12 = qword_1C029BC80();
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
             && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)v9 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      477,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return !v12;
}

/*
 * XREFs of ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x14005B000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x14005C664 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProtectedOutputController::RequestPolicyChange(
        CProtectedOutputController *this,
        struct CVirtualProtectedOutput *a2,
        enum EAudioConstriction a3)
{
  enum EAudioConstriction v4; // ebx
  _QWORD *v5; // r9
  struct CVirtualProtectedOutput *v6; // rcx
  int updated; // edi

  v4 = eAudioConstrictionOff;
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  while ( v5 )
  {
    v6 = (struct CVirtualProtectedOutput *)v5[2];
    v5 = (_QWORD *)*v5;
    if ( v6 == a2 )
    {
      if ( v4 <= a3 )
        v4 = a3;
    }
    else if ( v4 <= *((_DWORD *)v6 + 5) )
    {
      v4 = *((_DWORD *)v6 + 5);
    }
  }
  updated = 0;
  if ( v4 != *((_DWORD *)this + 16) )
  {
    updated = CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(*((CAudioDeviceGraph **)this + 1), v4);
    if ( updated < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_8a78b0fe90e638a027f0a1224aa299fc_Traceguids,
          updated);
      }
      AudDGTraceLoggingErrorHelper("CProtectedOutputController::RequestPolicyChange", 0xB5u, updated);
    }
    else
    {
      *((_DWORD *)this + 16) = v4;
    }
  }
  return (unsigned int)updated;
}

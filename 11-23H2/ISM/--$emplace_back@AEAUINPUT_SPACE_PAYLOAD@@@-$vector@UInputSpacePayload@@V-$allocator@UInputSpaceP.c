/*
 * XREFs of ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA?A_TAEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801A2A5C
 * Callers:
 *     ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801A29B8 (--$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@-$variant@Umo.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801A1EBC (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA?A_TAEAUINPUT_SPACE_REGION@@@Z @ 0x1801A2B18 (--$emplace_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE.c)
 *     ?_Reallocate_exactly@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_K@Z @ 0x1801A40A8 (-_Reallocate_exactly@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<InputSpacePayload>::emplace_back<INPUT_SPACE_PAYLOAD &>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned int v6; // ebx
  char *result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<InputSpacePayload>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(a1, v4, a2);
  *(_QWORD *)v4 = *(_QWORD *)a2;
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(a2 + 8);
  v5 = v4 + 16;
  v6 = 0;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( *(_DWORD *)(a2 + 12) )
    std::vector<INPUT_SPACE_REGION>::_Reallocate_exactly(v5);
  if ( *(_DWORD *)(a2 + 12) )
  {
    do
      std::vector<INPUT_SPACE_REGION>::emplace_back<INPUT_SPACE_REGION &>(v5, *(_QWORD *)(a2 + 16) + 200LL * v6++);
    while ( v6 < *(_DWORD *)(a2 + 12) );
  }
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 40);
  return result;
}

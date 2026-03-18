/*
 * XREFs of GetActiveHKL @ 0x1C003F290
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C003EE20 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C00CD590 (VKFromVSC.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01E98CC (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _GetKeyboardLayout @ 0x1C004FE60 (_GetKeyboardLayout.c)
 */

__int64 GetActiveHKL()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gpqForeground
    && ((v0 = *(_QWORD *)(gpqForeground + 112)) != 0
     && (v1 = *(_QWORD *)(v0 + 16)) != 0
     && (v2 = *(_QWORD *)(v1 + 440)) != 0
     || (v4 = *(_QWORD *)(gpqForeground + 120)) != 0
     && (v5 = *(_QWORD *)(v4 + 16)) != 0
     && (v2 = *(_QWORD *)(v5 + 440)) != 0) )
  {
    return *(_QWORD *)(v2 + 40);
  }
  else
  {
    return GetKeyboardLayout(0LL);
  }
}

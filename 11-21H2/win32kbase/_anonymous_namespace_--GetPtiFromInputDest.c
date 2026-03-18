/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94
 * Callers:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00419A8 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0044710 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0044884 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01FA990 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01FC54C (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 Queue; // rcx
  __int64 v6; // rax

  v3 = 0LL;
  v4 = a2;
  if ( (_DWORD)a2 == 2 )
  {
    if ( a1 && *(_DWORD *)(a1 + 92) == 2 && *(_QWORD *)(a1 + 80) )
    {
      v6 = *(_QWORD *)(a1 + 80);
      return *(_QWORD *)(v6 + 16);
    }
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0, a3);
    else
      Queue = gpqForeground;
    if ( Queue )
    {
      if ( !v4 )
        return *(_QWORD *)(Queue + 88);
      if ( v4 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(Queue, a2, a3);
        return v3;
      }
      v6 = *(_QWORD *)(Queue + 104);
      if ( !v6 )
        return *(_QWORD *)(Queue + 88);
      return *(_QWORD *)(v6 + 16);
    }
  }
  return v3;
}

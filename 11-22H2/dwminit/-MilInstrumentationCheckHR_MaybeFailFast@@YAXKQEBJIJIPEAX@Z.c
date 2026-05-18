/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800091CC
 * Callers:
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180006694 (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180007628 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180007D7C (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x180008D80 (DwmpTerminateSessionProcess.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000994C (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180009AB8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x180009D94 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180009F4C (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x18000A080 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x180008F54 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x180009100 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180009124 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x180009248 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(__int64 a1, const int *a2, __int64 a3, int a4, unsigned int a5)
{
  int v6; // ecx
  char v7; // di
  unsigned int v8; // r9d
  unsigned int v9; // edx
  int v10; // ecx
  void *v11; // r11

  v7 = IsOOM(a4);
  if ( !a2 || !v8 )
  {
    a2 = (const int *)&unk_180010918;
    v8 = 10;
  }
  if ( IsHRInList(v6, a2, v8) )
  {
    if ( v7 )
      DoStackCapture(v10, a5, v11);
  }
  else
  {
    MilInstrumentationHandleFailure_MaybeFailFast(v10, v9, a5, v11);
  }
}

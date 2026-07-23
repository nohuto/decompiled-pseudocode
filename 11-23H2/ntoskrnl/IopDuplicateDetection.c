/*
 * XREFs of IopDuplicateDetection @ 0x140835B74
 * Callers:
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopFindLegacyBusDeviceNode @ 0x140818720 (IopFindLegacyBusDeviceNode.c)
 *     IopQueryResourceHandlerInterface @ 0x140818864 (IopQueryResourceHandlerInterface.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDuplicateDetection(unsigned int a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *LegacyBusDeviceNode; // rax
  void (__fastcall **v11)(_QWORD); // rdi
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  P = 0LL;
  v12[0] = 0LL;
  *a4 = 0LL;
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(a1, a2);
  if ( !LegacyBusDeviceNode )
    return 3221225488LL;
  if ( (int)IopQueryResourceHandlerInterface(3, LegacyBusDeviceNode[4], 0, (unsigned __int16 **)&P) < 0 )
    return 3221225488LL;
  v11 = (void (__fastcall **)(_QWORD))P;
  if ( !P )
    return 3221225488LL;
  if ( (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))P + 4))(*((_QWORD *)P + 1), a1, a2, a3, v12) >= 0
    && v12[0] )
  {
    *a4 = *(_QWORD *)(*(_QWORD *)(v12[0] + 312LL) + 40LL);
  }
  else
  {
    v4 = -1073741808;
  }
  v11[3](v11[1]);
  ExFreePoolWithTag(v11, 0);
  return v4;
}

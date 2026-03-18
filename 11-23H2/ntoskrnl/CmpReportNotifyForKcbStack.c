/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1406D53B0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpReportNotify @ 0x1407D1BB0 (CmpReportNotify.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x1406D5440 (CmpReportNotifyHelper.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57A0 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpReportNotifyForKcbStack(__int64 a1, int a2, int a3, __int64 a4)
{
  int v7; // edi
  __int64 KcbAtLayerHeight; // rbx
  int v9; // r8d
  __int64 v10; // r9
  __int64 result; // rax

  v7 = a1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  result = CmpReportNotifyHelper(v7, *(_QWORD *)(KcbAtLayerHeight + 32), a2, v9, v10);
  if ( *(_QWORD *)(KcbAtLayerHeight + 32) != CmpMasterHive )
    return CmpReportNotifyHelper(v7, CmpMasterHive, a2, a3, a4);
  return result;
}

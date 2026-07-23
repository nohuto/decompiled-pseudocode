/*
 * XREFs of CmFcpSubscribeScmWnfStateChange @ 0x14041A1AC
 * Callers:
 *     CmFcpManagerSoftwareHiveReady @ 0x14080DE90 (CmFcpManagerSoftwareHiveReady.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall CmFcpSubscribeScmWnfStateChange(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 1704);
  result = ExSubscribeWnfStateChange(
             (int)a1 + 1704,
             (unsigned int)&WNF_SCM_AUTOSTART_STATE,
             1,
             0,
             (__int64)CmFcpWnfScmStateChangeNotificationCallback,
             a1 + 1712);
  if ( (int)result < 0 )
    *v1 = 0LL;
  return result;
}

/*
 * XREFs of ?LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00C3290
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00C190C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00C3074 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x1C00D0B34 (CalculateLogicalMonitorRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::LogicalMonitorRect(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  int v4; // r9d
  struct tagRECT v5; // xmm0
  struct tagRECT *result; // rax
  char v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 288LL) >> 8;
  LOWORD(v4) = v4 & 0x1FF;
  v5 = *(struct tagRECT *)CalculateLogicalMonitorRect(
                            (unsigned int)&v7,
                            (int)this + 8,
                            *((unsigned __int16 *)this + 20),
                            v4,
                            *((_WORD *)this + 34));
  result = retstr;
  *retstr = v5;
  return result;
}

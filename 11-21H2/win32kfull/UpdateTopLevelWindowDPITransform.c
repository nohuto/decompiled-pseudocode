/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x1C009AF58
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 * Callees:
 *     ResetWindowTransform @ 0x1C009B010 (ResetWindowTransform.c)
 *     GetMonitorTransform @ 0x1C009B038 (GetMonitorTransform.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

_OWORD *__fastcall UpdateTopLevelWindowDPITransform(__int64 a1, __int64 a2)
{
  _OWORD *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 )
    return (_OWORD *)ResetWindowTransform(a1);
  memset(v8, 0, sizeof(v8));
  if ( !(unsigned int)GetMonitorTransform(a2, a1, v8) )
    return (_OWORD *)ResetWindowTransform(a1);
  result = *(_OWORD **)(a1 + 216);
  if ( !result )
  {
    result = (_OWORD *)Win32AllocPoolWithQuotaZInit(64LL, 2020438869LL);
    *(_QWORD *)(a1 + 216) = result;
    if ( !result )
      return (_OWORD *)ResetWindowTransform(a1);
  }
  v5 = v8[1];
  *result = v8[0];
  v6 = v8[2];
  result[1] = v5;
  v7 = v8[3];
  result[2] = v6;
  result[3] = v7;
  return result;
}

/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x18006D9FC
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x1800308F0 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvRegister @ 0x180033624 (CrmSrvRegister.c)
 *     CrmSrvActivityStart @ 0x180033A50 (CrmSrvActivityStart.c)
 *     CrmLogSrvActivityStopStop @ 0x18003A1B8 (CrmLogSrvActivityStopStop.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const unsigned __int16 *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &word_1800B7A9C;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}

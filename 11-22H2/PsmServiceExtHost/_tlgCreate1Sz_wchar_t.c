/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x18006D5BC
 * Callers:
 *     CrmLogSrvActivityStopStop @ 0x1800040D0 (CrmLogSrvActivityStopStop.c)
 *     CrmSrvRegister @ 0x180004F60 (CrmSrvRegister.c)
 *     CrmSrvActivityStart @ 0x180008200 (CrmSrvActivityStart.c)
 *     CrmRpcSrvActivityAllocate @ 0x18002C340 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvActivityAllocate @ 0x180038BBC (CrmSrvActivityAllocate.c)
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
    a2 = &word_1800B66C4;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}

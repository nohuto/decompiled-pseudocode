/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x1C02D4E4C
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00124C0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rbx
  DXGDIAGNOSTICS *v13; // rcx

  v1 = *((_DWORD *)a1 + 1);
  if ( v1 >= 0x400 )
  {
    WdLogSingleEntry2(2LL, v1, 1024LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"User mode packet size of 0x%I64x is bigger than max allowed (0x%I64x)",
      *((unsigned int *)a1 + 1),
      1024LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  Global = DXGGLOBAL_GetGlobal();
  if ( !Global )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL singleton; pKmHeader = 0x%I64x",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225860LL;
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4, v7, v8);
  v10 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  *((_DWORD *)a1 + 9) &= ~0x80000000;
  *((_OWORD *)a1 + 1) = v10;
  *((_DWORD *)a1 + 9) ^= (PsGetCurrentProcessSessionId(v11) ^ *((_DWORD *)a1 + 9)) & 0x7FFFFFFF;
  *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
  v12 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 1) = v12 * KeQueryTimeIncrement();
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 121);
  if ( !v13 )
  {
    WdLogSingleEntry2(2LL, a1, Global);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility buffer; i_pHeader = 0x%I64x, DXGGLOBAL::m_pDxgGlobal = 0x%I64x",
      (__int64)a1,
      (__int64)Global,
      0LL,
      0LL,
      0LL);
    return 3221225860LL;
  }
  return DXGDIAGNOSTICS::WriteDiagnosticEntry(v13, a1);
}

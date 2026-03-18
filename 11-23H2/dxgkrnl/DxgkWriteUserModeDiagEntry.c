/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x1C02D662C
 * Callers:
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003000 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // eax
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rbp
  __int64 CurrentProcess; // rax
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rbx
  DXGDIAGNOSTICS *v10; // rcx

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
  Global = DXGGLOBAL::GetGlobal();
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
  CurrentProcess = PsGetCurrentProcess(v4);
  v7 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  *((_DWORD *)a1 + 9) &= ~0x80000000;
  *((_OWORD *)a1 + 1) = v7;
  *((_DWORD *)a1 + 9) ^= (*((_DWORD *)a1 + 9) ^ PsGetCurrentProcessSessionId(v8)) & 0x7FFFFFFF;
  *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
  v9 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 1) = v9 * KeQueryTimeIncrement();
  v10 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 117);
  if ( !v10 )
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
  return DXGDIAGNOSTICS::WriteDiagnosticEntry(v10, a1);
}

/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0308C20
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0052D10 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, unsigned int a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGGLOBAL *Global; // rax
  DXGDIAGNOSTICS *v10; // rcx
  _QWORD v12[8]; // [rsp+50h] [rbp-58h] BYREF

  v5 = -1073741811;
  if ( a2 >= 4 )
  {
    v6 = *(unsigned int *)a1;
    if ( a2 == v6 + 4 )
    {
      if ( a3 && (_DWORD)v6 )
      {
        memset(v12, 0, sizeof(v12));
        v12[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v12[7], (PLARGE_INTEGER)&v12[6]);
        memset(&v12[1], 0, 36);
        v12[0] = 0x400000000ALL;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, CurrentProcessSessionId);
      }
      Global = DXGGLOBAL_GetGlobal();
      if ( Global )
      {
        if ( a3 )
          v10 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 120);
        else
          v10 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 121);
        if ( !v10 )
        {
          WdLogSingleEntry2(2LL, a1, 0LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, pDiagnostics = 0x%I64x",
            (__int64)a1,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225860LL;
        }
        return (unsigned int)DXGDIAGNOSTICS::ReadDiagnostics(
                               v10,
                               (unsigned __int8 *)a1 + 4,
                               (unsigned int *)a1,
                               0xFFFFFFFF);
      }
    }
  }
  return v5;
}

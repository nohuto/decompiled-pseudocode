/*
 * XREFs of ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B84D8
 * Callers:
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C03ACB98 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C003FFAC (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003FFE4 (-IsCurrentProcessAdmin@@YAEXZ.c)
 */

bool __fastcall DXGADAPTER::IsDiagnosticAllowed(DXGADAPTER *this, struct _LUID *a2)
{
  __int64 v2; // rcx
  int CurrentProcessSessionId; // eax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  DXGADAPTER::IsAdapterSessionized(this, a2, 0LL, &v5);
  if ( v5 == 0x100000000LL || IsCurrentProcessAdmin() )
    return 1;
  if ( v5 == 0x200000000LL )
    return IsCurrentConsoleSession();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
  return CurrentProcessSessionId == (_DWORD)v5;
}

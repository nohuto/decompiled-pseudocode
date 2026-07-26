/*
 * XREFs of ndisIfTryAllocatingSuggestedIndex @ 0x1C0022210
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C0021AA4 (ndisIfRegisterInterfaceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C00222A4 (WPP_RECORDER_SF_Dd.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0033C44 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 */

char __fastcall ndisIfTryAllocatingSuggestedIndex(unsigned int a1)
{
  int *v1; // rbx
  char v2; // di
  int v3; // eax
  ULONG64 v5; // rsi

  v1 = &dword_1C00EC638;
  v2 = a1;
  if ( a1 < *(_DWORD *)dword_1C00ECB74 )
    v1 = &dword_1C00EC620;
  if ( a1 >= *v1 )
  {
    v5 = a1 - *v1;
    v3 = IfIndexRange::Grow((IfIndexRange *)v1, (int)v5 + 1);
    if ( !v3 )
    {
      if ( !RtlTestBitEx((PRTL_BITMAP_EX)(v1 + 2), (unsigned int)v5) )
      {
        RtlSetBitEx((PRTL_BITMAP_EX)(v1 + 2), v5);
        return 1;
      }
      LOBYTE(v3) = 33;
    }
  }
  else
  {
    LOBYTE(v3) = -69;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3,
      22,
      11,
      (struct _GUID *)&WPP_938dc497801239a3aa49f69f20f6972d_Traceguids,
      v2,
      v3);
  return 0;
}

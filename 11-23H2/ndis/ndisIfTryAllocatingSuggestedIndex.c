/*
 * XREFs of ndisIfTryAllocatingSuggestedIndex @ 0x1C001C240
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C001BA9C (ndisIfRegisterInterfaceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C001C2D0 (WPP_RECORDER_SF_Dd.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C00357D0 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 */

char __fastcall ndisIfTryAllocatingSuggestedIndex(unsigned int a1)
{
  char v1; // bl
  unsigned int v2; // eax
  char *v3; // rdi
  int v4; // eax
  ULONG64 v6; // rsi

  v1 = a1;
  if ( a1 >= *(_DWORD *)dword_1C00F5B64 )
  {
    v2 = dword_1C00F5668;
    v3 = (char *)&dword_1C00F5668;
  }
  else
  {
    v2 = dword_1C00F5650;
    v3 = (char *)&dword_1C00F5650;
  }
  if ( a1 >= v2 )
  {
    v6 = a1 - v2;
    v4 = IfIndexRange::Grow((IfIndexRange *)v3, (int)v6 + 1);
    if ( !v4 )
    {
      if ( !RtlTestBitEx((PRTL_BITMAP_EX)(v3 + 8), (unsigned int)v6) )
      {
        RtlSetBitEx((PRTL_BITMAP_EX)(v3 + 8), v6);
        return 1;
      }
      LOBYTE(v4) = 33;
    }
  }
  else
  {
    LOBYTE(v4) = -69;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3,
      22,
      11,
      (struct _GUID *)&WPP_938dc497801239a3aa49f69f20f6972d_Traceguids,
      v1,
      v4);
  return 0;
}

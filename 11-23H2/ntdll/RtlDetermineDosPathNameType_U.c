/*
 * XREFs of RtlDetermineDosPathNameType_U @ 0x1800792D0
 * Callers:
 *     LdrpGetDllPath @ 0x180031B6C (LdrpGetDllPath.c)
 *     LdrAddDllDirectory @ 0x180078AB0 (LdrAddDllDirectory.c)
 *     RtlDosSearchPath_U @ 0x1800790A0 (RtlDosSearchPath_U.c)
 *     LdrpResValidateFilePath @ 0x1800F10C8 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

RTL_PATH_TYPE __cdecl RtlDetermineDosPathNameType_U(PCWSTR DosFileName)
{
  WCHAR v2; // ax

  if ( *DosFileName == 92 || *DosFileName == 47 )
  {
    if ( DosFileName[1] == 92 || DosFileName[1] == 47 )
    {
      if ( DosFileName[2] == 63 || DosFileName[2] == 46 )
      {
        v2 = DosFileName[3];
        if ( v2 == 92 || v2 == 47 )
          return 6;
        else
          return v2 != 0 ? 1 : 7;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 4;
    }
  }
  else if ( *DosFileName && DosFileName[1] == 58 )
  {
    if ( DosFileName[2] == 92 || DosFileName[2] == 47 )
      return 2;
    else
      return 3;
  }
  else
  {
    return 5;
  }
}

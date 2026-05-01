/*
 * XREFs of ?IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ @ 0x180107138
 * Callers:
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ExperienceManagerUtils::IsPreReleaseExperience(ExperienceManagerUtils *this)
{
  int v1; // eax
  char v2; // bl
  LSTATUS ValueW; // eax
  bool v5; // zf
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_18098D734;
  v2 = 1;
  if ( !dword_18098D734 )
  {
    pdwType = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
               L"PrereleaseExperience",
               0x10000012u,
               &pdwType,
               &pvData,
               &pcbData);
    if ( !ValueW )
    {
      if ( pdwType == 4 )
      {
        if ( pvData <= 1 )
        {
          v5 = pvData == 1;
          goto LABEL_9;
        }
      }
      else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        ValueW = 0;
        v5 = (_WORD)pvData == 49;
LABEL_9:
        LOBYTE(ValueW) = v5;
        if ( ValueW )
        {
          dword_18098D734 = 1;
          return v2;
        }
      }
    }
    v1 = 2;
    dword_18098D734 = 2;
  }
  if ( v1 != 1 )
    return 0;
  return v2;
}

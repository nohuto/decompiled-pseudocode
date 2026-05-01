/*
 * XREFs of ?IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ @ 0x1800FF278
 * Callers:
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800FF230 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ExperienceManagerUtils::IsPreReleaseExperience(ExperienceManagerUtils *this)
{
  int v1; // eax
  char v2; // bl
  int v4; // eax
  bool v5; // zf
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_1807B3A6C;
  v2 = 1;
  if ( !dword_1807B3A6C )
  {
    pdwType = 0;
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
           L"PrereleaseExperience",
           0x10000012u,
           &pdwType,
           &pvData,
           &pcbData) )
    {
LABEL_6:
      v1 = 2;
      dword_1807B3A6C = 2;
      goto LABEL_2;
    }
    if ( pdwType == 4 )
    {
      if ( pvData > 1 )
        goto LABEL_6;
      v4 = 0;
      v5 = pvData == 1;
    }
    else
    {
      if ( pcbData != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_6;
      v4 = 0;
      v5 = (_WORD)pvData == 49;
    }
    LOBYTE(v4) = v5;
    if ( v4 )
    {
      dword_1807B3A6C = 1;
      return v2;
    }
    goto LABEL_6;
  }
LABEL_2:
  if ( v1 != 1 )
    return 0;
  return v2;
}

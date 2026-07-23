/*
 * XREFs of SecureDump_ReInitialize @ 0x14055EB78
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x140550FC4 (IoProvisionCrashDumpKey.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140374C94 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1403B6604 (SecureDump_ProvisionCrashDumpKey.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055E274 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055ED54 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x1405B7C3C (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReInitialize(__int64 a1, ULONG a2)
{
  ULONG v3; // edx
  int v4; // ebx

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225473LL;
  if ( (unsigned int)(SecureDmpEncryptionContext - 2) > 1 )
    return 3221225860LL;
  if ( !DWORD1(xmmword_140C64CD8) || !SecureDmpLoadCertificate )
    return 3221225488LL;
  if ( hAlgorithm )
  {
    BCryptCloseAlgorithmProvider(hAlgorithm, a2);
    hAlgorithm = 0LL;
  }
  if ( hObject )
  {
    BCryptDestroyKey(hObject);
    hObject = 0LL;
  }
  if ( qword_140C64CF8 )
  {
    ExFreePoolWithTag(qword_140C64CF8, 0);
    qword_140C64CF8 = 0LL;
  }
  if ( *((_QWORD *)&dwFlags + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
    *((_QWORD *)&dwFlags + 1) = 0LL;
  }
  if ( *((_QWORD *)&xmmword_140C64CD8 + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&xmmword_140C64CD8 + 1), 0);
    *((_QWORD *)&xmmword_140C64CD8 + 1) = 0LL;
  }
  v4 = SecureDump_ProvisionCrashDumpKey();
  if ( v4 < 0
    || (v4 = SecureDump_SymmetricEncryptionSetup(), v4 < 0)
    || (v4 = SecureDump_EncryptSymmetricKeyWithPublicKey(), v4 < 0) )
  {
    byte_140C64CD4 = 0;
    if ( hAlgorithm )
    {
      BCryptCloseAlgorithmProvider(hAlgorithm, v3);
      hAlgorithm = 0LL;
    }
    if ( hObject )
    {
      BCryptDestroyKey(hObject);
      hObject = 0LL;
    }
    if ( qword_140C64CF8 )
    {
      ExFreePoolWithTag(qword_140C64CF8, 0);
      qword_140C64CF8 = 0LL;
    }
    if ( *((_QWORD *)&dwFlags + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
      *((_QWORD *)&dwFlags + 1) = 0LL;
    }
    if ( *((_QWORD *)&xmmword_140C64CD8 + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&xmmword_140C64CD8 + 1), 0);
      *((_QWORD *)&xmmword_140C64CD8 + 1) = 0LL;
    }
    SecureDmpEncryptionContext = 3;
  }
  else
  {
    byte_140C64CD4 = 1;
    SecureDmpEncryptionContext = 2;
    dword_140C64D20 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
  }
  return (unsigned int)v4;
}

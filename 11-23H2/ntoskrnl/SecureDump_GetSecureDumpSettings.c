/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x140395D24
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x140550FC4 (IoProvisionCrashDumpKey.c)
 *     KeCapturePersistentThreadState @ 0x140554980 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x140832F88 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x14094BBE8 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_140C64CD4;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140C64D18 == 1;
    v1 = dword_140C64D20;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}

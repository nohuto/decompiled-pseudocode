/*
 * XREFs of GetLunExtension @ 0x1C00035D4
 * Callers:
 *     NVMeMapError @ 0x1C0001D84 (NVMeMapError.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C00034D4 (ProcessNvmeHealthInfoLog.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeAdminCommandErrorLog @ 0x1C000DD7C (NVMeAdminCommandErrorLog.c)
 *     ProcessNvmeReservationNotification @ 0x1C0024EE8 (ProcessNvmeReservationNotification.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024FDC (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLunExtension(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  int v4; // r8d
  __int64 *i; // rcx

  if ( a2 == -1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 224);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  for ( i = (__int64 *)(a1 + 1752); ; ++i )
  {
    result = *i;
    if ( *i )
    {
      if ( *(_DWORD *)(result + 16) == a2 )
        break;
    }
    if ( ++v4 >= v3 )
      return 0LL;
  }
  return result;
}

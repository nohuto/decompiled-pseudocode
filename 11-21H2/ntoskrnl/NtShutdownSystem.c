/*
 * XREFs of NtShutdownSystem @ 0x1406398E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406396B8 @ 0x1406396B8 (sub_1406396B8.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140A53010 @ 0x140A53010 (sub_140A53010.c)
 */

NTSTATUS __cdecl NtShutdownSystem(SHUTDOWN_ACTION Action)
{
  __int32 v1; // ecx
  __int32 v2; // ecx
  KPROCESSOR_MODE v4; // dl
  __int64 v5; // rcx

  if ( Action == ShutdownNoReboot )
  {
    v5 = 4LL;
    return sub_140A53010(v5, 4LL, 3221225476LL);
  }
  v1 = Action - 1;
  if ( !v1 )
  {
    v5 = 5LL;
    return sub_140A53010(v5, 4LL, 3221225476LL);
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v5 = 6LL;
    return sub_140A53010(v5, 4LL, 3221225476LL);
  }
  if ( v2 != 1 )
    return -1073741811;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v4 && !SeSinglePrivilegeCheck(stru_140D3CAB8, v4) )
    return -1073741727;
  sub_1406396B8();
  return -1073741823;
}

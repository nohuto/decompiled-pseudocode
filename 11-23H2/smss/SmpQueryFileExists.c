/*
 * XREFs of SmpQueryFileExists @ 0x1400180FC
 * Callers:
 *     SmpGetDumpDestination @ 0x140017DF4 (SmpGetDumpDestination.c)
 *     SmpShuffleMove @ 0x14001A45C (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

char __fastcall SmpQueryFileExists(struct _UNICODE_STRING *a1)
{
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v3; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v3.RootDirectory = 0LL;
  v3.ObjectName = a1;
  v3.Length = 48;
  v3.Attributes = 64;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&Handle, 0x100080u, &v3, &v2, 3u, 0x20u) < 0 )
    return 0;
  NtClose(Handle);
  return 1;
}

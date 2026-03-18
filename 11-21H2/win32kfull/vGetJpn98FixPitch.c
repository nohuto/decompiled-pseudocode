/*
 * XREFs of vGetJpn98FixPitch @ 0x1C00E21D0
 * Callers:
 *     <none>
 * Callees:
 *     bQueryFntCacheReg @ 0x1C00E22A8 (bQueryFntCacheReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00E2700 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 */

NTSTATUS vGetJpn98FixPitch()
{
  int v0; // ebx
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  Handle = 0LL;
  result = GetGreRegKey(
             &Handle,
             0x80000000,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize");
  if ( result >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle) )
    {
      LOBYTE(v0) = 0;
      gbJpn98FixPitch = v0;
    }
    return ZwClose(Handle);
  }
  return result;
}

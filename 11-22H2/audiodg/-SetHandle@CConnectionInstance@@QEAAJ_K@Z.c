/*
 * XREFs of ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140008824
 * Callers:
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x1400071AC (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140008790 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005FF40 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::SetHandle(CConnectionInstance *this, unsigned __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *((_QWORD *)this + 1) > 0xFFFFFFFFFFFFFFFDuLL || a2 > 0xFFFFFFFFFFFFFFFDuLL )
    *((_QWORD *)this + 1) = a2;
  else
    return (unsigned int)-2147024890;
  return v2;
}

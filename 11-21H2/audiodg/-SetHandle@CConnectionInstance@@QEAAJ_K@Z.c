/*
 * XREFs of ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14001C77C
 * Callers:
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140019A50 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::SetHandle(CConnectionInstance *this, __int64 a2)
{
  __int64 result; // rax

  if ( *((_QWORD *)this + 1) != -1LL && a2 != -1 )
    return 2147942406LL;
  result = 0LL;
  *((_QWORD *)this + 1) = a2;
  return result;
}

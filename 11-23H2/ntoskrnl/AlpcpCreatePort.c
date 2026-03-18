/*
 * XREFs of AlpcpCreatePort @ 0x140717BF4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14071697C (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140717744 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC318 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, (_BYTE)a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}

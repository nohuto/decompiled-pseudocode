/*
 * XREFs of WalkConnectionsToTerminal @ 0x1C00304FC
 * Callers:
 *     PropertySetCopyProtection @ 0x1C002FD94 (PropertySetCopyProtection.c)
 *     WalkConnectionsToTerminal @ 0x1C00304FC (WalkConnectionsToTerminal.c)
 * Callees:
 *     SetCopyProtectionOnTerminal @ 0x1C00303B0 (SetCopyProtectionOnTerminal.c)
 *     WalkConnectionsToTerminal @ 0x1C00304FC (WalkConnectionsToTerminal.c)
 */

__int64 __fastcall WalkConnectionsToTerminal(IRP *a1, __int64 a2, unsigned int *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r9
  unsigned int v8; // r10d
  const KSFILTER_DESCRIPTOR *Descriptor; // rax
  ULONG v10; // ebx
  ULONG ConnectionsCount; // esi
  const KSTOPOLOGY_CONNECTION *Connections; // r15
  const KSTOPOLOGY_CONNECTION *v13; // rdi
  int v14; // eax

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = *(unsigned int *)(a2 + 8);
  v8 = 0;
  if ( (_DWORD)v7 == -1 )
  {
    return (unsigned int)SetCopyProtectionOnTerminal(a1, *(_DWORD *)(a2 + 12), a3);
  }
  else if ( FilterFromIrp )
  {
    Descriptor = FilterFromIrp->Descriptor;
    v10 = 0;
    ConnectionsCount = Descriptor->ConnectionsCount;
    Connections = Descriptor->Connections;
    if ( ConnectionsCount )
    {
      v13 = Descriptor->Connections;
      do
      {
        if ( v13->FromNode == (_DWORD)v7 )
        {
          v14 = WalkConnectionsToTerminal(a1, &Connections[v10], a3, v7);
          v7 = *(unsigned int *)(a2 + 8);
          v8 = v14;
          if ( v14 < 0 )
            break;
        }
        ++v10;
        ++v13;
      }
      while ( v10 < ConnectionsCount );
    }
  }
  return v8;
}

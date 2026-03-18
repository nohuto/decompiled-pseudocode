/*
 * XREFs of ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00F74F0
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00F6DB0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00F7548 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C011D77C (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

char __fastcall UmfdAllocation::Initialize(bool a1)
{
  _QWORD *v1; // rax

  UmfdAllocation::s_allocationLookup = NSInstrumentation::CPointerHashTable::Create(a1);
  if ( UmfdAllocation::s_allocationLookup )
  {
    v1 = EngAllocMem(0, 8u, 0x61646647u);
    UmfdAllocation::s_allocationLookupLock = v1;
    if ( v1 )
    {
      *v1 = 0LL;
      return 1;
    }
    UmfdAllocation::Uninitialize();
  }
  return 0;
}

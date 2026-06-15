/*
 * XREFs of ?Attach@CCrossProcessClientMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x180042DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x180042E30 (-Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 */

__int64 __fastcall CCrossProcessClientMemory::Attach(
        CCrossProcessClientMemory *this,
        struct CP_MEMORY_METADATA_BLOB *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 == 1 )
  {
    v2 = CCrossProcessBaseMemory::Attach(this, (struct CP_MEMORY_METADATA_BLOB *)((char *)a2 + 8));
    if ( v2 >= 0 )
      return 0LL;
    v4 = 33LL;
  }
  else
  {
    v2 = -2147024809;
    v4 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}

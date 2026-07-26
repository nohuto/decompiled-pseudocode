/*
 * XREFs of ndisCmDeleteStateObject @ 0x1C0008DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B3B78 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

__int64 __fastcall ndisCmDeleteStateObject(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return ndisIfDereferenceCompartmentForUser(v1);
  return result;
}

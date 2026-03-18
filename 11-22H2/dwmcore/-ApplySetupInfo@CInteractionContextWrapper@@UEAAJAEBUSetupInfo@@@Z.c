/*
 * XREFs of ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x180135090
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x18028400C (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1802844D0 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 */

__int64 __fastcall CInteractionContextWrapper::ApplySetupInfo(
        struct HINTERACTIONCONTEXT__ **this,
        const struct SetupInfo *a2)
{
  __int64 result; // rax

  result = CInteractionContextWrapper::EnsureInteractionContext((CInteractionContextWrapper *)this);
  if ( (int)result >= 0 )
    return CInteractionContextWrapper::ConfigureInteractionContext((CInteractionContextWrapper *)this, this[2], a2);
  return result;
}

/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800E246C
 * Callers:
 *     ?FinalRelease@CInteraction@@UEAAXXZ @ 0x1800E22A0 (-FinalRelease@CInteraction@@UEAAXXZ.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800E22F0 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x18020C6B4 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180082CFC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  int v1; // eax
  __int64 v2; // r8
  int v3; // r9d

  LOBYTE(v1) = HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, a1);
  if ( v1 )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)lpMem + (unsigned int)(Size * v3));
  return (struct CInteraction::HANDLE_ENTRY *)v2;
}

/*
 * XREFs of ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800BDE28
 * Callers:
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070D3C (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18007327C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?CheckParent@CChannel@@AEAAXII@Z @ 0x180073404 (-CheckParent@CChannel@@AEAAXII@Z.c)
 *     ?RemoveChild@CChannel@@AEAAXII@Z @ 0x180073CFC (-RemoveChild@CChannel@@AEAAXII@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800BD8BC (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x1800D9854 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x1800BE004 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CHandleTable::HANDLE_ENTRY *__fastcall CHandleTable::GetEntry(CHandleTable *this, unsigned int a2)
{
  __int64 v2; // rcx
  int v3; // r8d

  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a2) )
    return (struct CHandleTable::HANDLE_ENTRY *)(*(_QWORD *)(v2 + 24) + (unsigned int)(v3 * *(_DWORD *)(v2 + 8)));
  else
    return 0LL;
}

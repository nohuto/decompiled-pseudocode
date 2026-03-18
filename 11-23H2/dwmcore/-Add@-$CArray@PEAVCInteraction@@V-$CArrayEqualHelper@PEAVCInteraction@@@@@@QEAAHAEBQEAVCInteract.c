/*
 * XREFs of ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x18020B658
 * Callers:
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18020C9A0 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18002A06C (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800B3520 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  int v5; // ebp
  int v6; // ebx
  char *v7; // rax
  char *v8; // rdx

  v2 = dword_1803E6368;
  v4 = 1;
  v5 = dword_1803E6368 + 1;
  if ( dword_1803E6368 + 1 <= 0 )
    return 0;
  if ( dword_1803E6368 == dword_1803E636C )
  {
    if ( dword_1803E6368 > 0x3FFFFFFF || (unsigned __int64)dword_1803E6368 > 0xFFFFFFFFFFFFFFFLL )
      return 0;
    v6 = 2;
    if ( dword_1803E636C >= 2 )
      v6 = dword_1803E6368 + (dword_1803E6368 >> 1);
    v7 = (char *)(dword_1803E6368
                ? DefaultHeap::Realloc(CInteraction::s_DefaultStateLockedInteractions, 8LL * v6)
                : DefaultHeap::AllocClear(8LL * v6));
    if ( !v7 )
      return 0;
    dword_1803E636C = v6;
    CInteraction::s_DefaultStateLockedInteractions = v7;
  }
  else
  {
    v7 = (char *)CInteraction::s_DefaultStateLockedInteractions;
  }
  v8 = &v7[8 * v2];
  dword_1803E6368 = v5;
  if ( v8 )
    *(_QWORD *)v8 = *a2;
  return v4;
}

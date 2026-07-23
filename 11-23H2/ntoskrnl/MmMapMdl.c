/*
 * XREFs of MmMapMdl @ 0x14062F5F0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x140276C10 (MiMakeProtectionMask.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiMappingHasIoReferences @ 0x140335ED0 (MiMappingHasIoReferences.c)
 *     MiZeroAndFlushPtes @ 0x1403360EC (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MiFreeUltraMdlContext @ 0x140661E88 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x140661F1C (MiGetUltraMdlContext.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, void (__fastcall *a3)(__int64, unsigned __int64), __int64 a4)
{
  _SLIST_ENTRY *v5; // r15
  unsigned int ProtectionMask; // ebp
  void (__fastcall *v7)(__int64, _QWORD); // r8
  __int64 v8; // r9
  unsigned __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 UltraMdlContext; // rax
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // r14
  int v16; // r13d
  int v17; // ebp
  __int64 i; // rsi
  unsigned __int64 v19; // rbx
  int v20; // ebp
  __int64 v21; // r8
  bool v22; // zf
  _DWORD v23[18]; // [rsp+30h] [rbp-48h] BYREF

  v23[0] = 0;
  v5 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a2);
  if ( ProtectionMask == -1
    || ProtectionMask == 24
    || (ProtectionMask & 7) == 5
    || (ProtectionMask & 2) != 0
    || (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    return 3221225541LL;
  }
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    v7(v8, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v11 = v10;
  if ( MmProtectFreedNonPagedPool )
    v11 = v10 + 1;
  if ( v11 > 0x200
    || (UltraMdlContext = MiGetUltraMdlContext(), (v5 = (_SLIST_ENTRY *)UltraMdlContext) == 0LL)
    || (UltraMapping = MiGetUltraMapping((unsigned __int64 *)(UltraMdlContext + 8), 3u, v11, 0),
        v14 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL) )
  {
    v14 = MiReservePtes((__int64)&qword_140C69940, v11);
    if ( !v14 )
      return 3221225626LL;
  }
  v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
  v16 = MiFillSystemPtes(v14, v10, a1 + 48, ProtectionMask, 0, v23);
  if ( v16 >= 0 )
  {
    v17 = v23[0] & 1;
    if ( (v23[0] & 1) != 0 )
    {
      MiMappingHasIoReferences(v15);
      *(_WORD *)(a1 + 10) |= 0x800u;
    }
    v16 = 0;
    a3(a4, v15);
    if ( v17 )
      MiZeroAndFlushPtes(v15, v10, 0);
  }
  if ( v5 )
  {
    if ( v11 )
    {
      for ( i = v11; i; --i )
      {
        v19 = ZeroPte;
        v20 = 0;
        if ( MiPteInShadowRange(v14) )
        {
          if ( MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C66CFC) )
            {
              v22 = (ZeroPte & 1) == 0;
              goto LABEL_29;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v22 = (ZeroPte & 1) == 0;
LABEL_29:
            if ( !v22 )
              v19 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v14 = v19;
        if ( v20 )
          MiWritePteShadow(v14, v19, v21);
        v14 += 8LL;
      }
    }
    MiFreeUltraMdlContext(v5);
  }
  else if ( v14 )
  {
    MiReleasePtes((__int64)&qword_140C69940, (__int64 *)v14, v11);
  }
  return (unsigned int)v16;
}

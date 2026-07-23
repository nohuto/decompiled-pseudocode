/*
 * XREFs of MiFillFileOnlyProtoAsBad @ 0x14063D4E0
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x140A33EF8 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1402DE264 (MiLockProtoPoolPageForce.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiFillFileOnlyProtoAsBad(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // r8
  bool v8; // zf
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 17;
  v3 = MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
  v4 = MiLockProtoPoolPageForce((ULONG_PTR)a2, &v10);
  v5 = MiLockLeafPage(a2, 0LL);
  if ( v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiUnlockProtoPoolPage(v4, v10);
  }
  v6 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( MiPteHasShadow() )
    {
      v6 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v8 = (v3 & 1) == 0;
        goto LABEL_9;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v8 = (v3 & 1) == 0;
LABEL_9:
      if ( !v8 )
        v3 |= 0x8000000000000000uLL;
    }
  }
  *a2 = v3;
  if ( v6 )
    MiWritePteShadow((__int64)a2, v3, v7);
  return MiUnlockProtoPoolPage(v4, v10);
}

/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140829888
 * Callers:
 *     HvpViewMapAdjustFlag @ 0x1408297DC (HvpViewMapAdjustFlag.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x140296F38 (CmSiProtectViewOfSection.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9E4C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x140354BD8 (CmSiUnlockViewOfSection.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByPolicy(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  void *v10; // r14
  void **v11; // rbx
  char v12; // al
  char v13; // al
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    LODWORD(v14) = 0;
    v5 = a3;
    do
    {
      v8 = a2[3];
      v9 = (unsigned __int64)(v5 - v8) >> 12;
      v10 = (void *)(a2[7] + v5 - v8);
      if ( (*((_BYTE *)a2 + v9 + 72) & 0x10) != 0 )
      {
        v11 = *(void ***)(a1 + 24);
        CmSiUnlockViewOfSection(a1, v11, (void *)(a2[7] + v5 - v8), 0x1000uLL);
        CmSiReleaseProcessLockedPagesCharge(v11, 4096LL);
        *((_BYTE *)a2 + v9 + 72) &= ~0x10u;
        --a2[8];
      }
      v12 = *((_BYTE *)a2 + v9 + 72);
      if ( (v12 & 4) != 0 )
      {
        v13 = v12 & 0xFB;
        *((_BYTE *)a2 + v9 + 72) = v13;
        if ( (v13 & 2) == 0 )
          CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v10, 0x1000uLL, 0x80000002, (ULONG *)&v14);
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}

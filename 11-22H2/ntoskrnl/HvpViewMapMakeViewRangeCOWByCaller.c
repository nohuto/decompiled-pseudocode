/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x14070B0F4
 * Callers:
 *     HvpViewMapCOWAndUnsealRange @ 0x14070B20C (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapMigrateCOWData @ 0x140885494 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x140296B88 (CmSiProtectViewOfSection.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9BBC (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x140354438 (CmSiUnlockViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x14070B4BC (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  ULONG_PTR v8; // rcx
  NTSTATUS v9; // ebp
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  void *v15; // r8
  void **v17; // rbx
  ULONG_PTR v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v19) = 0;
  v4 = a3;
  v9 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), (void *)(a2[7] + a3 - a2[3]), a4 - a3, 8u, (ULONG *)&v19);
  if ( v9 >= 0 )
  {
    v11 = v4;
    if ( v4 >= a4 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v12 = a2[3];
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v11 - v12) >> 12) + 72) & 2) == 0 )
        {
          LOBYTE(v10) = 1;
          v9 = HvpViewMapTouchPages(v11 + a2[7] - v12, 4096LL, v10);
          if ( v9 < 0 )
            break;
        }
        v11 += 4096LL;
        if ( v11 >= a4 )
        {
          while ( v4 < a4 )
          {
            v13 = a2[3];
            v14 = (unsigned __int64)(v4 - v13) >> 12;
            v15 = (void *)(v4 + a2[7] - v13);
            LOBYTE(v13) = *((_BYTE *)a2 + v14 + 72) | 0xA;
            *((_BYTE *)a2 + v14 + 72) = v13;
            if ( (v13 & 0x10) != 0 )
            {
              v17 = *(void ***)(a1 + 24);
              CmSiUnlockViewOfSection(v8, v17, v15, 0x1000uLL);
              CmSiReleaseProcessLockedPagesCharge(v17, 4096LL);
              *((_BYTE *)a2 + v14 + 72) &= ~0x10u;
              --a2[8];
              *((_BYTE *)a2 + v14 + 72) |= 4u;
            }
            v4 += 4096LL;
          }
          return 0;
        }
      }
      do
      {
        v18 = a2[3];
        if ( (*((_BYTE *)a2 + ((v4 - v18) >> 12) + 72) & 6) == 0 )
          CmSiProtectViewOfSection(
            v18,
            *(void ***)(a1 + 24),
            (void *)(v4 + a2[7] - v18),
            0x1000uLL,
            0x80000002,
            (ULONG *)&v19);
        v4 += 4096LL;
      }
      while ( v4 < a4 );
    }
  }
  return (unsigned int)v9;
}

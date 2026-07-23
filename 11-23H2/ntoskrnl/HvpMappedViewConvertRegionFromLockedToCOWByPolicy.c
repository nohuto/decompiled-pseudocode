/*
 * XREFs of HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1407C3914
 * Callers:
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x1407C3858 (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x140296F38 (CmSiProtectViewOfSection.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9E4C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x140354BD8 (CmSiUnlockViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x14070B61C (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpMappedViewConvertRegionFromLockedToCOWByPolicy(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rsi
  _BYTE *v6; // r14
  __int64 v8; // rbp
  NTSTATUS v11; // r15d
  ULONG_PTR v12; // rcx
  NTSTATUS v13; // eax
  void **v14; // rbx
  ULONG_PTR v15; // rcx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2[7] - a2[3];
  v5 = a4 - a3;
  LODWORD(v17) = 0;
  v6 = (_BYTE *)(a3 + v4);
  v8 = a3;
  v11 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v6, a4 - a3, 8u, (ULONG *)&v17);
  if ( v11 >= 0 )
  {
    HvpViewMapTouchPages(v6, v5, 1);
    v13 = CmSiProtectViewOfSection(v12, *(void ***)(a1 + 24), v6, v5, 2u, (ULONG *)&v17);
    v14 = *(void ***)(a1 + 24);
    v11 = v13;
    CmSiUnlockViewOfSection(v15, v14, v6, v5);
    CmSiReleaseProcessLockedPagesCharge(v14, v5);
    while ( v8 < a4 )
    {
      *((_BYTE *)a2 + ((unsigned __int64)(v8 - a2[3]) >> 12) + 72) = *((_BYTE *)a2
                                                                     + ((unsigned __int64)(v8 - a2[3]) >> 12)
                                                                     + 72) & 0xEB | 4;
      v8 += 4096LL;
    }
    a2[8] -= v5 >> 12;
  }
  return (unsigned int)v11;
}

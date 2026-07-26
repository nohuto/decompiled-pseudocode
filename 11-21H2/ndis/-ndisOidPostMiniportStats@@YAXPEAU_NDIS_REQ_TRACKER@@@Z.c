/*
 * XREFs of ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1C0033D94 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

void __fastcall ndisOidPostMiniportStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  unsigned int *v2; // r11
  _QWORD *v3; // rcx
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // r11
  unsigned int v8; // edi
  __int64 *p_Src; // rdx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(unsigned int **)(v1 + 144);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v1 + 144);
    if ( *(_DWORD *)(v1 + 32) != 131334 || !*v2 )
      goto LABEL_13;
    IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(*v2);
    v8 = *(_DWORD *)(v7 + 16) < 8u ? 4 : 8;
    if ( !IsSatisfiedByOidGenStatistics || *(_DWORD *)(v5 + 40) )
    {
      if ( v6 != 131333 || *(_DWORD *)(v5 + 40) )
      {
        v8 = 0;
        goto LABEL_12;
      }
      ndisIsSatisfiedByOidGenStatistics(0x2021Bu);
      v10 = ndisIsSatisfiedByOidGenStatistics(0x20104u);
      p_Src = &Src;
      Src = *(_QWORD *)(v11 + v12) - *(_QWORD *)(v10 + v12);
    }
    else
    {
      p_Src = (__int64 *)(*(_QWORD *)(v1 + 40) + IsSatisfiedByOidGenStatistics);
    }
    memmove(*(void **)(v7 + 8), p_Src, v8);
LABEL_12:
    *(_DWORD *)(v1 + 52) = v8;
    ExFreePoolWithTag(*(PVOID *)(v1 + 40), 0);
    v3 = *(_QWORD **)(v1 + 144);
    *(_QWORD *)(v1 + 40) = v3[1];
    *(_DWORD *)(v1 + 48) = *((_DWORD *)v3 + 4);
    *(_DWORD *)(v1 + 32) = *(_DWORD *)v3;
LABEL_13:
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(v1 + 144) = 0LL;
  }
}

/*
 * XREFs of ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003E390
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1C00359B4 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void __fastcall ndisOidPostMiniportStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  unsigned int *v2; // r11
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r11
  unsigned int v7; // edi
  __int64 *p_Src; // rdx
  int v9; // r8d
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(unsigned int **)(v1 + 144);
  if ( v2 )
  {
    if ( *(_DWORD *)(v1 + 32) != 131334 || !*v2 )
      goto LABEL_13;
    IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(*v2);
    v7 = *(_DWORD *)(v6 + 16) < 8u ? 4 : 8;
    if ( !IsSatisfiedByOidGenStatistics || *(_DWORD *)(v5 + 40) )
    {
      if ( v4 != 131333 || *(_DWORD *)(v5 + 40) )
      {
        v7 = 0;
        goto LABEL_12;
      }
      ndisIsSatisfiedByOidGenStatistics(0x2021Bu);
      v10 = ndisIsSatisfiedByOidGenStatistics(v9 - 1);
      p_Src = &Src;
      Src = *(_QWORD *)(v11 + v12) - *(_QWORD *)(v10 + v12);
    }
    else
    {
      p_Src = (__int64 *)(*(_QWORD *)(v1 + 40) + IsSatisfiedByOidGenStatistics);
    }
    memmove(*(void **)(v6 + 8), p_Src, v7);
LABEL_12:
    *(_DWORD *)(v1 + 52) = v7;
    ExFreePoolWithTag(*(PVOID *)(v1 + 40), 0);
    v13 = *(_QWORD *)(v1 + 144);
    *(_QWORD *)(v1 + 40) = *(_QWORD *)(v13 + 8);
    *(_DWORD *)(v1 + 48) = *(_DWORD *)(v13 + 16);
    *(_DWORD *)(v1 + 32) = *(_DWORD *)v13;
LABEL_13:
    ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
    *(_QWORD *)(v1 + 144) = 0LL;
  }
}

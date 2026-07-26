/*
 * XREFs of ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C003546C
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008C920 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 * Callees:
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00160EC (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022EB8 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0109ED8 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void ndisPktMonRegisterAllFilters(void)
{
  KIRQL v0; // al
  _NDIS_FILTER_BLOCK *v1; // rbx
  KIRQL v2; // di
  unsigned int Flags; // ecx
  PVOID *Pool2; // rax
  PVOID *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]
  int v12; // [rsp+40h] [rbp+10h] BYREF

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  v1 = ndisGlobalFilterList;
  v2 = v0;
  while ( v1 )
  {
    Flags = v1->Flags;
    if ( (Flags & 8) == 0 && (Flags & 0x100) == 0 )
    {
      v12 = 0;
      if ( ndisReferenceRefEx(&v1->Ref.SpinLock, 2u, (enum _NDIS_REFERENCE_STATUS *)&v12) )
      {
        Pool2 = (PVOID *)ExAllocatePool2(64LL, 24LL, 1836074062);
        if ( Pool2 )
        {
          Pool2[2] = v1;
          v5 = p_P;
          if ( *p_P != &P )
LABEL_19:
            __fastfail(3u);
          Pool2[1] = p_P;
          *Pool2 = &P;
          *v5 = Pool2;
          p_P = Pool2;
        }
        else
        {
          ndisDereferenceFilter(v1, 2u);
        }
      }
    }
    v1 = v1->NextGlobalFilter;
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v2);
  while ( 1 )
  {
    v6 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_19;
    v7 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_19;
    P = *(PVOID *)P;
    *(_QWORD *)(v7 + 8) = &P;
    v8 = v6[2];
    ExFreePoolWithTag(v6, 0);
    v9 = *(_DWORD *)(v8 + 56);
    if ( (v9 & 8) == 0 && (v9 & 0x100) == 0 )
    {
      *(_OWORD *)(v8 + 784) = 0LL;
      *(_OWORD *)(v8 + 800) = 0LL;
      *(_OWORD *)(v8 + 816) = 0LL;
      *(_QWORD *)(v8 + 832) = 0LL;
      ndisPktMonFilterRegister((struct _NDIS_FILTER_BLOCK *)v8);
    }
    ndisDereferenceFilter((_NDIS_FILTER_BLOCK *)v8, 2u);
  }
}

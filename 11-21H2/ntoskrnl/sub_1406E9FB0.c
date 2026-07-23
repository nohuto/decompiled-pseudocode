/*
 * XREFs of sub_1406E9FB0 @ 0x1406E9FB0
 * Callers:
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 *     sub_140929080 @ 0x140929080 (sub_140929080.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1409279CC @ 0x1409279CC (sub_1409279CC.c)
 *     sub_1409289DC @ 0x1409289DC (sub_1409289DC.c)
 */

__int64 __fastcall sub_1406E9FB0(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // edi
  PVOID *v7; // rdx
  PVOID **v8; // rax
  PVOID ***v9; // rcx
  PVOID *v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  ExAcquireFastMutex(&stru_140C48CC0);
  v4 = *(_QWORD *)(BugCheckParameter1 + 1400);
  if ( v4 && (v4 == a2 || !a2) )
  {
    *(_QWORD *)(BugCheckParameter1 + 1400) = 0LL;
    v5 = 0;
  }
  else
  {
    v4 = 0LL;
    v5 = -1073740973;
  }
  KeReleaseGuardedMutex(&stru_140C48CC0);
  if ( v5 >= 0 )
    sub_1409279CC(BugCheckParameter1);
  if ( v4 )
  {
    p_P = &P;
    P = &P;
    ExAcquireFastMutex((PFAST_MUTEX)(v4 + 24));
    v7 = *(PVOID **)(v4 + 80);
    while ( v7 != (PVOID *)(v4 + 80) )
    {
      v8 = (PVOID **)v7;
      v7 = (PVOID *)*v7;
      if ( v8[7] == (PVOID *)BugCheckParameter1 )
      {
        if ( v7[1] != v8
          || (v9 = (PVOID ***)v8[1], *v9 != v8)
          || (*v9 = (PVOID **)v7, v7[1] = v9, v10 = p_P, *p_P != &P) )
        {
LABEL_22:
          __fastfail(3u);
        }
        v8[1] = p_P;
        *v8 = &P;
        *v10 = v8;
        p_P = (PVOID *)v8;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v4 + 24));
    ObfDereferenceObject((PVOID)v4);
    while ( 1 )
    {
      v11 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_22;
      v12 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_22;
      P = *(PVOID *)P;
      *(_QWORD *)(v12 + 8) = &P;
      v11[18] = -1073740972;
      sub_1409289DC(v11);
    }
  }
  return (unsigned int)v5;
}

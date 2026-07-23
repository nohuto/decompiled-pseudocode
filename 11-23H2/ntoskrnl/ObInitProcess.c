/*
 * XREFs of ObInitProcess @ 0x1406B365C
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExpFreeHandleTable @ 0x14068AC1C (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x14068EB88 (ExpRemoveHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     ExSweepHandleTable @ 0x14073FE50 (ExSweepHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x1407AE160 (ExEnumHandleTable.c)
 *     ExDupHandleTable @ 0x1407B02CC (ExDupHandleTable.c)
 *     ExCreateHandleTable @ 0x1407B07B8 (ExCreateHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdi
  PVOID HandleTable; // rbp
  int v11; // ebp
  _QWORD *v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v13 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (PVOID)ExCreateHandleTable(a2, 1LL);
    goto LABEL_3;
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v11 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&P);
  if ( v11 >= 0 )
  {
    HandleTable = P;
LABEL_3:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1392) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL) )
      {
        *(_QWORD *)&v13 = a2;
        *((_QWORD *)&v13 + 1) = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, &v13, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1392) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 3221225626LL;
    }
  }
  ExReleaseRundownProtection_0(a1 + 139);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, P, 0LL);
    ExpRemoveHandleTable((__int64)v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v11;
}

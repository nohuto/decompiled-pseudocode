/*
 * XREFs of ObFindHandleForObject @ 0x1407AE0B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x1407AE160 (ExEnumHandleTable.c)
 */

bool __fastcall ObFindHandleForObject(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // bl
  unsigned __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0;
  v10 = ObReferenceProcessHandleTable(a1);
  if ( v10 )
  {
    if ( a2 )
      v12[0] = a2 - 48;
    else
      v12[0] = 0LL;
    v12[1] = a3;
    v12[2] = a4;
    v9 = (unsigned __int8)ExEnumHandleTable(v10, ObpEnumFindHandleProcedure, v12, a5) != 0;
    ExReleaseRundownProtection_0(a1 + 139);
  }
  return v9;
}

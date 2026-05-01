/*
 * XREFs of ?HampActGetPendDurations@@YAXPEAU_HAM_ACTIVITY_START_PERFORMANCE@@PEAT_HAM_PEND_DURATIONS@@@Z @ 0x18007B4B8
 * Callers:
 *     ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x180072A30 (-HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampActGetPendDurations(struct _HAM_ACTIVITY_START_PERFORMANCE *a1, union _HAM_PEND_DURATIONS *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  RtlQueryPerformanceFrequency(&v13);
  v4 = *(_QWORD *)a1;
  v5 = 5LL;
  v6 = v13;
  v7 = (__int64 *)((char *)a1 + 8);
  do
  {
    v8 = *v7;
    if ( *v7 )
    {
      v10 = v8 - v4;
      v9 = 1000 * (v8 - v4);
      v11 = -1LL;
      if ( is_mul_ok(v10, 0x3E8uLL) )
        v11 = v9;
      v12 = v11 / v6;
      if ( v11 / v6 > 0xFFFFFFFF )
        LODWORD(v12) = -1;
    }
    else
    {
      LODWORD(v12) = -1;
    }
    *(_DWORD *)a2 = v12;
    ++v7;
    a2 = (union _HAM_PEND_DURATIONS *)((char *)a2 + 4);
    v4 = v8;
    --v5;
  }
  while ( v5 );
}

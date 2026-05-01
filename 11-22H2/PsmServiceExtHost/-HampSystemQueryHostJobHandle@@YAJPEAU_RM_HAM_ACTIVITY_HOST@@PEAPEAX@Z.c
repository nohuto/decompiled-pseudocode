/*
 * XREFs of ?HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x180016E08
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800167B0 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSystemQueryHostJobHandle(struct _RM_HAM_ACTIVITY_HOST *a1, void **a2)
{
  __int64 v3; // r8
  __int64 (__fastcall *v5)(_QWORD, void **); // rax
  char *v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  void *v9; // rcx
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = 48LL;
  if ( a1 )
    v3 = (__int64)a1 - 16;
  v5 = *(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(*(_QWORD *)v3 + 40LL) + 112LL);
  v6 = (char *)a1 + 1160;
  v7 = 1224LL;
  if ( a1 )
    v7 = (__int64)v6;
  v8 = v5(*(_QWORD *)v7, &v11);
  if ( v8 < 0 )
  {
    v9 = v11;
  }
  else
  {
    v9 = 0LL;
    *a2 = v11;
    v8 = 0;
    v11 = 0LL;
  }
  if ( v9 )
    NtClose(v9);
  return (unsigned int)v8;
}

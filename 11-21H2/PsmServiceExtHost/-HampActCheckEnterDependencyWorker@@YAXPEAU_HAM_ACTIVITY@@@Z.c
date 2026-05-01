/*
 * XREFs of ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800774C8
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18007662C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 */

void __fastcall HampActCheckEnterDependencyWorker(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  __int64 v2; // rax
  struct _HAM_DEPENDENCY_GROUP *v4; // rdi
  char v5; // al

  v2 = *((_QWORD *)a1 + 10);
  v4 = *(struct _HAM_DEPENDENCY_GROUP **)(v2 + 704);
  if ( v4 && !*((_QWORD *)a1 + 9) && (*((_BYTE *)a1 + 552) & 2) == 0 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v2 + 704), a2);
    v5 = HampDepGroupTryEnterStateChange(v4, (unsigned __int64 *)(*((_QWORD *)a1 + 10) + 624LL));
    *((_DWORD *)a1 + 138) &= ~2u;
    *((_DWORD *)a1 + 138) |= 2 * (v5 & 1);
    HampDepGroupReleaseLockExclusive(v4);
  }
}

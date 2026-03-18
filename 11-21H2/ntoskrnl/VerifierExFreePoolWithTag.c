/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140A7F0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14045B94E (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140AA7018 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  ULONG v4; // edx
  void *v5; // rcx

  if ( (unsigned int)MmKernelVerifierEnabled() )
  {
    ExFreePoolWithTag(v5, v4);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)v5);
    ((void (__fastcall *)(__int64, _QWORD))pXdvExFreePoolWithTag)(a1, a2);
  }
}

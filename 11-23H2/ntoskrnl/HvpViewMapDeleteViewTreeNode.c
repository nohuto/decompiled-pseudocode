/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x14068F7D4
 * Callers:
 *     HvpViewMapCleanup @ 0x1407DAE44 (HvpViewMapCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x140208C80 (CmSiUnmapViewOfSection.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9E4C (CmSiReleaseProcessLockedPagesCharge.c)
 *     HvcallpNoHypervisorPresent @ 0x14036E7F0 (HvcallpNoHypervisorPresent.c)
 */

void __fastcall HvpViewMapDeleteViewTreeNode(PPRIVILEGE_SET Privileges, __int64 a2)
{
  void *v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(void **)&Privileges[2].Privilege[0].Attributes;
  if ( v2 )
  {
    CmSiUnmapViewOfSection((__int64)Privileges, *(HANDLE **)(a2 + 24), v2);
    if ( *(_QWORD *)&Privileges[3].Control )
    {
      v5 = HvcallpNoHypervisorPresent();
      CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a2 + 24), v6 * v5);
    }
  }
  CmSiFreeMemory(Privileges);
}

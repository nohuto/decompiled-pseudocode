/*
 * XREFs of ??1?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAA@XZ @ 0x18008281E
 * Callers:
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x180014A90 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<ReacquireResourceWorkItem>::~unique_ptr<ReacquireResourceWorkItem>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}

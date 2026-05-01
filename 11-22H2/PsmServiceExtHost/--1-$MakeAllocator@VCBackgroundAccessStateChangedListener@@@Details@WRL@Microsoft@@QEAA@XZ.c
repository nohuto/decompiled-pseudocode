/*
 * XREFs of ??1?$MakeAllocator@VCBackgroundAccessStateChangedListener@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008DEBC
 * Callers:
 *     ??$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Z @ 0x180041564 (--$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandle.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180048FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CBackgroundAccessStateChangedListener>::~MakeAllocator<CBackgroundAccessStateChangedListener>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}

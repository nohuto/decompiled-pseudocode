/*
 * XREFs of ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x1C0072138
 * Callers:
 *     DxgkAllocateAdlCB @ 0x1C0052E10 (DxgkAllocateAdlCB.c)
 *     SysMmTestLockObject @ 0x1C00725C0 (SysMmTestLockObject.c)
 * Callees:
 *     ?SmmValidateParameters@@YA_NPEBUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C00720F0 (-SmmValidateParameters@@YA_NPEBUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D76CC (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

__int64 __fastcall SysMmLockObject(struct SYSMM_ADAPTER_OBJECT *a1)
{
  char v2; // al
  unsigned int v3; // edx

  v2 = SmmValidateParameters((struct SYSMM_ADAPTER_OBJECT *)((char *)a1 - 64));
  v3 = 0;
  if ( !v2 )
    return 3221225485LL;
  if ( (*((_DWORD *)a1 - 5) & 1) == 0 )
    return (unsigned int)SmmLockPagedObject((struct SYSMM_ADAPTER_OBJECT *)((char *)a1 - 64), a1);
  return v3;
}

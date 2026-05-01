/*
 * XREFs of ?HampHostVetoesSuspendLicense@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CD30
 * Callers:
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013A00 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostVetoesSuspendLicense(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( ((*((_QWORD *)a1 + 83) >> 61) & 3) != 0 )
    return 1LL;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v3, (union _RM_OPTIMIZATION_STATE *)&v4);
  if ( (v3 & 0x100) == 0 || (v4 & 0x100) != 0 )
    return 1LL;
  result = 1LL;
  if ( *((_BYTE *)a1 + 592) != 1 || (*((_QWORD *)a1 + 83) & 0x2000000000000LL) == 0 )
    return 0LL;
  return result;
}

/*
 * XREFs of ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180035CC0
 * Callers:
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035A78 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     CemRcTableFind @ 0x180035CE0 (CemRcTableFind.c)
 */

struct _HAM_APPLICATION *__fastcall HampPkgFindApp(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2)
{
  return (struct _HAM_APPLICATION *)CemRcTableFind((char *)a1 + 40, a2, HampAppCompareByIdentity);
}

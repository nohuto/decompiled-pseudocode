/*
 * XREFs of ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x18007B6D0
 * Callers:
 *     ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x18007B67C (-HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z.c)
 * Callees:
 *     CemRcTableFind @ 0x180027F50 (CemRcTableFind.c)
 */

struct _HAM_USER *__fastcall HampUserFindInSession(struct _HAM_SESSION *a1, union _RM_SID *a2)
{
  return (struct _HAM_USER *)CemRcTableFind(
                               (__int64)a1 + 40,
                               (__int64)a2,
                               (__int64 (__fastcall *)(__int64, __int64))HampUserCompareByIdentity);
}

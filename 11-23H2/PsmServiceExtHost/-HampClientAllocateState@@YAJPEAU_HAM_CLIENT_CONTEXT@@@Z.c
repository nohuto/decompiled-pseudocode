/*
 * XREFs of ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DAE8
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DCE8 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampClientAllocateState(struct _HAM_CLIENT_CONTEXT *a1)
{
  __int64 result; // rax

  if ( !*((_WORD *)a1 + 110) )
    return 0LL;
  result = TpAllocTimer(
             (char *)a1 + 208,
             HampClientRundownTimerCallback,
             a1,
             (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 48 * (20LL - *((unsigned __int8 *)a1 + 164)));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

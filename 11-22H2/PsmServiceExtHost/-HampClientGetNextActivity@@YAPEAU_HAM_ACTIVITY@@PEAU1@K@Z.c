/*
 * XREFs of ?HampClientGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@K@Z @ 0x18004E09C
 * Callers:
 *     ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DBF4 (-HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DE3C (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E4A4 (-HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETER.c)
 * Callees:
 *     <none>
 */

struct _HAM_ACTIVITY *__fastcall HampClientGetNextActivity(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 6);
  if ( v1 == *((_QWORD *)a1 + 8) + 56LL )
    return 0LL;
  else
    return (struct _HAM_ACTIVITY *)(v1 - 48);
}

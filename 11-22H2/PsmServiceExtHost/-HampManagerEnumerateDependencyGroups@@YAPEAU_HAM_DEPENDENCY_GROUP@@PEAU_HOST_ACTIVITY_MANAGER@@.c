/*
 * XREFs of ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x180074C44
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074DA0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C548 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C580 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BD24 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

struct _HAM_DEPENDENCY_GROUP *__fastcall HampManagerEnumerateDependencyGroups(
        struct _HOST_ACTIVITY_MANAGER *a1,
        volatile signed __int64 *P)
{
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  _QWORD **v6; // r14
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 i; // rcx
  signed __int64 v10; // rtt
  _QWORD *v11; // rsi

  v4 = 0LL;
  HampManagerAcquireLockShared(a1);
  v6 = (_QWORD **)((char *)a1 + 496);
  if ( P )
    v7 = (_QWORD *)*((_QWORD *)P + 5);
  else
    v7 = *v6;
  while ( v7 != v6 )
  {
    v4 = v7 - 5;
    _m_prefetchw(v7 + 7);
    v8 = v7[7];
    for ( i = v8 + 1; i > 1; i = v8 + 1 )
    {
      v10 = v8;
      v8 = _InterlockedCompareExchange64(v4 + 12, i, v8);
      if ( v10 == v8 )
        goto LABEL_12;
    }
    if ( i != 1 )
      __fastfail(0xEu);
    v7 = (_QWORD *)*v7;
  }
LABEL_12:
  HampManagerReleaseLockShared(a1, v5);
  v11 = 0LL;
  if ( v7 != v6 )
    v11 = v4;
  if ( P )
    HampDepGroupDereference(P);
  return (struct _HAM_DEPENDENCY_GROUP *)v11;
}

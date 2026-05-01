/*
 * XREFs of ?ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z @ 0x18006CA24
 * Callers:
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006CBC8 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CemRcTableFind @ 0x180035D10 (CemRcTableFind.c)
 */

struct _AR_ACTIVITY *__fastcall ArManagerFindActivityByHandle(struct _ACTIVITY_RESTARTER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = CemRcTableFind((__int64)a1, (__int64)&v9, (__int64 (__fastcall *)(__int64, __int64))ArHostCompareByHostId);
  v5 = 0LL;
  v6 = (_QWORD *)v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)(v4 + 600);
    if ( v7 )
    {
      if ( *(_QWORD *)(v7 + 8) == a3 )
      {
        v5 = v7;
        if ( _InterlockedIncrement64((volatile signed __int64 *)v7) <= 1 )
          __fastfail(0xEu);
      }
    }
    CemRcObjectDereference(v6);
  }
  return (struct _AR_ACTIVITY *)v5;
}

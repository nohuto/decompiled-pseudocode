/*
 * XREFs of ?HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z @ 0x18004DFC0
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DCA8 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampClientFindOrInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  bool v4; // zf
  __int64 v5; // [rsp+20h] [rbp-38h]
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  struct _HAM_CLIENT_CONTEXT *v8; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *((_WORD *)a1 + 110) == 0;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = *((_QWORD *)a1 + 19);
  }
  else
  {
    *(_QWORD *)&v6 = (char *)a1 + 220;
    DWORD2(v6) = *((_DWORD *)a1 + 42);
  }
  CemRcTableFindOrInsertEx(
    *((_QWORD *)a1 + 4),
    (__int64)&v6,
    (__int64 (__fastcall *)(__int64, unsigned __int64))HampClientCompareByLookupKey,
    (unsigned __int64)a1,
    v5,
    (unsigned __int64 *)&v8);
  if ( a1 == v8 && _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *a2 = v8;
}

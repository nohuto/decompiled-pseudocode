/*
 * XREFs of ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x1800412C4
 * Callers:
 *     ?HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z @ 0x1800410C0 (-HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180041368 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180041390 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        struct _HAM_SESSION **a3)
{
  struct _HAM_SESSION *v6; // rax
  int v7; // eax
  struct _HAM_SESSION *v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-28h]
  struct _HAM_SESSION *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v6 = HampSessionFindInManager(a1, a2);
  if ( v6 )
  {
    *a3 = v6;
    return 0;
  }
  v7 = HampSessionCreate(a1, a2, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
  {
    CemRcTableFindOrInsertEx(
      (__int64)a1 + 392,
      a2,
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampSessionCompareById,
      (unsigned __int64)v12,
      v11,
      (unsigned __int64 *)&v12);
    v9 = 0;
    if ( v12 == v8 )
    {
      *a3 = v8;
      return v9;
    }
    *a3 = v12;
  }
  if ( v8 )
    CemRcObjectDereference(v8);
  return v9;
}

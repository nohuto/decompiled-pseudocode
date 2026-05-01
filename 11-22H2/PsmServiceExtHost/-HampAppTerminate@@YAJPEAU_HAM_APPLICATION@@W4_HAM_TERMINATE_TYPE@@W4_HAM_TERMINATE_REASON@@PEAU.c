/*
 * XREFs of ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F8E4
 * Callers:
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180073BA8 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 * Callees:
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001B1F0 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800375EC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003EEB0 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F1C4 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F35C (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 */

__int64 __fastcall HampAppTerminate(struct _HAM_APPLICATION *a1, __int64 a2, unsigned int a3)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  int v5; // edi
  struct _RM_HAM_ACTIVITY_HOST *v6; // rbx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  for ( i = HampAppGetFirstHost(a1); ; i = HampAppGetNextHost(v6) )
  {
    v6 = i;
    if ( !i )
      break;
    v5 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v8, i);
    if ( v5 < 0 )
      goto LABEL_6;
  }
  HampHostSnapshotTerminate((__int64)&v8, 3u, a3, 0LL, 0xFA0u, 0);
  v5 = 0;
LABEL_6:
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v8);
  return (unsigned int)v5;
}

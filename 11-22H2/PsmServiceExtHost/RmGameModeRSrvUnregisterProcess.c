/*
 * XREFs of RmGameModeRSrvUnregisterProcess @ 0x180085C00
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18002B254 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180084888 (-RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall RmGameModeRSrvUnregisterProcess(__int64 a1, unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rcx
  int v3; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v3 = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( v3 >= 0 )
    v3 = RmSrvGameModeUnregisterProcess(v2, Handle);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}

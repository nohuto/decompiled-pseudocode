/*
 * XREFs of RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x180085AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18002B254 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800843A4 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 */

__int64 __fastcall RmGameModeRSrvRegisterPairedAuxiliaryProcess(
        __int64 a1,
        unsigned int a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v7; // ebx
  struct _RM_SERVICE_GLOBALS *v8; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  v7 = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( v7 >= 0 )
  {
    v7 = RmpSystemOpenProcess(&v11, 0x1000u, a4);
    if ( v7 >= 0 )
      v7 = RmSrvGameModeRegisterPairedAuxiliaryProcess(v8, Handle, a3, v11, a5);
  }
  if ( Handle )
    NtClose(Handle);
  if ( v11 )
    NtClose(v11);
  return (unsigned int)v7;
}

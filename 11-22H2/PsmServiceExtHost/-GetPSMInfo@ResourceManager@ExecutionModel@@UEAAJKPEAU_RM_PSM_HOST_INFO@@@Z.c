/*
 * XREFs of ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18002B254 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C850 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetPSMInfo(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        struct _RM_PSM_HOST_INFO *a3)
{
  NTSTATUS ProcessFullIdentity; // ebx
  unsigned int v5; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+20h] BYREF

  Handle = 0LL;
  ProcessFullIdentity = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( ProcessFullIdentity < 0
    || (ProcessFullIdentity = HampSystemGetProcessFullIdentity(Handle, 0LL, a3), ProcessFullIdentity < 0) )
  {
    v5 = ProcessFullIdentity | 0x10000000;
  }
  else
  {
    v5 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return v5;
}

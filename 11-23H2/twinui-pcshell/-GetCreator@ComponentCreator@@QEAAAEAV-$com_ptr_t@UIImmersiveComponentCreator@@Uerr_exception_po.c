/*
 * XREFs of ?GetCreator@ComponentCreator@@QEAAAEAV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@W4ImmersiveComponentOptions@@@Z @ 0x18017E788
 * Callers:
 *     ?CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18017E73C (-CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PE.c)
 *     ?CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18048A350 (-CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreatePerMonitorComponent@ImmersiveShellComponentsConfiguration@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18048A3F0 (-CreatePerMonitorComponent@ImmersiveShellComponentsConfiguration@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComponentCreator::GetCreator(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 4) != 0 )
    return a1;
  if ( (a2 & 2) != 0 )
    return a1 + 8;
  result = a1 + 16;
  if ( (a2 & 8) == 0 )
    return a1 + 24;
  return result;
}

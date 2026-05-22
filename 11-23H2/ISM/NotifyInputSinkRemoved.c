/*
 * XREFs of NotifyInputSinkRemoved @ 0x1800982A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009920 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     _anonymous_namespace_::GetLuidFromInputSinkHandle @ 0x180097E68 (_anonymous_namespace_--GetLuidFromInputSinkHandle.c)
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x180097EAC (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 */

__int64 __fastcall NotifyInputSinkRemoved(__int64 a1)
{
  RTL_SRWLOCK *Instance; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 LuidFromInputSinkHandle; // rax

  Instance = InputSinkDataCache::GetInstance();
  LuidFromInputSinkHandle = anonymous_namespace_::GetLuidFromInputSinkHandle(a1, v3, v4);
  InputSinkDataCache::InputSinkRemoved(Instance, LuidFromInputSinkHandle);
  return 1LL;
}

/*
 * XREFs of ?AddCreatedRef@WindowingEnvironmentConfig@@UEAAIXZ @ 0x180184210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentConfig::AddCreatedRef(WindowingEnvironmentConfig *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}

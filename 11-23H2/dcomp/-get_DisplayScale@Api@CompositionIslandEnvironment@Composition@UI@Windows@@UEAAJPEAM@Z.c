/*
 * XREFs of ?get_DisplayScale@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x180114100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironment::Api::get_DisplayScale(
        RTL_SRWLOCK *this,
        float *a2)
{
  RTL_SRWLOCK *v2; // rbx

  *a2 = 0.0;
  v2 = this + 3;
  AcquireSRWLockShared(this + 3);
  *a2 = *(float *)&this[7].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}

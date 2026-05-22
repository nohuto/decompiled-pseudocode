/*
 * XREFs of ?get_DefaultOrientation@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x180114020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironment::Api::get_DefaultOrientation(
        RTL_SRWLOCK *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  int Ptr; // eax

  v2 = this + 3;
  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  AcquireSRWLockShared(this + 3);
  Ptr = (int)this[6].Ptr;
  *(RTL_SRWLOCK *)a2 = this[5];
  *((_DWORD *)a2 + 2) = Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}

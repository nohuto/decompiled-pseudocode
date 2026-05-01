/*
 * XREFs of ?GetAt@ObjectArray@Discover@PenWorkspace@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18048CC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::ObjectArray::GetAt(
        PenWorkspace::Discover::ObjectArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // r10

  *a4 = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( a2 < (unsigned __int64)((*((_QWORD *)this + 3) - v4) >> 3) )
    return (***(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(v4 + 8LL * a2))(
             *(_QWORD *)(v4 + 8LL * a2),
             a3,
             a4);
  else
    return 2147942487LL;
}

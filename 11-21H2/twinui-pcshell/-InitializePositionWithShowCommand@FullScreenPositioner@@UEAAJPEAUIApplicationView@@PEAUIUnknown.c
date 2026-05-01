/*
 * XREFs of ?InitializePositionWithShowCommand@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18031FDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall FullScreenPositioner::InitializePositionWithShowCommand(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5)
{
  *a5 = 0;
  return (*(__int64 (__fastcall **)(char *, struct IApplicationView *, struct IUnknown *, struct IPresentationRequestedArgs *, _QWORD))(*((_QWORD *)this + 1) + 40LL))(
           (char *)this + 8,
           a2,
           a3,
           a4,
           0LL);
}

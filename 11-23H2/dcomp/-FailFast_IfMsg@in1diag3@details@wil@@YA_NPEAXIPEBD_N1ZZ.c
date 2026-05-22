/*
 * XREFs of ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x180159DA8
 * Callers:
 *     ?get_DesktopOffset@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x180159E30 (-get_DesktopOffset@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Fo.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180159CA4 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

bool wil::details::in1diag3::FailFast_IfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (_BYTE)a4 )
    wil::details::ReportFailure_HrMsg<3>((int)this, (int)a2, a3, retaddr, v7, retaddr, v8, a5, (__int64)&a6);
  return 0;
}

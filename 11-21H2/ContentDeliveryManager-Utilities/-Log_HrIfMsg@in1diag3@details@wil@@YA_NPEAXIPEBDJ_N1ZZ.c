/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800B5EEC
 * Callers:
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1800B531C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180074EEC (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

char wil::details::in1diag3::Log_HrIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        char a5,
        bool a6,
        const char *a7,
        ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  wil::details *v9; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a5 )
  {
    LODWORD(v9) = (_DWORD)a4;
    wil::details::ReportFailure_HrMsg<2>((int)this, (int)a2, a3, (__int64)a4, v8, retaddr, v9);
  }
  return a5;
}

/*
 * XREFs of ?UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z @ 0x1805E5360
 * Callers:
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x1805E17A8 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x1805E0568 (--$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall JointResize::SecondaryViewInfo::UpdateSizeConstraints(
        JointResize::SecondaryViewInfo *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v4 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this)(
         *(_QWORD *)this,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v13);
  v5 = *(_QWORD *)this;
  if ( v4 < 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int64 *, __int64 *))(*(_QWORD *)v5 + 280LL))(
           v5,
           a2,
           &v11,
           &v12);
    v7 = retaddr;
    if ( v6 < 0 )
    {
      v8 = 111LL;
      goto LABEL_6;
    }
    v9 = *((_QWORD *)this + 2);
    JointResizeTelemetry::UpdateSizeConstraints<unsigned __int64,long &,long &,long &,long &>(
      &v9,
      (int *)&v11,
      (int *)&v11 + 1,
      (int *)&v12,
      (int *)&v12 + 1);
    *((_QWORD *)this + 7) = v11;
    if ( !*((_BYTE *)this + 64) )
      *((_BYTE *)this + 64) = 1;
    *(_QWORD *)((char *)this + 68) = v12;
    if ( !*((_BYTE *)this + 76) )
      *((_BYTE *)this + 76) = 1;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 304LL))(v5);
    v7 = retaddr;
    if ( v6 < 0 )
    {
      v8 = 104LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        v7,
        (void *)v8,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
}

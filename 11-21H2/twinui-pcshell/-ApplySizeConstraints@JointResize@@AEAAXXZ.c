/*
 * XREFs of ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x180527CB8
 * Callers:
 *     ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800DBE50 (-OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     _lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::operator() @ 0x1801B4BF4 (_lambda_1e36923a9b749c25b7f1ddb2e1df24d1_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802EBABC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x180527604 (--$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z.c)
 */

void __fastcall JointResize::ApplySizeConstraints(JointResize *this)
{
  int v2; // eax
  char v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r15
  _BYTE *v6; // rdi
  char v7; // al
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // [rsp+28h] [rbp-39h]
  __int64 v24; // [rsp+38h] [rbp-29h] BYREF
  char v25; // [rsp+40h] [rbp-21h]
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  char v27; // [rsp+50h] [rbp-11h]
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  char v29; // [rsp+60h] [rbp-1h]
  _DWORD v30[2]; // [rsp+68h] [rbp+7h] BYREF
  char v31; // [rsp+70h] [rbp+Fh]
  struct tagRECT rcDst; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 33) )
  {
    rcDst = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 25) + 128LL))(
           *((_QWORD *)this + 25),
           &rcDst);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42B,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v2);
    v3 = 0;
    v31 = 0;
    v27 = 0;
    v29 = 0;
    v25 = 0;
    v4 = *((_QWORD *)this + 27);
    v5 = *((_QWORD *)this + 28);
    if ( v4 != v5 )
    {
      v6 = (_BYTE *)(v4 + 64);
      do
      {
        UnionRect(&rcDst, &rcDst, (const RECT *)(v6 - 40));
        v7 = *(v6 - 24);
        v8 = &v28;
        if ( v7 )
          v8 = (__int64 *)v30;
        v9 = &v24;
        if ( v7 )
          v9 = &v26;
        if ( *(v6 - 12) )
        {
          if ( *((_BYTE *)v8 + 8) )
          {
            v10 = *((_DWORD *)v6 - 5);
            if ( *(_DWORD *)v8 >= v10 )
              v10 = *(_DWORD *)v8;
            *(_DWORD *)v8 = v10;
            if ( !*(v6 - 12) )
LABEL_40:
              std::_Throw_bad_optional_access();
            v11 = *((_DWORD *)v6 - 4);
            if ( *((_DWORD *)v8 + 1) >= v11 )
              v11 = *((_DWORD *)v8 + 1);
            *((_DWORD *)v8 + 1) = v11;
          }
          else
          {
            *v8 = *(_QWORD *)(v6 - 20);
            *((_DWORD *)v8 + 2) = *((_DWORD *)v6 - 3);
          }
          v3 = 1;
        }
        if ( *v6 )
        {
          if ( *((_BYTE *)v9 + 8) )
          {
            v12 = *((_DWORD *)v6 - 2);
            if ( v12 >= *(_DWORD *)v9 )
              v12 = *(_DWORD *)v9;
            *(_DWORD *)v9 = v12;
            if ( !*v6 )
              goto LABEL_40;
            v13 = *((_DWORD *)v6 - 1);
            if ( v13 >= *((_DWORD *)v9 + 1) )
              v13 = *((_DWORD *)v9 + 1);
            *((_DWORD *)v9 + 1) = v13;
          }
          else
          {
            *v9 = *((_QWORD *)v6 - 1);
            *((_DWORD *)v9 + 2) = *(_DWORD *)v6;
          }
          v3 = 1;
        }
        v4 += 88LL;
        v6 += 88;
      }
      while ( v4 != v5 );
      if ( v3 )
      {
        v14 = *((_DWORD *)this + 80);
        if ( v14 >= 10 )
        {
          if ( v14 <= 11 )
          {
            v19 = 1;
            if ( v29 )
              v19 = v28;
            if ( v27 )
              v20 = rcDst.right - rcDst.left - v26;
            else
              v20 = 1;
            if ( v20 >= v19 )
              v19 = v20;
            LODWORD(v26) = v19;
            if ( v25 )
              v21 = v24;
            else
              v21 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
            if ( v31 )
              v22 = rcDst.right - rcDst.left - v30[0];
            else
              v22 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
            if ( v21 >= v22 )
              v21 = v22;
            LODWORD(v24) = v21;
            HIDWORD(v26) = 1;
            HIDWORD(v24) = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
            goto LABEL_69;
          }
          if ( v14 == 12 || v14 == 15 )
          {
            v15 = 1;
            if ( v29 )
              v15 = HIDWORD(v28);
            if ( v27 )
              v16 = rcDst.bottom - rcDst.top - HIDWORD(v26);
            else
              v16 = 1;
            if ( v16 >= v15 )
              v15 = v16;
            HIDWORD(v26) = v15;
            if ( v25 )
              v17 = HIDWORD(v24);
            else
              v17 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
            if ( v31 )
              v18 = rcDst.bottom - rcDst.top - v30[1];
            else
              v18 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
            if ( v17 >= v18 )
              v17 = v18;
            HIDWORD(v24) = v17;
            LODWORD(v26) = 1;
            LODWORD(v24) = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
LABEL_69:
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 19) + 88LL))(
              *((_QWORD *)this + 19),
              *((_QWORD *)this + 33),
              v26,
              v24);
            v28 = *((_QWORD *)this + 33);
            JointResizeTelemetry::ApplySizeConstraints<unsigned __int64,long &,long &,long &,long &>(
              &v28,
              (int *)&v26,
              (int *)&v26 + 1,
              (int *)&v24,
              (int *)&v24 + 1);
            return;
          }
        }
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1163LL,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)0x80070057LL,
          v23);
      }
    }
  }
}

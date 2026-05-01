/*
 * XREFs of ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x1805E1970
 * Callers:
 *     ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1801AF430 (-OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x1805E17A8 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x1805E037C (--$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z.c)
 */

void __fastcall JointResize::ApplySizeConstraints(JointResize *this)
{
  int v2; // eax
  char v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  _BYTE *v6; // rdi
  int v7; // r12d
  int v8; // esi
  char v9; // r9
  int v10; // r8d
  __int64 *v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  int *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // [rsp+28h] [rbp-49h]
  __int64 v26; // [rsp+38h] [rbp-39h] BYREF
  __int64 v27; // [rsp+40h] [rbp-31h] BYREF
  __int64 v28; // [rsp+48h] [rbp-29h] BYREF
  char v29; // [rsp+50h] [rbp-21h]
  int v30; // [rsp+58h] [rbp-19h] BYREF
  int v31; // [rsp+5Ch] [rbp-15h] BYREF
  char v32; // [rsp+60h] [rbp-11h]
  _DWORD v33[2]; // [rsp+68h] [rbp-9h] BYREF
  char v34; // [rsp+70h] [rbp-1h]
  _DWORD v35[2]; // [rsp+78h] [rbp+7h] BYREF
  char v36; // [rsp+80h] [rbp+Fh]
  struct tagRECT rcDst; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 33) )
  {
    rcDst = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 24) + 128LL))(
           *((_QWORD *)this + 24),
           &rcDst);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x30C,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v2);
    v3 = 0;
    v32 = 0;
    v34 = 0;
    v29 = 0;
    v36 = 0;
    v4 = *((_QWORD *)this + 25);
    v5 = *((_QWORD *)this + 26);
    if ( v4 != v5 )
    {
      v6 = (_BYTE *)(v4 + 76);
      v7 = v30;
      v8 = v28;
      do
      {
        UnionRect(&rcDst, &rcDst, (const RECT *)(v6 - 52));
        v9 = *(v6 - 36);
        v10 = v8;
        if ( v9 )
          v10 = v7;
        v11 = &v28;
        if ( v9 )
          v11 = (__int64 *)&v30;
        v12 = v35;
        if ( v9 )
          v12 = v33;
        if ( *(v6 - 12) )
        {
          if ( *((_BYTE *)v11 + 8) )
          {
            v13 = *((_DWORD *)v6 - 5);
            if ( v10 >= v13 )
              v13 = *(_DWORD *)v11;
            *(_DWORD *)v11 = v13;
            if ( !*(v6 - 12) )
LABEL_41:
              std::_Throw_bad_optional_access();
            v14 = (int *)&v28 + 1;
            if ( v9 )
              v14 = &v31;
            v15 = *((_DWORD *)v6 - 4);
            if ( *v14 >= v15 )
              v15 = *v14;
            *v14 = v15;
          }
          else
          {
            *v11 = *(_QWORD *)(v6 - 20);
            *((_DWORD *)v11 + 2) = *((_DWORD *)v6 - 3);
          }
          v3 = 1;
          v7 = v30;
          v8 = v28;
        }
        if ( *v6 )
        {
          if ( *((_BYTE *)v12 + 8) )
          {
            v16 = *((_DWORD *)v6 - 2);
            if ( v16 >= *v12 )
              v16 = *v12;
            *v12 = v16;
            if ( !*v6 )
              goto LABEL_41;
            v17 = *((_DWORD *)v6 - 1);
            if ( v17 >= v12[1] )
              v17 = v12[1];
            v12[1] = v17;
          }
          else
          {
            *(_QWORD *)v12 = *((_QWORD *)v6 - 1);
            v12[2] = *(_DWORD *)v6;
          }
          v3 = 1;
        }
        v4 += 96LL;
        v6 += 96;
      }
      while ( v4 != v5 );
      if ( v3 )
      {
        v27 = 0LL;
        v26 = 0LL;
        if ( *((_DWORD *)this + 74) == 10 || *((_DWORD *)this + 74) == 11 )
        {
          if ( !v29 )
            v8 = 1;
          if ( v34 )
            v22 = rcDst.right - rcDst.left - v33[0];
          else
            v22 = 1;
          if ( v22 >= v8 )
            v8 = v22;
          LODWORD(v27) = v8;
          if ( v36 )
            v23 = v35[0];
          else
            v23 = *((_DWORD *)this + 70) - *((_DWORD *)this + 68);
          if ( v32 )
            v24 = rcDst.right - rcDst.left - v7;
          else
            v24 = *((_DWORD *)this + 70) - *((_DWORD *)this + 68);
          if ( v23 >= v24 )
            v23 = v24;
          LODWORD(v26) = v23;
          HIDWORD(v27) = 1;
          HIDWORD(v26) = *((_DWORD *)this + 71) - *((_DWORD *)this + 69);
        }
        else
        {
          if ( *((_DWORD *)this + 74) != 12 && *((_DWORD *)this + 74) != 15 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x36C,
              (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
              (const char *)0x80070057LL,
              v25);
          v18 = HIDWORD(v28);
          if ( !v29 )
            v18 = 1;
          if ( v34 )
            v19 = rcDst.bottom - rcDst.top - v33[1];
          else
            v19 = 1;
          if ( v19 >= v18 )
            v18 = v19;
          HIDWORD(v27) = v18;
          if ( v36 )
            v20 = v35[1];
          else
            v20 = *((_DWORD *)this + 71) - *((_DWORD *)this + 69);
          if ( v32 )
            v21 = rcDst.bottom - rcDst.top - v31;
          else
            v21 = *((_DWORD *)this + 71) - *((_DWORD *)this + 69);
          if ( v20 >= v21 )
            v20 = v21;
          HIDWORD(v26) = v20;
          LODWORD(v27) = 1;
          LODWORD(v26) = *((_DWORD *)this + 70) - *((_DWORD *)this + 68);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 19) + 88LL))(
          *((_QWORD *)this + 19),
          *((_QWORD *)this + 33),
          v27,
          v26);
        v28 = *((_QWORD *)this + 33);
        JointResizeTelemetry::ApplySizeConstraints<unsigned __int64,long &,long &,long &,long &>(
          &v28,
          (int *)&v27,
          (int *)&v27 + 1,
          (int *)&v26,
          (int *)&v26 + 1);
      }
    }
  }
}

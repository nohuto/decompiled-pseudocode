/*
 * XREFs of _lambda_383acdc0f755edce25ec95f47577e0dd_::operator() @ 0x14002B2B0
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400149E8 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005CE3C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall lambda_383acdc0f755edce25ec95f47577e0dd_::operator()(_QWORD *a1)
{
  _QWORD *v2; // r8
  bool v3; // zf
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // r11
  __int64 v7; // rax
  int v8; // r15d
  __int64 *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 *v13; // rcx
  char *v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+30h] [rbp-68h]
  int v16; // [rsp+38h] [rbp-60h]
  int v17; // [rsp+40h] [rbp-58h]
  int v18; // [rsp+48h] [rbp-50h]
  int v19; // [rsp+50h] [rbp-48h]
  int v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+68h] [rbp-30h]
  int v23; // [rsp+70h] [rbp-28h]
  int v24; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (_QWORD *)a1[2];
  v3 = *(_DWORD *)(*a1 + 12LL) == 1;
  v4 = (__int64 *)a1[1];
  v5 = *(__int64 **)(*a1 + 152LL);
  v6 = *v4;
  v7 = *v5;
  if ( v3 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, int))(v7 + 56))(v5, v6, *v2, 0LL, 1);
    if ( v8 < 0 )
    {
      v9 = (__int64 *)a1[3];
      v10 = *v9;
      v24 = *(unsigned __int8 *)(*v9 + 23);
      v11 = 3085LL;
      v23 = *(unsigned __int8 *)(*v9 + 22);
      v22 = *(unsigned __int8 *)(*v9 + 21);
      v21 = *(unsigned __int8 *)(*v9 + 20);
      v20 = *(unsigned __int8 *)(*v9 + 19);
      v19 = *(unsigned __int8 *)(*v9 + 18);
      v18 = *(unsigned __int8 *)(*v9 + 17);
      v17 = *(unsigned __int8 *)(*v9 + 16);
      v16 = *(unsigned __int16 *)(*v9 + 14);
      v15 = *(unsigned __int16 *)(*v9 + 12);
LABEL_4:
      LODWORD(v14) = *(_DWORD *)(v10 + 8);
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v11,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v8,
        (int)"Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      return (unsigned int)v8;
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _DWORD))(v7 + 56))(v5, v6, *v2, 0LL, 0);
    if ( v8 < 0 )
    {
      v13 = (__int64 *)a1[3];
      v10 = *v13;
      v24 = *(unsigned __int8 *)(*v13 + 23);
      v11 = 3090LL;
      v23 = *(unsigned __int8 *)(*v13 + 22);
      v22 = *(unsigned __int8 *)(*v13 + 21);
      v21 = *(unsigned __int8 *)(*v13 + 20);
      v20 = *(unsigned __int8 *)(*v13 + 19);
      v19 = *(unsigned __int8 *)(*v13 + 18);
      v18 = *(unsigned __int8 *)(*v13 + 17);
      v17 = *(unsigned __int8 *)(*v13 + 16);
      v16 = *(unsigned __int16 *)(*v13 + 14);
      v15 = *(unsigned __int16 *)(*v13 + 12);
      goto LABEL_4;
    }
  }
  return 0LL;
}

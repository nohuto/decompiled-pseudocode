/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x18010A91C
 * Callers:
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x180107D20 (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18010946C (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCTarget *a3,
        char a4,
        unsigned __int64 a5)
{
  __int64 v8; // rbx
  int PIDOfTarget; // eax
  char v10; // [rsp+30h] [rbp-71h] BYREF
  char v11; // [rsp+31h] [rbp-70h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-6Dh] BYREF
  int v13; // [rsp+38h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-61h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+48h] [rbp-59h] BYREF
  int v16; // [rsp+50h] [rbp-51h]
  unsigned __int64 v17; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-41h] BYREF
  char *v19; // [rsp+80h] [rbp-21h]
  int v20; // [rsp+88h] [rbp-19h]
  int v21; // [rsp+8Ch] [rbp-15h]
  union _RTL_RUN_ONCE **v22; // [rsp+90h] [rbp-11h]
  int v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+9Ch] [rbp-5h]
  char *v25; // [rsp+A0h] [rbp-1h]
  int v26; // [rsp+A8h] [rbp+7h]
  int v27; // [rsp+ACh] [rbp+Bh]
  int *v28; // [rsp+B0h] [rbp+Fh]
  int v29; // [rsp+B8h] [rbp+17h]
  int v30; // [rsp+BCh] [rbp+1Bh]
  unsigned __int64 *v31; // [rsp+C0h] [rbp+1Fh]
  int v32; // [rsp+C8h] [rbp+27h]
  int v33; // [rsp+CCh] [rbp+2Bh]

  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v15 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v16 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v15);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      v17 = a5;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v13 = PIDOfTarget;
      v31 = &v17;
      v28 = &v13;
      v25 = &v10;
      v22 = &v15;
      v19 = &v11;
      v32 = 8;
      v23 = 8;
      v10 = a4;
      v15 = (union _RTL_RUN_ONCE *)a3;
      v11 = a2;
      v29 = 4;
      v26 = 1;
      v20 = 1;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_18022554C, 0LL, 0LL, 7u, &v18);
    }
  }
}

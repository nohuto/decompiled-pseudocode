/*
 * XREFs of ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BD084
 * Callers:
 *     ??$MPCCursorManager_Update2DCursor@AEA_N@ISMTracing@@SAXAEA_N@Z @ 0x1800BCB00 (--$MPCCursorManager_Update2DCursor@AEA_N@ISMTracing@@SAXAEA_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCCursorManager_Update2DCursor_(ISMTracing *this, const bool *a2)
{
  __int64 v3; // rcx
  char v4; // al
  char v5; // [rsp+30h] [rbp-9h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+40h] [rbp+7h] BYREF
  int v9; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp+17h] BYREF
  char *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v8 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v9 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v8);
    }
    v3 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      v4 = *a2;
      v13 = 0;
      v5 = v4;
      v12 = 1;
      v11 = &v5;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_180221FD9, 0LL, 0LL, 3u, &v10);
    }
  }
}

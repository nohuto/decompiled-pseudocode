/*
 * XREFs of ?OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ @ 0x1801C01E8
 * Callers:
 *     _lambda_bee3b73c73505971acff5e8346377b68_::_lambda_invoker_cdecl_ @ 0x1801BFC90 (_lambda_bee3b73c73505971acff5e8346377b68_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800CB1BC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801A4794 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseProcessor::OnMouseAsTouchAutoRepeat(MouseProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  DWORD TickCount; // edi
  int v6; // eax
  __int64 v7; // r8
  const char *v8; // r9
  struct InputInfo *v9; // rdx
  LARGE_INTEGER v10; // rcx
  struct InputInfo *v11; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 136) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      a4);
  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 14) + 88LL))(
         *((_QWORD *)this + 14),
         **((unsigned int **)this + 7),
         1LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v6,
      (int)&v13);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)&v11, 0x1D0uLL, v7, v8);
  v9 = v11;
  *(_DWORD *)v11 = 8;
  *((_DWORD *)v9 + 2) = TickCount;
  *((LARGE_INTEGER *)v9 + 2) = PerformanceCount;
  v10 = PerformanceCount;
  *((_DWORD *)v9 + 79) = 1;
  *((_DWORD *)v9 + 80) = 2;
  *((_DWORD *)v9 + 81) = 2;
  *((_DWORD *)v9 + 83) = 155670;
  *((_QWORD *)v9 + 44) = v13;
  *((_QWORD *)v9 + 46) = v13;
  *((_DWORD *)v9 + 96) = TickCount;
  *((LARGE_INTEGER *)v9 + 50) = v10;
  InjectionDevice::Inject((MouseProcessor *)((char *)this + 144), v9);
  if ( v11 )
    operator delete[](v11);
}

/*
 * XREFs of ?OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ @ 0x1801942F8
 * Callers:
 *     _lambda_bee3b73c73505971acff5e8346377b68_::_lambda_invoker_cdecl_ @ 0x180193DA0 (_lambda_bee3b73c73505971acff5e8346377b68_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800A29DC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180177450 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseProcessor::OnMouseAsTouchAutoRepeat(MouseProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  DWORD TickCount; // edi
  int v6; // eax
  __int64 v7; // r8
  const char *v8; // r9
  struct InputInfo *v9; // rdx
  struct InputInfo *v10; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 136) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      455LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      a4);
  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v12 = 0LL;
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
      (int)&v12);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)&v10, 0x1D0uLL, v7, v8);
  v9 = v10;
  *(_DWORD *)v10 = 8;
  *((_DWORD *)v9 + 2) = TickCount;
  *((LARGE_INTEGER *)v9 + 2) = PerformanceCount;
  *((_DWORD *)v9 + 79) = 1;
  *((_DWORD *)v9 + 80) = 2;
  *((_DWORD *)v9 + 81) = 2;
  *((_DWORD *)v9 + 83) = 155670;
  *((_QWORD *)v9 + 44) = v12;
  *((_QWORD *)v9 + 46) = v12;
  *((_DWORD *)v9 + 96) = TickCount;
  *((_QWORD *)v9 + 50) = *((_QWORD *)v9 + 2);
  InjectionDevice::Inject((MouseProcessor *)((char *)this + 144), v9);
  if ( v10 )
    operator delete[](v10);
}

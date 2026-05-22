/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801BFDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800CB1BC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801A4794 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x1801C0360 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        const char *a4)
{
  char v6; // bp
  int v7; // esi
  char v8; // al
  int v9; // eax
  int v10; // eax
  struct InputInfo *v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  int v17; // ebx
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-38h]
  struct InputInfo *v20; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*((_BYTE *)this + 128) )
  {
    if ( *((_DWORD *)a3 + 29) )
    {
      *((_DWORD *)a3 + 29) = 2 - (*((_BYTE *)a3 + 121) != 0);
    }
    else
    {
      v17 = MouseProcessor::SynthesizeMouseInput(a3);
      if ( v17 < 0 )
      {
        v18 = 320LL;
        goto LABEL_21;
      }
    }
    return 0LL;
  }
  v6 = 1;
  v7 = 0;
  v8 = *((_BYTE *)this + 129);
  if ( (*((_BYTE *)this + 96) & 0x10) != 0 )
  {
    if ( v8 )
    {
      v7 = 155670;
    }
    else
    {
      v7 = 90134;
      *((_BYTE *)this + 129) = 1;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 212) + 80LL))(
           *((_QWORD *)this + 212),
           0LL,
           166666LL);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFF,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v9,
        v19);
  }
  else if ( v8 )
  {
    v7 = 286720;
    *((_BYTE *)this + 129) = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *))(**((_QWORD **)this + 212) + 96LL))(
            *((_QWORD *)this + 212),
            a2);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x10A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v10,
        v19);
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)a3 + 29) = 4;
  if ( !v6 )
  {
LABEL_19:
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 13) + 80LL))(
            *((_QWORD *)this + 13),
            **((unsigned int **)this + 6),
            1LL);
    if ( v17 < 0 )
    {
      v18 = 305LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v17);
      return (unsigned int)v17;
    }
    return 0LL;
  }
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (__int64)&v20,
    0x1D0uLL,
    (__int64)a3,
    a4);
  v11 = v20;
  *(_DWORD *)v20 = 8;
  v12 = *((_DWORD *)a3 + 2);
  *((_DWORD *)v11 + 2) = v12;
  v13 = *((_QWORD *)a3 + 2);
  *((_QWORD *)v11 + 2) = v13;
  *((_DWORD *)v11 + 79) = 1;
  *((_DWORD *)v11 + 80) = 2;
  *((_DWORD *)v11 + 81) = 2;
  *((_DWORD *)v11 + 83) = v7;
  *((_DWORD *)v11 + 88) = *((_DWORD *)a3 + 25);
  *((_DWORD *)v11 + 89) = *((_DWORD *)a3 + 26);
  *((_QWORD *)v11 + 46) = *((_QWORD *)v11 + 44);
  *((_DWORD *)v11 + 96) = v12;
  *((_QWORD *)v11 + 50) = v13;
  v14 = (unsigned int)InjectionDevice::Inject((MouseProcessor *)((char *)this + 136), v11);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( v20 )
      operator delete[](v20);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
    (const char *)(unsigned int)v14);
  if ( v20 )
    operator delete[](v20);
  return v15;
}

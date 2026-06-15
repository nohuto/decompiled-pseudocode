/*
 * XREFs of ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x18001B1D8
 * Callers:
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x18001E1C8 (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::RuntimeClassInitialize(
        CApplication *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  unsigned __int16 **v7; // rsi
  void *v8; // r14
  DWORD LastError; // ebx
  unsigned __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // ecx
  BOOL v15; // eax
  __int64 v16; // rax
  const char *v17; // r9
  __int64 v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)this + 53) = a4;
  v7 = (unsigned __int16 **)((char *)this + 24);
  v8 = (void *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v8);
    SetLastError(LastError);
  }
  *v7 = 0LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v11 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a2, v10, v18, v7);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *((_QWORD *)this + 87) = a3;
    *((_DWORD *)this + 4) = ++CApplication::s_lastAppToken;
    v14 = *a2;
    v15 = v14 != 0;
    *((_DWORD *)this + 163) = v15;
    *((_DWORD *)this + 162) = v15;
    if ( !v14 )
    {
      *((_DWORD *)this + 52) = 1;
      *((_DWORD *)this + 54) = 2;
      *((_DWORD *)this + 81) = 2;
      *((_DWORD *)this + 82) = 2;
    }
    v16 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
            ThreadPool,
            CApplication::SoundLevelChangeCompletionCallback,
            this);
    *((_QWORD *)this + 33) = v16;
    if ( v16 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xDA,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
}

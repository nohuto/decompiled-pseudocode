/*
 * XREFs of ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x180029618
 * Callers:
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x18002BCAC (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800103FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015960 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800241D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplication::RuntimeClassInitialize(
        CApplication *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  unsigned __int16 **v4; // rdi
  __int64 v8; // rdx
  SIZE_T v9; // rcx
  unsigned __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v14; // eax
  int v15; // ecx
  BOOL v16; // eax
  __int64 v17; // rax
  const char *v18; // r9
  __int64 v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (unsigned __int16 **)((char *)this + 24);
  *((_DWORD *)this + 53) = a4;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v11 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a2, v10, v19, v4);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = CApplication::s_lastAppToken + 1;
    *((_QWORD *)this + 87) = a3;
    *((_DWORD *)this + 4) = v14;
    v15 = *a2;
    CApplication::s_lastAppToken = v14;
    v16 = v15 != 0;
    *((_DWORD *)this + 163) = v16;
    *((_DWORD *)this + 162) = v16;
    if ( !v15 )
    {
      *((_DWORD *)this + 52) = 1;
      *((_DWORD *)this + 54) = 2;
      *((_DWORD *)this + 81) = 2;
      *((_DWORD *)this + 82) = 2;
    }
    v17 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
            ThreadPool,
            CApplication::SoundLevelChangeCompletionCallback,
            this);
    *((_QWORD *)this + 33) = v17;
    if ( v17 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xDA,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
}

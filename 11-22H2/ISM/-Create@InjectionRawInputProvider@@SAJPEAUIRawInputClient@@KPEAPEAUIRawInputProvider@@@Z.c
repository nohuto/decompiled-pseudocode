/*
 * XREFs of ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800F6EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800F6A48 (--0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F6B94 (--1-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Initialize@InjectionRawInputProvider@@AEAAJXZ @ 0x1800F7220 (-Initialize@InjectionRawInputProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InjectionRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  InjectionRawInputProvider *v6; // rax
  InjectionRawInputProvider *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  InjectionRawInputProvider *v13; // [rsp+58h] [rbp+20h] BYREF

  if ( InjectionRawInputProvider::s_rawInputProvider )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v13 = 0LL;
  if ( !a1 || !a3 )
  {
    v8 = -2147024809;
    v9 = 39LL;
    goto LABEL_14;
  }
  v6 = (InjectionRawInputProvider *)RefCountedObject::operator new(0xA8uLL);
  if ( v6 )
    v7 = InjectionRawInputProvider::InjectionRawInputProvider(v6, a1);
  else
    v7 = 0LL;
  v13 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    v9 = 43LL;
LABEL_14:
    v11 = v8;
    goto LABEL_15;
  }
  v10 = InjectionRawInputProvider::Initialize(v7);
  v8 = v10;
  if ( v10 >= 0 )
  {
    InjectionRawInputProvider::s_rawInputProvider = v7;
    *a3 = v7;
    return 0LL;
  }
  v11 = (unsigned int)v10;
  v9 = 45LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
    (const char *)v11);
  Microsoft::WRL::ComPtr<KernelContextProvider>::~ComPtr<KernelContextProvider>((__int64 *)&v13);
  return v8;
}

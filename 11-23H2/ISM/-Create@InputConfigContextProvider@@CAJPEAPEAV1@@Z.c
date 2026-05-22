/*
 * XREFs of ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18003B678
 * Callers:
 *     wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180051ECC (wil--init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InputConfigContextProvider@@AEAA@XZ @ 0x18003A498 (--0InputConfigContextProvider@@AEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@InputConfigContextProvider@@AEAAJXZ @ 0x180045E04 (-Initialize@InputConfigContextProvider@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18005570C (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputConfigContextProvider::Create(struct InputConfigContextProvider **a1)
{
  InputConfigContextProvider *v2; // rax
  InputConfigContextProvider *v3; // rbx
  InputConfigContextProvider *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  InputConfigContextProvider *v9; // [rsp+30h] [rbp+8h] BYREF
  InputConfigContextProvider *v10; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v9 = 0LL;
  v2 = (InputConfigContextProvider *)RefCountedObject::operator new(0x118uLL);
  v3 = v2;
  v10 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x118uLL);
    v4 = InputConfigContextProvider::InputConfigContextProvider(v3);
  }
  else
  {
    v4 = 0LL;
  }
  v9 = v4;
  v5 = InputConfigContextProvider::Initialize(v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>(&v9);
    return v6;
  }
  else
  {
    *a1 = v4;
    return 0LL;
  }
}

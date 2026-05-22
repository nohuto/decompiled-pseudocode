/*
 * XREFs of ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800CE860
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800CE41C (--0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@InjectionRawInputProvider@@AEAAJXZ @ 0x1800CEBEC (-Initialize@InjectionRawInputProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InjectionRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  InjectionRawInputProvider *v6; // rbx
  InjectionRawInputProvider *v7; // rax
  InjectionRawInputProvider *v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( InjectionRawInputProvider::s_rawInputProvider )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v6 = 0LL;
  if ( !a1 || !a3 )
  {
    v9 = -2147024809;
    v10 = 39LL;
    goto LABEL_14;
  }
  v7 = (InjectionRawInputProvider *)RefCountedObject::operator new(0xA8uLL);
  if ( v7 )
    v8 = InjectionRawInputProvider::InjectionRawInputProvider(v7, a1);
  else
    v8 = 0LL;
  v6 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 43LL;
LABEL_14:
    v12 = v9;
    goto LABEL_15;
  }
  v11 = InjectionRawInputProvider::Initialize(v8);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v10 = 45LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)v12);
    goto LABEL_16;
  }
  InjectionRawInputProvider::s_rawInputProvider = v8;
  v6 = 0LL;
  *a3 = v8;
  v9 = 0;
LABEL_16:
  if ( v6 )
    RefCountedObject::Release((InjectionRawInputProvider *)((char *)v6 + 8));
  return v9;
}

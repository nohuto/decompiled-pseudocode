/*
 * XREFs of ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x180040FF8
 * Callers:
 *     wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180040F64 (wil--init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 * Callees:
 *     ??0InputConfigContextProvider@@AEAA@XZ @ 0x18003B268 (--0InputConfigContextProvider@@AEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@InputConfigContextProvider@@AEAAJXZ @ 0x180041088 (-Initialize@InputConfigContextProvider@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputConfigContextProvider::Create(struct InputConfigContextProvider **a1)
{
  InputConfigContextProvider *v2; // rax
  InputConfigContextProvider *v3; // rbx
  InputConfigContextProvider *v4; // rsi
  InputConfigContextProvider *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = (InputConfigContextProvider *)RefCountedObject::operator new(0x118uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x118uLL);
    v4 = InputConfigContextProvider::InputConfigContextProvider(v3);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = v4;
  v6 = InputConfigContextProvider::Initialize(v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v6,
      v9);
  }
  else
  {
    v5 = 0LL;
    *a1 = v4;
    v7 = 0;
  }
  if ( v5 )
    RefCountedObject::Release((InputConfigContextProvider *)((char *)v5 + 8));
  return v7;
}

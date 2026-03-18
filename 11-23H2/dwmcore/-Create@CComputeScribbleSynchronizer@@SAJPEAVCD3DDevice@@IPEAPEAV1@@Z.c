/*
 * XREFs of ?Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180209D04
 * Callers:
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x180204AE4 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCComputeScribbleSynchronizer@@U?$default_delete@VCComputeScribbleSynchronizer@@@std@@@std@@QEAA@XZ @ 0x180204398 (--1-$unique_ptr@VCComputeScribbleSynchronizer@@U-$default_delete@VCComputeScribbleSynchronizer@@.c)
 *     ?Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z @ 0x180209EDC (-Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CComputeScribbleSynchronizer::Create(
        struct CD3DDevice *a1,
        int a2,
        struct CComputeScribbleSynchronizer **a3)
{
  _QWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CComputeScribbleSynchronizer *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = operator new(0x38uLL);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[5] = 0LL;
    *((_DWORD *)v6 + 12) = a2;
  }
  else
  {
    v6 = 0LL;
  }
  v11 = (CComputeScribbleSynchronizer *)v6;
  v7 = CComputeScribbleSynchronizer::Initialize((CComputeScribbleSynchronizer *)v6, a1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a3 = (struct CComputeScribbleSynchronizer *)v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
      (const char *)(unsigned int)v7);
    std::unique_ptr<CComputeScribbleSynchronizer>::~unique_ptr<CComputeScribbleSynchronizer>(&v11);
    return v8;
  }
}

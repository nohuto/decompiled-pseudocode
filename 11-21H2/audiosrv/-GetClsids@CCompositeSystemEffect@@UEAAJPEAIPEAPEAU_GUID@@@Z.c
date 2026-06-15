/*
 * XREFs of ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x180009E10
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetClsids(const void **this, unsigned int *a2, struct _GUID **a3)
{
  struct _GUID *v3; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  bool v9; // zf
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  struct _GUID *v12; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  *a2 = 0;
  *a3 = 0LL;
  v7 = *((int *)this + 18);
  if ( (int)v7 <= 0 )
    return 0LL;
  v8 = *((int *)this + 18);
  v9 = v7 == 1;
  v10 = -1LL;
  if ( !v9 )
    v10 = 0xFFFFFFFFFFFFFFFFuLL / v8;
  if ( v10 >= 0x10 )
  {
    v11 = 16 * v8;
    if ( v11 <= 0x7FFFFFFF )
    {
      v12 = (struct _GUID *)CoTaskMemAlloc((unsigned int)v11);
      v3 = v12;
      if ( v12 )
      {
        memcpy_0(v12, this[8], 16LL * *((int *)this + 18));
        *a3 = v3;
        *a2 = *((_DWORD *)this + 18);
        CoTaskMemFree(0LL);
        return 0LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D8,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v14);
  CoTaskMemFree(v3);
  return 2147942414LL;
}

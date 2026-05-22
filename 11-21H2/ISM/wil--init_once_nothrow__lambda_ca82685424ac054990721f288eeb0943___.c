/*
 * XREFs of wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x18019D9F4
 * Callers:
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x18019DDC4 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x18003CDB8 (--0SystemContextProvider@@IEAA@XZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  const char *v4; // r9
  void *v6; // rax
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF

  fPending = 0;
  if ( a3 )
    *a3 = 0;
  if ( !__std_init_once_begin_initialize(&stru_180243760, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x243, (unsigned int)"wil", v4);
  if ( fPending )
  {
    qword_180242DD8 = 0LL;
    v6 = RefCountedObject::operator new(0x98uLL);
    v7 = (__int64)v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x98uLL);
      SystemContextProvider::SystemContextProvider((SystemContextProvider *)v7);
      *(_QWORD *)v7 = &VirtualTouchpadContextProvider::`vftable'{for `ISystemContextProvider'};
      *(_QWORD *)(v7 + 8) = &VirtualTouchpadContextProvider::`vftable'{for `RefCountedObject'};
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 88), 0, 0);
      *(_QWORD *)(v7 + 128) = 0LL;
      *(_QWORD *)(v7 + 136) = 0LL;
      *(_QWORD *)(v7 + 144) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    qword_180242DD8 = v7;
    if ( a3 )
      *a3 = 1;
    InitOnceComplete(&stru_180243760, 0, 0LL);
  }
  return 0LL;
}

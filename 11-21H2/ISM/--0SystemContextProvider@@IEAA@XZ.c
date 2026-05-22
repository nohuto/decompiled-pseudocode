/*
 * XREFs of ??0SystemContextProvider@@IEAA@XZ @ 0x18003CDB8
 * Callers:
 *     ??0InputConfigContextProvider@@AEAA@XZ @ 0x18003B268 (--0InputConfigContextProvider@@AEAA@XZ.c)
 *     ?Create@KernelContextProvider@@CAJPEAPEAV1@@Z @ 0x18003B414 (-Create@KernelContextProvider@@CAJPEAPEAV1@@Z.c)
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x18019D9F4 (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 *     ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x18019E8E0 (-Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
SystemContextProvider *__fastcall SystemContextProvider::SystemContextProvider(SystemContextProvider *this)
{
  char *v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v9; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  v2 = (char *)this + 24;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  v4 = v3;
  v5 = *((__int64 *)v2 + 4) >> 3;
  if ( v5 >= 0x10 )
  {
    v9 = (unsigned __int64)(*((_QWORD *)v2 + 4) + 7LL) >> 3;
    if ( v9 )
      memset64(0LL, (unsigned __int64)v3, v9);
  }
  else
  {
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
    if ( v5 )
      std::_Deallocate<16,0>(*((void **)v2 + 3), 8 * v5);
    *((_QWORD *)v2 + 3) = v6;
    v7 = v6 + 16;
    *((_QWORD *)v2 + 4) = v6 + 16;
    *((_QWORD *)v2 + 5) = v6 + 16;
    while ( v6 != v7 )
      *v6++ = v4;
  }
  return this;
}

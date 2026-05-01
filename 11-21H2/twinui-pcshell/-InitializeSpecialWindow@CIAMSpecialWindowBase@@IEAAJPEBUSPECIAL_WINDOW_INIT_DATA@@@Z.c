/*
 * XREFs of ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18015857C
 * Callers:
 *     ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x1800D3FF0 (--$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Micros.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x180158470 (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIAMSpecialWindowBase::InitializeSpecialWindow(
        CIAMSpecialWindowBase *this,
        const struct SPECIAL_WINDOW_INIT_DATA *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 WindowInBand; // rax
  WNDCLASSEXW v9; // [rsp+70h] [rbp-58h] BYREF

  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 4);
  v4 = *((_QWORD *)a2 + 1);
  v5 = *((_QWORD *)this + 4);
  v6 = 0;
  if ( v5 != v4 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)a2 + 1));
      v5 = *((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v9.cbSize = 80;
  memset_0(&v9.style, 0, 0x4CuLL);
  v9.style = 512;
  v9.lpfnWndProc = (WNDPROC)CIAMSpecialWindowBase::s_SpecialMsgWndProc;
  v9.hInstance = &_ImageBase;
  v9.lpszClassName = *(LPCWSTR *)a2;
  v9.cbWndExtra = 8;
  RegisterClassExW(&v9);
  WindowInBand = CreateWindowInBand(
                   136314880LL,
                   v9.lpszClassName,
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   this,
                   *((_DWORD *)a2 + 4));
  *((_QWORD *)this + 2) = WindowInBand;
  if ( !WindowInBand )
    return (unsigned int)ResultFromKnownLastError();
  return v6;
}

/*
 * XREFs of ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x1800D9C60
 * Callers:
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800D9B30 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800D9768 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800D9DB4 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 */

__int64 __fastcall HidLampMultiUpdateReportBuilder::Initialize(
        RefCountedObject **this,
        struct HidLampArrayDevice *a2,
        int a3)
{
  unsigned __int64 v4; // rbx
  size_t v5; // rax
  RefCountedObject *v6; // rax
  RefCountedObject *v7; // rcx
  __int64 v8; // rdx
  RefCountedObject *v10; // rax
  RefCountedObject *v11; // rcx
  RefCountedObject *v12; // rax
  RefCountedObject *v13; // rcx
  RefCountedObject *v14; // rax
  RefCountedObject *v15; // rcx
  RefCountedObject *v16; // rax
  RefCountedObject *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(this + 9, (volatile signed __int32 *)a2);
  *((_DWORD *)this + 4) = v4;
  v5 = 4 * v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v5 = -1LL;
  v6 = (RefCountedObject *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v7 = this[4];
  this[4] = v6;
  if ( v7 )
  {
    operator delete[](v7);
    v6 = this[4];
  }
  if ( !v6 )
  {
    v8 = 44LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v10 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v11 = this[5];
  this[5] = v10;
  if ( v11 )
  {
    operator delete[](v11);
    v10 = this[5];
  }
  if ( !v10 )
  {
    v8 = 47LL;
    goto LABEL_7;
  }
  v12 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v13 = this[6];
  this[6] = v12;
  if ( v13 )
  {
    operator delete[](v13);
    v12 = this[6];
  }
  if ( !v12 )
  {
    v8 = 50LL;
    goto LABEL_7;
  }
  v14 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v15 = this[7];
  this[7] = v14;
  if ( v15 )
  {
    operator delete[](v15);
    v14 = this[7];
  }
  if ( !v14 )
  {
    v8 = 53LL;
    goto LABEL_7;
  }
  v16 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v17 = this[8];
  this[8] = v16;
  if ( v17 )
  {
    operator delete[](v17);
    v16 = this[8];
  }
  if ( !v16 )
  {
    v8 = 56LL;
    goto LABEL_7;
  }
  HidLampMultiUpdateReportBuilder::Reset((HidLampMultiUpdateReportBuilder *)this);
  return 0LL;
}

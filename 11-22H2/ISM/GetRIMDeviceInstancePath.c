/*
 * XREFs of GetRIMDeviceInstancePath @ 0x1800F4948
 * Callers:
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800F4C2C (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetRIMDeviceInstancePath(__int64 a1, __int64 a2, HSTRING *a3)
{
  int v6; // eax
  int v8; // ebx
  size_t v9; // rax
  void *v10; // rax
  WCHAR *v11; // rdi
  unsigned int String; // ebx
  int v13; // eax
  int v14[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v18; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v14[0] = 4;
  v6 = RIMGetDeviceProperties(a1, a2, v14);
  if ( v6 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x28,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             (const char *)(unsigned int)v6);
  v8 = v14[2];
  v9 = 2LL * (unsigned int)v14[2];
  if ( !is_mul_ok((unsigned int)v14[2], 2uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v10;
  v11 = (WCHAR *)v10;
  if ( v10 )
  {
    *(_QWORD *)&v15 = v10;
    v13 = RIMGetDeviceProperties(a1, a2, v14);
    if ( v13 >= 0 )
    {
      String = WindowsCreateString(v11, v8 - 1, a3);
      operator delete[](v11);
      return String;
    }
    String = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x30,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
               (const char *)(unsigned int)v13);
  }
  else
  {
    String = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x8007000ELL);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v18);
  return String;
}

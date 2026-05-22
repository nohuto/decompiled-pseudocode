/*
 * XREFs of ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800E9440
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A8D0C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800E7FB4 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800ECBF4 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController2::EnsureServiceAndRegisterClient(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoSystemCursorControllerClientProxy *a3)
{
  struct BamoSystemCursorControllerClientProxy *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  std::_Ref_count_base *v11; // rcx
  SystemCursorService2 *v12; // rax
  std::_Ref_count_base *v13; // rax
  int v14; // eax
  SystemCursorService2 *v16; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v17; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct SystemCursorController2 *v19; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v6 = (struct BamoSystemCursorControllerClientProxy *)*((_QWORD *)this + 8);
    if ( v6 != a3 )
    {
      if ( a3 )
      {
        (**(void (__fastcall ***)(struct BamoSystemCursorControllerClientProxy *))a3)(a3);
        v6 = (struct BamoSystemCursorControllerClientProxy *)*((_QWORD *)this + 8);
      }
      *((_QWORD *)this + 8) = a3;
      if ( v6 )
        (*(void (__fastcall **)(struct BamoSystemCursorControllerClientProxy *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    v7 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 32);
    *((_DWORD *)this + 18) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL)
                                                                           + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                                       + 36);
    v8 = *((_QWORD *)this + 10);
    if ( v8 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, v7);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          43LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v14,
          (int)v16);
    }
    else
    {
      v19 = this;
      std::make_shared<SystemCursorService2,SystemCursorController2 *>(&v16, &v19);
      v9 = SystemCursorService2::Initialize(v16, v7);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          35LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v9,
          (int)v16);
      v11 = v17;
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
        v11 = v17;
      }
      v12 = v16;
      if ( v16 )
        v12 = (SystemCursorService2 *)((char *)v16 + 8);
      *((_QWORD *)this + 10) = v12;
      v13 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v11;
      if ( v13 )
      {
        std::_Ref_count_base::_Decref(v13);
        v11 = v17;
      }
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      v10);
  }
  return 0LL;
}

/*
 * XREFs of ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x180100E20
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x180102220 (-EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800C05B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0SystemCursorService2@@QEAA@PEAVSystemCursorController2@@@Z @ 0x180104094 (--0SystemCursorService2@@QEAA@PEAVSystemCursorController2@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<SystemCursorService2,SystemCursorController2 *>(
        _QWORD *a1,
        struct SystemCursorController2 **a2)
{
  char *v4; // rsi
  char *v5; // rdi
  std::_Ref_count_base **v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  std::_Ref_count_base *v9; // rax
  std::_Ref_count_base *v10; // rdx

  v4 = (char *)operator new(0x120uLL);
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<SystemCursorService2>::`vftable';
  v5 = v4 + 16;
  SystemCursorService2::SystemCursorService2((SystemCursorService2 *)(v4 + 16), *a2);
  *a1 = v4 + 16;
  a1[1] = v4;
  if ( v4 != (char *)-16LL )
  {
    v6 = (std::_Ref_count_base **)(v4 + 56);
    v7 = *((_QWORD *)v4 + 7);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      v8 = (volatile signed __int32 *)a1[1];
      if ( v8 )
      {
        v9 = (std::_Ref_count_base *)a1[1];
        _InterlockedIncrement(v8 + 3);
      }
      else
      {
        v9 = 0LL;
        v5 = 0LL;
      }
      *((_QWORD *)v4 + 6) = v5;
      v10 = *v6;
      *v6 = v9;
      if ( v10 )
        std::_Ref_count_base::_Decwref(v10);
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    }
  }
  return a1;
}

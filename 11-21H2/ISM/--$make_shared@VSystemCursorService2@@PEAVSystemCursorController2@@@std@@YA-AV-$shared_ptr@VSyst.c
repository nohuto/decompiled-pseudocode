/*
 * XREFs of ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800E7FB4
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800E9440 (-EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800A88B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0SystemCursorService2@@QEAA@PEAVSystemCursorController2@@@Z @ 0x1800EB448 (--0SystemCursorService2@@QEAA@PEAVSystemCursorController2@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<SystemCursorService2,SystemCursorController2 *>(
        _QWORD *a1,
        struct SystemCursorController2 **a2)
{
  char *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rdx

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
    v6 = *((_QWORD *)v4 + 7);
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      v7 = (volatile signed __int32 *)a1[1];
      if ( v7 )
      {
        v8 = a1[1];
        _InterlockedIncrement(v7 + 3);
      }
      else
      {
        v8 = 0LL;
        v5 = 0LL;
      }
      *((_QWORD *)v4 + 6) = v5;
      v9 = (std::_Ref_count_base *)*((_QWORD *)v4 + 7);
      *((_QWORD *)v4 + 7) = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v7 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
    }
  }
  return a1;
}

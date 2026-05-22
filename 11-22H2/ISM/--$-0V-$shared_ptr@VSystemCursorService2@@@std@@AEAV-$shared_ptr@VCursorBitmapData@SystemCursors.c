/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@?$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@Z @ 0x180111DD0
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1801139D0 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800DDDB4 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<SystemCursorShapeBitmap2>::_Ref_count_obj2<SystemCursorShapeBitmap2>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // r10d
  __int64 *v6; // r9
  __int64 v7; // r8
  _QWORD *v8; // rdi
  __int64 v9; // rax
  std::_Ref_count_base *v10; // r8
  std::_Ref_count_base *v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SystemCursorShapeBitmap2>::`vftable';
  v4 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v13, a3);
  v7 = v6[1];
  v8 = v4;
  v9 = *v6;
  *v6 = 0LL;
  v6[1] = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v7;
    _InterlockedAdd((volatile signed __int32 *)(v7 + 12), v5);
  }
  std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>((_QWORD *)(a1 + 32), v8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v11 = (std::_Ref_count_base *)v8[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a1;
}

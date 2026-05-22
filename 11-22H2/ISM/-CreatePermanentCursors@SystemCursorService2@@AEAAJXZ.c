/*
 * XREFs of ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x180113E14
 * Callers:
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1801143A4 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180068258 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800CE84C (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800DDDB4 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@?$_Ref_count_obj2@VSystemCursor2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@$$QEAPEAUCursorDeviceInfo@@@Z @ 0x180111EE0 (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@-$_Ref_count_obj2@VSystem.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801125C8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x180113CA0 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemCursorService2::CreatePermanentCursors(SystemCursorService2 *this)
{
  _QWORD *v2; // rbx
  volatile signed __int32 *v3; // rbx
  SystemCursor2 *v4; // rdi
  int CursorVisual; // eax
  unsigned int v6; // esi
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rax
  std::_Ref_count_base *v13; // rcx
  __int64 *v14; // [rsp+20h] [rbp-39h] BYREF
  __int128 v15; // [rsp+28h] [rbp-31h]
  __int64 v16; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-1h]
  __int64 v20; // [rsp+60h] [rbp+7h] BYREF
  std::_Ref_count_base *v21; // [rsp+68h] [rbp+Fh]
  _BYTE v22[16]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v23; // [rsp+80h] [rbp+27h] BYREF
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v16 = 1LL;
  v24 = 0;
  v23 = 1LL;
  v25 = 100;
  v14 = &v23;
  v2 = (_QWORD *)std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)this + 32, &v18);
  *(_QWORD *)&v15 = operator new(0xD8uLL);
  v3 = (volatile signed __int32 *)std::_Ref_count_obj2<SystemCursor2>::_Ref_count_obj2<SystemCursor2>(
                                    v15,
                                    v2,
                                    (__int64 *)&v14);
  v4 = (SystemCursor2 *)(v3 + 4);
  v17[0] = v3 + 4;
  v17[1] = v3;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  CursorVisual = SystemCursor2::CreateCursorVisual(v4);
  v6 = CursorVisual;
  if ( CursorVisual >= 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
      (float *)this + 14,
      (__int64)v22,
      (unsigned __int8 *)&v16);
    v8 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v20, v17);
    v9 = *v8;
    *v8 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 24) = v9;
    v11 = v8[1];
    v8[1] = *(_QWORD *)(v10 + 32);
    *(_QWORD *)(v10 + 32) = v11;
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    v15 = 0LL;
    if ( v3 )
    {
      v12 = v3;
      _InterlockedIncrement(v3 + 3);
    }
    else
    {
      v12 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
      v4 = (SystemCursor2 *)v15;
    }
    *((_QWORD *)this + 32) = v4;
    v13 = (std::_Ref_count_base *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = v12;
    if ( v13 )
      std::_Ref_count_base::_Decwref(v13);
    if ( v3 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)CursorVisual);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)v6);
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)v17);
    return v6;
  }
}

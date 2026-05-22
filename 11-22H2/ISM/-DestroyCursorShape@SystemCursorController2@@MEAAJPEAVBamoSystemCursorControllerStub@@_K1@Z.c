/*
 * XREFs of ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x180110840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073E1C (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800B692C (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D101C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800DDDB4 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010F6CC (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x180111068 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x18011195C (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x180112858 (--$count@X@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@.c)
 *     ?RemoveShape@SystemCursor2@@QEAAX_K@Z @ 0x180114BCC (-RemoveShape@SystemCursor2@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController2::DestroyCursorShape(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v8; // r8
  bool v9; // dl
  char v10; // cl
  __int64 *v11; // rax
  float *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rax
  const char *v16; // r9
  __int64 result; // rax
  int v18[2]; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-50h]
  SystemCursor2 *v20[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v22; // [rsp+48h] [rbp-30h]
  _BYTE v23[40]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  if ( !*((_QWORD *)this + 10) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      (const char *)0x8000FFFFLL,
      v18[0]);
  try
  {
    v25 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 6) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL))
                    + 36);
    v8 = *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 6) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL))
                         + 32);
    if ( !HIBYTE(a4) || (v9 = 0, v10 = 1, HIBYTE(a4) == 1) )
    {
      v10 = 0;
      v9 = HIBYTE(a4) == 0;
    }
    if ( v10 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        232LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)0x80070057LL,
        v18[0]);
    *(_OWORD *)v20 = 0LL;
    if ( v9 )
    {
      if ( v25 != *((_DWORD *)this + 18) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          242LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x80070005LL,
          v18[0]);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 96LL))(
              *((_QWORD *)this + 10),
              a3,
              v8) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          244LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x80070057LL,
          v18[0]);
      v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**((_QWORD **)this + 10) + 104LL))(
                         *((_QWORD *)this + 10),
                         &v21,
                         a3);
      std::shared_ptr<SystemCursor2>::operator=(v20, v11);
    }
    else
    {
      if ( *(_DWORD *)((char *)&v26 + 2) != (_DWORD)v8 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          252LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x80070005LL,
          v18[0]);
      if ( !SystemCursorController2::IsApplicationPeer(this, v25) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          255LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x8000FFFFLL,
          v18[0]);
      v12 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 80LL))(*((_QWORD *)this + 10));
      v13 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
              v12,
              (__int64)v23,
              (unsigned __int8 *)&v25);
      std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
        &v21,
        (_QWORD *)(*(_QWORD *)v13 + 24LL));
      *(_QWORD *)v18 = a4;
      v14 = v21;
      if ( std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count<void>(
             v21 + 16,
             v18) )
      {
        std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
          (_QWORD *)(v14 + 16),
          (const unsigned __int8 *)v18);
      }
      v15 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 10) + 88LL))(
                         *((_QWORD *)this + 10),
                         v18);
      std::shared_ptr<SystemCursor2>::operator=(v20, v15);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( !SystemCursor2::ShapeExists(v20[0], a4) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        264LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)0x80070057LL,
        v18[0]);
    SystemCursor2::RemoveShape(v20[0], a4);
    if ( v20[1] )
      std::_Ref_count_base::_Decref(v20[1]);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x10F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      v16);
    return 0LL;
  }
  return result;
}

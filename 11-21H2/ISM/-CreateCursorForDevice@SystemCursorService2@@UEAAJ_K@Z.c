/*
 * XREFs of ?CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z @ 0x1800EC170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800EAF2C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x1800EBD3C (-AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ.c)
 *     ?CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z @ 0x1800EC0EC (-CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z.c)
 */

__int64 __fastcall SystemCursorService2::CreateCursorForDevice(SystemCursorService2 *this, unsigned __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(SystemCursorService2 *))(*(_QWORD *)this + 96LL))(this) )
  {
    v3 = -2147024809;
    v4 = 75LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)this + 12,
         (__int64)v8,
         (unsigned __int8 *)&v10);
  v3 = SystemCursor2::AttachCursorVisualToShellRoot(*(SystemCursor2 **)(*(_QWORD *)v6 + 24LL));
  if ( v3 < 0 )
  {
    v4 = 81LL;
    goto LABEL_3;
  }
  v7 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)this + 12,
         (__int64)v8,
         (unsigned __int8 *)&v10);
  InputTraceLogging::Cursor::CreateCursorForDevice(v10, *(const void **)(*(_QWORD *)v7 + 24LL));
  return 0LL;
}

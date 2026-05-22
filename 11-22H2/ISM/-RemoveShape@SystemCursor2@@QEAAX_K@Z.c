/*
 * XREFs of ?RemoveShape@SystemCursor2@@QEAAX_K@Z @ 0x180114BCC
 * Callers:
 *     ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x180110840 (-DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z.c)
 *     ?Cleanup@CustomCursorApplication2@@QEAAXXZ @ 0x1801137A0 (-Cleanup@CustomCursorApplication2@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x18011195C (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x180115464 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursorShape2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1801159A4 (-erase@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursorShape2@@@std@@V-$_Uhash_compare@_KU-.c)
 */

void __fastcall SystemCursor2::RemoveShape(SystemCursor2 *this, __int64 a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !SystemCursor2::ShapeExists(this, a2) )
    return;
  if ( *((_QWORD *)this + 5) == a2 )
  {
    v4 = 32512LL;
    if ( SystemCursor2::ShapeExists(this, 32512LL) )
      goto LABEL_7;
    v5 = (_QWORD *)*((_QWORD *)this + 12);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 && v6[2] )
    {
      v4 = v6[2];
LABEL_7:
      v7 = SystemCursor2::SetShape(this, v4, 0);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x205,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)(unsigned int)v7);
      goto LABEL_10;
    }
    *((_QWORD *)this + 5) = 32512LL;
  }
LABEL_10:
  if ( *((_QWORD *)this + 6) == a2 )
    *((_QWORD *)this + 6) = *((_QWORD *)this + 5);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>,0>>::erase(
    (char *)this + 88,
    &v9);
}

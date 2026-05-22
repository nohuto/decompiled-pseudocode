/*
 * XREFs of ?OnInserted@TouchpadRectListProxy@@MEAAJI@Z @ 0x180158E20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x1801588E8 (--$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoCon.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801C98E0 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9970 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 */

__int64 __fastcall TouchpadRectListProxy::OnInserted(TouchpadRectListProxy *this, unsigned int a2)
{
  VirtualTouchpadContextProvider *Instance; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  const struct VirtualTouchpadRect *Struct; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = VirtualTouchpadContextProvider::GetInstance();
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v5 + 8) <= 0 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)(v5 + 16);
  Struct = (const struct VirtualTouchpadRect *)Microsoft::Bamo::GetStructAt<VirtualTouchpadRect>(
                                                 v6,
                                                 (_QWORD *)this + 6,
                                                 a2);
  v8 = VirtualTouchpadContextProvider::OnTouchpadAdded(Instance, Struct);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\endpoint\\touchpadrectlistproxy.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}

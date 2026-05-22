/*
 * XREFs of ?OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180159010
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x1801588E8 (--$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoCon.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801C98E0 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9C7C (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 */

__int64 __fastcall TouchpadRectListProxy::OnReplaced(
        TouchpadRectListProxy *this,
        unsigned int a2,
        const struct VirtualTouchpadRect *a3)
{
  VirtualTouchpadContextProvider *Instance; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  const struct VirtualTouchpadRect *Struct; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = VirtualTouchpadContextProvider::GetInstance();
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v6 + 8) <= 0 )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(v6 + 16);
  Struct = (const struct VirtualTouchpadRect *)Microsoft::Bamo::GetStructAt<VirtualTouchpadRect>(
                                                 v7,
                                                 (_QWORD *)this + 6,
                                                 a2);
  v9 = VirtualTouchpadContextProvider::OnTouchpadUpdated(Instance, Struct);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\endpoint\\touchpadrectlistproxy.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}

/*
 * XREFs of ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180037630
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180037460 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___ @ 0x180100FB4 (wil--details--lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___--_lambda_call__lambda_4014.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x180101028 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetIgnoreClipForHitTest(CVisual *this, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  bool v5; // al
  int v6; // eax
  bool v8; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 != ((*((_BYTE *)this + 92) & 0x40) != 0) )
  {
    LOBYTE(a3) = (a2 << 6) | *((_BYTE *)this + 92) & 0xBF;
    *((_BYTE *)this + 92) = a3;
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      v5 = (a3 & 0x40) != 0;
      LOBYTE(a3) = (a3 & 0x20) != 0;
      v8 = v5;
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, bool))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 16LL)
                                                                            + 416LL))(
             *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL),
             *(unsigned int *)(*(_QWORD *)(v4 + 16) + 24LL),
             a3,
             0LL,
             v8);
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x4B9u);
    }
  }
  return v3;
}

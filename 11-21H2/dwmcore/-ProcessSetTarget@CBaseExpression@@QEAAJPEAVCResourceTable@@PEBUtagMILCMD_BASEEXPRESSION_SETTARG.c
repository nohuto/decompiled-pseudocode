/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x180049E40
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180049EFC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1802289B0 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  const struct tagMILCMD_BASEEXPRESSION_SETTARGET *v3; // r9
  struct CResource *ResourceWithoutType; // rdi
  unsigned int v5; // r8d
  CBaseExpression *v7; // r11
  char v8; // dl
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v13; // ecx
  char v14; // [rsp+30h] [rbp-18h]

  v3 = a3;
  ResourceWithoutType = 0LL;
  v5 = *((_DWORD *)a3 + 3);
  v7 = this;
  if ( v5 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5);
  *((_DWORD *)v7 + 52) = v5;
  *((_DWORD *)v7 + 53) = *((_DWORD *)v3 + 2);
  v8 = *((_BYTE *)v7 + 232) & 0xFB | (*((_BYTE *)v3 + 40) != 0 ? 4 : 0);
  *((_BYTE *)v7 + 232) = v8;
  if ( (v8 & 4) == 0 || CBaseExpression::GetAnimationLoggingManagerNoRef(v7) )
  {
    v14 = *((_BYTE *)v3 + 32);
    v9 = CBaseExpression::SetTarget(
           v7,
           *((unsigned int *)a2 + 12),
           ResourceWithoutType,
           *((unsigned int *)v3 + 4),
           *((_DWORD *)v3 + 9),
           *((unsigned __int16 *)v3 + 17),
           v14,
           *((_QWORD *)v3 + 3));
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x68u, 0LL);
    else
      return 0;
  }
  else
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x5Eu, 0LL);
  }
  return v11;
}

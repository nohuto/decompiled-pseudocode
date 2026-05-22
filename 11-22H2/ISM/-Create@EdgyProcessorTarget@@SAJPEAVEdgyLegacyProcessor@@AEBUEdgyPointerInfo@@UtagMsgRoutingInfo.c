/*
 * XREFs of ?Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1801D8A50
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801D5DD0 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0EdgyProcessorTarget@@IEAA@PEAVEdgyLegacyProcessor@@@Z @ 0x1801D8420 (--0EdgyProcessorTarget@@IEAA@PEAVEdgyLegacyProcessor@@@Z.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801D8B74 (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgyProcessorTarget::Create(
        struct EdgyLegacyProcessor *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        EdgyProcessorTarget **a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  EdgyProcessorTarget **v11; // rsi
  EdgyProcessorTarget *v12; // rax
  EdgyProcessorTarget *v13; // rdi
  unsigned __int64 v14; // r9
  int v15; // eax
  _OWORD v17[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  EdgyProcessorTarget *v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = 0LL;
  if ( !a1 )
  {
    v9 = -2147024809;
    v10 = 61LL;
LABEL_10:
    v14 = v9;
    goto LABEL_11;
  }
  v11 = a5;
  if ( !a5 )
  {
    v9 = -2147024809;
    v10 = 62LL;
    goto LABEL_10;
  }
  v12 = (EdgyProcessorTarget *)RefCountedObject::operator new(0xB8uLL);
  v20 = v12;
  if ( v12 )
    v13 = EdgyProcessorTarget::EdgyProcessorTarget(v12, a1);
  else
    v13 = 0LL;
  v20 = v13;
  if ( !v13 )
  {
    v9 = -2147024882;
    v10 = 65LL;
    goto LABEL_10;
  }
  v17[0] = *(_OWORD *)a3;
  v17[1] = *(_OWORD *)(a3 + 16);
  v18 = *(_QWORD *)(a3 + 32);
  v15 = ((__int64 (__fastcall *)(EdgyProcessorTarget *, __int64, _OWORD *, __int64))EdgyProcessorTarget::Initialize)(
          v13,
          a2,
          v17,
          a4);
  v9 = v15;
  if ( v15 >= 0 )
  {
    v20 = 0LL;
    *v11 = v13;
    v9 = 0;
    goto LABEL_15;
  }
  v14 = (unsigned int)v15;
  v10 = 67LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
    (const char *)v14);
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
  return v9;
}

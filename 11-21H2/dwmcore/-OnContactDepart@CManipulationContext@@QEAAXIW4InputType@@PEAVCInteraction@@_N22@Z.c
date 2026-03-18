/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1801830F0
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18017D688 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x18017C5A4 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801826E0 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180183CC4 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactDepart(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  _QWORD *v7; // rbx
  int Key; // eax
  _QWORD *v12; // rsi
  __int64 i; // rsi
  _QWORD *v14; // rsi
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v7 = (_QWORD *)a4;
  v15 = (_QWORD *)a4;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v15);
  if ( !v7 )
  {
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            a1 + 56,
            (int *)&v16);
    if ( Key == -1 )
    {
      v15 = 0LL;
      v12 = 0LL;
    }
    else
    {
      v15 = *(_QWORD **)(*(_QWORD *)(a1 + 64) + 8LL * Key);
      v7 = v15;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v15);
      v12 = v7;
    }
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v15);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
  }
  if ( a5 )
  {
    for ( i = (unsigned __int64)(v7 + 8) & -(__int64)(v7 != 0LL);
          i;
          i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, i) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)i + 56LL))(i, a3);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 56LL))(*(_QWORD *)(a1 + 136), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    a1 + 56,
    &v16);
  if ( !a5
    && (v14 = v7 + 8, (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(v7[8] + 216LL))(v7 + 8, 0LL))
    && (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v14 + 224LL))(v7 + 8, a2, 0LL) )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 232LL))(v7 + 8, a2);
  }
  else if ( a7 )
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, 0LL);
  CManipulationContext::CleanTreeState((__int64)v7, a1, *(RTL_SRWLOCK **)(a1 + 40), a6, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
}

/*
 * XREFs of wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___ @ 0x14005910C
 * Callers:
 *     _CPipeInstance::AddConnectionsAndActivateAPOs_::_1_::dtor$1 @ 0x140038B40 (_CPipeInstance--AddConnectionsAndActivateAPOs_--_1_--dtor$1.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x14002BD58 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14005A04C (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x14005D7D4 (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___(
        _QWORD **a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD ***Prev; // rax
  CConnectionInstance **Next; // rax
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v1 = (__int64)*a1;
    v2 = *a1[1];
    v6 = (*a1)[9];
    while ( v6 )
    {
      Prev = (_QWORD ***)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                           a1,
                           &v6);
      a1 = *Prev;
      v5 = **Prev;
      while ( v5 )
      {
        Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                         (__int64)a1,
                                         &v5);
        CConnectionInstance::RemoveConnections(*Next, *(struct IAudioProcessor **)(v1 + 152), v2);
      }
    }
  }
}

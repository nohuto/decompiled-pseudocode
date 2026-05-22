/*
 * XREFs of ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801B104C
 * Callers:
 *     ??$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@PEAU12@00@Z @ 0x1801B0A54 (--$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@Keyboar.c)
 *     ??$emplace@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@AEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x1801B0B04 (--$emplace@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardProcessor@@V-$a.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_7e8f1aeb274407a30328aba6a7927ecf___ @ 0x1801B0C8C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_KeyboardProcessor--Targ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B1008 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall KeyboardProcessor::TargetingInfo::operator=(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rax
  __int64 v4; // rcx
  _OWORD *v6; // r8
  __int128 v7; // xmm1
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_OWORD *)a1;
  v4 = 2LL;
  v6 = (_OWORD *)a2;
  do
  {
    *v3 = *v6;
    v3[1] = v6[1];
    v3[2] = v6[2];
    v3[3] = v6[3];
    v3[4] = v6[4];
    v3[5] = v6[5];
    v3[6] = v6[6];
    v3 += 8;
    v7 = v6[7];
    v6 += 8;
    *(v3 - 1) = v7;
    --v4;
  }
  while ( v4 );
  v8 = (__int64 *)(a2 + 368);
  *v3 = *v6;
  v3[1] = v6[1];
  v3[2] = v6[2];
  v3[3] = v6[3];
  v3[4] = v6[4];
  v3[5] = v6[5];
  v3[6] = v6[6];
  if ( &v12 != (__int64 *)(a2 + 368) )
  {
    v9 = *v8;
    *v8 = 0LL;
    v4 = v9;
  }
  v10 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = v4;
  v12 = v10;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(a1 + 376), (__int64 *)(a2 + 376));
  return a1;
}

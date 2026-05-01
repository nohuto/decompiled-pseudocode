/*
 * XREFs of ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x18049B684
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x18049D170 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f_ea_18049D170.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_761591aeddd72f295a970ac6e0cc3602___lambda_9b577220311cb778785b8f619b26c810___::OnStoryboardStatusChanged @ 0x1804C87A0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_761591aeddd72f295a970ac6e0_ea_1804C87A0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___::OnStoryboardStatusChanged @ 0x1804CA5D0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe0_ea_1804CA5D0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged @ 0x1804D8060 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864_ea_1804D8060.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___::OnStoryboardStatusChanged @ 0x1804DCFC0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_3f14cb8a0624f1150359153641_ea_1804DCFC0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::OnStoryboardStatusChanged @ 0x1804DE8A0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_34f025963987b113629715f071_ea_1804DE8A0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___::OnStoryboardStatusChanged @ 0x180532810 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f400_ea_180532810.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___::OnStoryboardStatusChanged @ 0x180532970 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036_ea_180532970.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___::OnStoryboardStatusChanged @ 0x180532AF0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3_ea_180532AF0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::OnStoryboardStatusChanged @ 0x1805385E0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_1805385E0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::OnStoryboardStatusChanged @ 0x180538760 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_180538760.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___::OnStoryboardStatusChanged @ 0x1805388E0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_1805388E0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___::OnStoryboardStatusChanged @ 0x180554830 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a3_ea_180554830.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_98180884_82b1_4114_831c_6f208f7718e7, a2);
}

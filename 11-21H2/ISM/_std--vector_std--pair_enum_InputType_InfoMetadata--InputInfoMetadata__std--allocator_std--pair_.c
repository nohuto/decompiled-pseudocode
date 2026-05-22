/*
 * XREFs of _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::catch$1 @ 0x1801A49F4
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801A4834 (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 */

void __fastcall __noreturn std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType___InfoMetadata::InputInfoMetadata____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 392LL * *(_QWORD *)(a2 + 120));
  throw;
}

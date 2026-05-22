/*
 * XREFs of memcmp_0 @ 0x1800A8120
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x18000633C (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@Co.c)
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@5@PEAE@Z @ 0x18002CCB0 (-Insert@-$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-$Defaul.c)
 *     ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C740 (-TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject.c)
 *     ?put_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@5@@Z @ 0x18005D1F0 (-put_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@5@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800666E8 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18009F220 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x18014AAA8 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}

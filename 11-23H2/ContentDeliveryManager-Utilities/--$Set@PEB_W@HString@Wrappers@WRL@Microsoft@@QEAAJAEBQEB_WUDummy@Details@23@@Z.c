/*
 * XREFs of ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x180097094
 * Callers:
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800972FC (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveTriggerName@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18009904C (-ResolveTriggerName@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(
        Microsoft::WRL::Wrappers::HString *a1,
        const wchar_t **a2)
{
  const wchar_t *v2; // rdx
  unsigned int v3; // r8d
  unsigned __int64 v4; // rax

  v2 = *a2;
  v3 = 0;
  if ( v2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    if ( v4 > 0xFFFFFFFF )
      return 2147942934LL;
    v3 = v4;
  }
  else
  {
    v2 = word_180106C64;
  }
  return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
}

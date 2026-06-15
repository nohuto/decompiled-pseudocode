/*
 * XREFs of ??$Construct@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIBuffer@Streams@Storage@Windows@@PEAU2345@@Z @ 0x14007CBE8
 * Callers:
 *     ??$?0PEAUIBuffer@Streams@Storage@Windows@@@?$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIBuffer@Streams@Storage@Windows@@PEAJ@Z @ 0x14007B9F8 (--$-0PEAUIBuffer@Streams@Storage@Windows@@@-$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U-$D.c)
 *     ?GetAt@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x140084150 (-GetAt@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Str.c)
 *     ?GetMany@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x1400856D0 (-GetMany@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@S.c)
 *     ?IndexOf@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAIPEAE@Z @ 0x140086E70 (-IndexOf@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@S.c)
 *     ?ReplaceAll@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x14008B640 (-ReplaceAll@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffe.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::Storage::Streams::IBuffer>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}

/*
 * XREFs of sub_14077572C @ 0x14077572C
 * Callers:
 *     sub_140253E78 @ 0x140253E78 (sub_140253E78.c)
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     IoTranslateBusAddress @ 0x1405604A0 (IoTranslateBusAddress.c)
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_1406E397C @ 0x1406E397C (sub_1406E397C.c)
 *     sub_140762AEC @ 0x140762AEC (sub_140762AEC.c)
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140773B10 @ 0x140773B10 (sub_140773B10.c)
 *     sub_140773B90 @ 0x140773B90 (sub_140773B90.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 *     sub_1407754E4 @ 0x1407754E4 (sub_1407754E4.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140808CB4 @ 0x140808CB4 (sub_140808CB4.c)
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     sub_140846760 @ 0x140846760 (sub_140846760.c)
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 *     sub_140943144 @ 0x140943144 (sub_140943144.c)
 *     sub_140946400 @ 0x140946400 (sub_140946400.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 *     sub_14094774C @ 0x14094774C (sub_14094774C.c)
 *     sub_140947C9C @ 0x140947C9C (sub_140947C9C.c)
 *     sub_140947D0C @ 0x140947D0C (sub_140947D0C.c)
 *     sub_14094F920 @ 0x14094F920 (sub_14094F920.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140959490 @ 0x140959490 (sub_140959490.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_14095A67C @ 0x14095A67C (sub_14095A67C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
 */

char __fastcall sub_14077572C(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG v8; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --*((_WORD *)CurrentThread + 242);
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&stru_140C461E0, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&stru_140C460C0, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&stru_140C461E0, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
    goto LABEL_2;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&stru_140C460C0);
      v8 = IsResourceAcquiredSharedLite;
      if ( IsResourceAcquiredSharedLite )
      {
        do
        {
          ExReleaseResourceLite(&stru_140C460C0);
          --v8;
        }
        while ( v8 );
        do
        {
          ExAcquireResourceExclusiveLite(&stru_140C460C0, 1u);
          --IsResourceAcquiredSharedLite;
        }
        while ( IsResourceAcquiredSharedLite );
      }
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&stru_140C461E0, 1u);
    ExAcquireResourceExclusiveLite(&stru_140C460C0, 1u);
  }
  return v2;
}

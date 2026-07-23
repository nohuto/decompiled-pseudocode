/*
 * XREFs of sub_140775698 @ 0x140775698
 * Callers:
 *     sub_140253DD4 @ 0x140253DD4 (sub_140253DD4.c)
 *     sub_140253E78 @ 0x140253E78 (sub_140253E78.c)
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     IoTranslateBusAddress @ 0x1405604A0 (IoTranslateBusAddress.c)
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_1406E397C @ 0x1406E397C (sub_1406E397C.c)
 *     sub_140762AEC @ 0x140762AEC (sub_140762AEC.c)
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140767CF8 @ 0x140767CF8 (sub_140767CF8.c)
 *     sub_140768080 @ 0x140768080 (sub_140768080.c)
 *     sub_14076AC70 @ 0x14076AC70 (sub_14076AC70.c)
 *     sub_14076BB10 @ 0x14076BB10 (sub_14076BB10.c)
 *     sub_14076BB84 @ 0x14076BB84 (sub_14076BB84.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_140773B10 @ 0x140773B10 (sub_140773B10.c)
 *     sub_140773B90 @ 0x140773B90 (sub_140773B90.c)
 *     sub_14077503C @ 0x14077503C (sub_14077503C.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 *     sub_1407754E4 @ 0x1407754E4 (sub_1407754E4.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140777C08 @ 0x140777C08 (sub_140777C08.c)
 *     sub_140808CB4 @ 0x140808CB4 (sub_140808CB4.c)
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 *     sub_14080E218 @ 0x14080E218 (sub_14080E218.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     sub_14084428C @ 0x14084428C (sub_14084428C.c)
 *     sub_140846760 @ 0x140846760 (sub_140846760.c)
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1409425A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140942640 (IoSetDependency.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
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
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall sub_140775698(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &stru_140C460C0;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&stru_140C460C0);
    v1 = &stru_140C461E0;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&stru_140C460C0);
LABEL_4:
  KeLeaveCriticalRegion();
}

/*
 * XREFs of MiFreeImageLoadConfig @ 0x140A4A594
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x140A48368 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeNextAffinityWalker @ 0x1405B7F2C (MiFreeNextAffinityWalker.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140865928 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(_QWORD *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    a1[1] = 0LL;
  }
  v3 = (_QWORD *)a1[2];
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
    MiFreeNextAffinityWalker(v4);
}

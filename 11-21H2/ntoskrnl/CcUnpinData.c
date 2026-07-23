/*
 * XREFs of CcUnpinData @ 0x1406FE6A0
 * Callers:
 *     CcPinRead @ 0x1406A5510 (CcPinRead.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     CcPreparePinWrite @ 0x140705F90 (CcPreparePinWrite.c)
 *     CcPinMappedData @ 0x1407BEEB0 (CcPinMappedData.c)
 *     CcUnpinDataForThread @ 0x14090BB90 (CcUnpinDataForThread.c)
 * Callees:
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  PVOID v1; // rbx
  char v2; // dl
  void *v3; // rax
  char *i; // rdi

  v1 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    sub_14028A370((char *)Bcb, v2, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v2 = 0;
    goto LABEL_3;
  }
  v3 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v3; i += 8 )
  {
    CcUnpinData(v3);
    v3 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v1, 0);
}

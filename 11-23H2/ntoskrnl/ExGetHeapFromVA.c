/*
 * XREFs of ExGetHeapFromVA @ 0x1402AC680
 * Callers:
 *     ExReturnPoolQuota @ 0x1402ACF70 (ExReturnPoolQuota.c)
 *     ExpHpCompactionRoutine @ 0x140337D60 (ExpHpCompactionRoutine.c)
 *     ExGetBigPoolInfo @ 0x1406074A0 (ExGetBigPoolInfo.c)
 *     ExPoolCleanupExpansionTable @ 0x1406077F8 (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x140607ED0 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x14060F5D8 (ExIsSpecialPoolAddress.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAE008 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x140315BA8 (RtlpHpQueryVA.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x140323A1C (RtlCSparseBitmapBitmaskRead.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  ULONG_PTR result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( (_WORD)BugCheckParameter3 )
  {
    v2 = 0;
LABEL_3:
    v6 = 0x100000;
    v7 = 0x1000000;
    result = (BugCheckParameter3 & -(__int64)(unsigned int)*(&v6 + v2) ^ RtlpHpHeapGlobals ^ *(_QWORD *)((BugCheckParameter3 & -(__int64)(unsigned int)*(&v6 + v2)) + 0x10) ^ 0xA2E64EADA2E64EADuLL)
           - 192LL * v2
           - 320;
    goto LABEL_4;
  }
  v4 = RtlCSparseBitmapBitmaskRead(&unk_140C71110, 2 * ((BugCheckParameter3 - qword_140C71108) >> 20));
  if ( v4 )
  {
    v2 = v4 - 1;
    if ( v2 != 2 )
      goto LABEL_3;
  }
  v8 = 0LL;
  RtlpHpQueryVA(BugCheckParameter3, v5, &v8, &v6);
  result = *v8;
LABEL_4:
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}

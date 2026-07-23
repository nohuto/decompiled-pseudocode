/*
 * XREFs of CmpFreePostBlock @ 0x140768540
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x140766A50 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1407676E0 (CmpNotifyChangeKey.c)
 *     CmpFreeSubordinatePost @ 0x140767ACC (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x14076E7D4 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1407D4DA0 (CmpPostApc.c)
 *     CmpPostApcRunDown @ 0x140A0F9D0 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}

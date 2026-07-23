/*
 * XREFs of MiDeletePerSessionProtos @ 0x14033EE54
 * Callers:
 *     MiDeleteSessionDriverProtos @ 0x140682C1C (MiDeleteSessionDriverProtos.c)
 *     MiFreeSubsectionProtos @ 0x1407B6354 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiDeleteTransitionPte @ 0x1402DD110 (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPageForce @ 0x1402DE264 (MiLockProtoPoolPageForce.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x1403D4EF4 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(_QWORD *P)
{
  __int64 *v1; // r9
  __int64 v2; // rsi
  unsigned __int8 v3; // r12
  ULONG_PTR v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v19; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v20; // [rsp+78h] [rbp+10h]

  v1 = (__int64 *)P[8];
  v2 = 0LL;
  v3 = 17;
  v4 = P[9];
  v18[1] = 0LL;
  v6 = *v1;
  v7 = v1[1];
  v8 = *((unsigned int *)v1 + 11);
  v19 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v18[0] = v10;
  v11 = *(_QWORD *)(qword_140C673C8 + 8 * v9);
  v20 = v4 + 8 * v8;
  if ( v4 < v20 )
  {
    do
    {
      if ( (v4 & 0xFFF) == 0 || !v2 )
      {
        if ( v2 )
          MiUnlockProtoPoolPage(v2, v3);
        v12 = MiLockProtoPoolPageForce(v4, &v19);
        v3 = v19;
        v2 = v12;
      }
      v13 = MiLockLeafPage((unsigned __int64 *)v4, 0LL);
      v14 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v13 )
      {
        if ( (MiFlags & 0xC000) == 0xC000 && (unsigned int)MiGetPagePrivilege(v13, 1, 0LL) )
        {
          MiRemoveLockedPageChargeAndDecRef(v13);
          KeSetPagePrivilege(0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4), v18, 16LL);
          MiClearPfnImageVerified(v13, 4);
          v10 = v18[0];
        }
        if ( (unsigned int)MiDeleteTransitionPte(v4, v13, 0x11u, 1) == 3 )
          --v8;
      }
      else
      {
        if ( !v14 )
          break;
        if ( (v14 & 0x400) == 0 )
        {
          v16 = MiSwizzleInvalidPte(768LL);
          if ( v17 != v16 )
            MiReleasePageFileSpace(v11, v17, 1);
        }
      }
      v10 += 4096LL;
      v4 += 8LL;
      v18[0] = v10;
    }
    while ( v4 < v20 );
    if ( v2 )
      MiUnlockProtoPoolPage(v2, v3);
  }
  MiReturnCommit(v11, v8);
  MiUpdateSystemProtoPtesTree((__int64)(P + 3), 0);
  ExFreePoolWithTag((PVOID)P[9], 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}

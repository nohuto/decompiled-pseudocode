/*
 * XREFs of MiTryLockLeafPage @ 0x140219AC4
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C84C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiCombineWithStandbyExisting @ 0x14035A31C (MiCombineWithStandbyExisting.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiMakeTransitionHeatBatch @ 0x140654808 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x1402DC6D0 (MiInvalidPteConforms.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140660DA8 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiTryLockLeafPage(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r9
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx

  v4 = (unsigned int)a2;
  v5 = a1;
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  *a3 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *v5;
      if ( (*v5 & 1) != 0 )
        goto LABEL_8;
      if ( (*v5 & 0xC00) != 0x800 )
        return 3221226548LL;
      if ( (unsigned int)MiInvalidPteConforms(v7, a2, v5, v4) )
      {
        v8 = v7;
        if ( qword_140C65B40 && (v7 & 0x10) == 0 )
          v8 = v7 & ~qword_140C65B40;
LABEL_8:
        a2 = 0xFFFFFFFFFFLL;
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 <= qword_140C65BA0 )
        {
          a2 = 6 * v9;
          if ( ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
    }
    v10 = 48 * v9 - 0x220000000000LL;
    a2 = v4 & 1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      return 3221225557LL;
    if ( *v5 == v7 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
  {
LABEL_13:
    *a3 = v10;
    return 0LL;
  }
  if ( (v4 & 2) != 0 )
  {
    MiLockSpecialPurposeMemoryCachedPage(v10, (unsigned int)a2 | 2, v5, v4);
    goto LABEL_13;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  return 3221225557LL;
}

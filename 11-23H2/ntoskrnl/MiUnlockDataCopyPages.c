/*
 * XREFs of MiUnlockDataCopyPages @ 0x1403500CC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14028B470 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A61C (MiUnlockNestedProtoPoolPage.c)
 */

__int64 __fastcall MiUnlockDataCopyPages(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = a1[3];
  if ( v1 )
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a1[4] )
    MiUnlockNestedProtoPoolPage();
  result = *a1;
  if ( *a1 )
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a1[1];
  if ( v4 )
    return MiUnlockProtoPoolPage(v4, 2u);
  return result;
}

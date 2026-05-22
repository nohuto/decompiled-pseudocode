/*
 * XREFs of ?GetArea@CRegion@@QEBA_KXZ @ 0x1800383CC
 * Callers:
 *     ?SampleFragmentationState@CVirtualSurface@DirectComposition@@QEAAXPEAUVirtualSurfaceFragmentationState@2@@Z @ 0x180037E64 (-SampleFragmentationState@CVirtualSurface@DirectComposition@@QEAAXPEAUVirtualSurfaceFragmentatio.c)
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CRegion::GetArea(CRegion *this)
{
  _DWORD *v1; // r8
  __int64 v2; // r10
  int v3; // eax
  unsigned __int64 v4; // r8
  FastRegion::Internal::CRgnData *v5; // rcx
  _DWORD *v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+28h] [rbp-28h]
  FastRegion::Internal::CRgnData *v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+44h] [rbp-Ch]

  v1 = *(_DWORD **)this;
  v2 = 0LL;
  v7 = v1;
  v3 = *v1;
  if ( !*v1 )
  {
    v8 = 0LL;
    goto LABEL_6;
  }
  v10 = 0;
  v4 = (unsigned __int64)(v1 + 3);
  *((_QWORD *)&v8 + 1) = v4;
  v5 = (FastRegion::Internal::CRgnData *)(v4 + *(int *)(v4 + 4));
  *(_QWORD *)&v8 = v4 + 8LL * (v3 - 1);
  v9 = v5;
  v11 = (__int64)(v4 + 8 + *(int *)(v4 + 12) - (_QWORD)v5) >> 3;
  if ( v11 <= 0 )
    goto LABEL_5;
  while ( v4 < (unsigned __int64)v8 )
  {
    v5 = (FastRegion::Internal::CRgnData *)(2 * v10);
LABEL_5:
    FastRegion::Internal::CRgnData::StepIterator(v5, (struct FastRegion::CRegion::Iterator *)&v7);
LABEL_6:
    v4 = *((_QWORD *)&v8 + 1);
  }
  return v2;
}

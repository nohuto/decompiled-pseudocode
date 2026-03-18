/*
 * XREFs of ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x180190F38
 * Callers:
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802A23FC (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CRgnData::Offset(FastRegion::Internal::CRgnData *this, int a2, int a3)
{
  int v3; // edi
  __int64 v7; // r11
  _DWORD *v8; // r9
  int v9; // esi
  int v10; // ecx
  __int64 v11; // r11
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v15; // r8
  _DWORD *i; // rcx

  v3 = *((_DWORD *)this + 1);
  v7 = *(int *)this;
  v8 = (_DWORD *)((char *)this + 12);
  v9 = *((_DWORD *)this + 2);
  v10 = v3 + a2;
  v11 = v7 - 1;
  v12 = v9 + a2;
  v13 = 0LL;
  if ( a2 <= 0 )
  {
    if ( v10 > v3 )
      return 0;
  }
  else if ( v12 < v9 )
  {
    return 0;
  }
  if ( a3 <= 0 )
  {
    if ( *v8 + a3 > *v8 )
      return 0;
  }
  else if ( *((_DWORD *)this + 2 * v11 + 3) + a3 < *((_DWORD *)this + 2 * v11 + 3) )
  {
    return 0;
  }
  *((_DWORD *)this + 1) = v10;
  *((_DWORD *)this + 2) = v12;
  if ( v11 > 0 )
  {
    do
    {
      *v8 += a3;
      v15 = (__int64)v8 + v8[3] + 8;
      for ( i = (_DWORD *)((char *)v8 + (int)v8[1]); i != (_DWORD *)v15; ++i )
        *i += a2;
      ++v13;
      v8 += 2;
    }
    while ( v13 < v11 );
  }
  *((_DWORD *)this + 2 * v11 + 3) += a3;
  return 1;
}

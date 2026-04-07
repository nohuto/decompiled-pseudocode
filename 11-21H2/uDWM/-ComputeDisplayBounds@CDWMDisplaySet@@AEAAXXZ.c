/*
 * XREFs of ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003C674
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x180011D00 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CDWMDisplaySet::ComputeDisplayBounds(CDWMDisplaySet *this)
{
  _DWORD *v1; // r8
  __int64 v2; // r9
  bool IsEmpty; // al
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // r11
  char v7; // dl
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  if ( *((_DWORD *)this + 16) )
  {
    v1 = (_DWORD *)((char *)this + 16);
    do
    {
      TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v1);
      IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty((_DWORD *)(v2 + 56));
      if ( v7 )
      {
        if ( IsEmpty )
        {
          v1[3] = 0;
          v1[2] = 0;
          v1[1] = 0;
          *v1 = 0;
        }
        else
        {
          *(_OWORD *)v1 = *(_OWORD *)(v4 + 56);
        }
      }
      else if ( !IsEmpty )
      {
        v8 = *(_DWORD *)(v4 + 56);
        if ( v8 < *v1 )
          *v1 = v8;
        v9 = *(_DWORD *)(v4 + 60);
        if ( v9 < v1[1] )
          v1[1] = v9;
        v10 = *(_DWORD *)(v4 + 64);
        if ( v10 > v1[2] )
          v1[2] = v10;
        v11 = *(_DWORD *)(v4 + 68);
        if ( v11 > v1[3] )
          v1[3] = v11;
      }
    }
    while ( (unsigned int)(v5 + 1) < *(_DWORD *)(v6 + 64) );
  }
}

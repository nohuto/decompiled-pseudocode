/*
 * XREFs of ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003DF1C
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003DBEC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800574A4 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CDWMDisplaySet::ComputeDisplayBounds(CDWMDisplaySet *this, __int64 a2)
{
  __int64 v2; // r10
  CDWMDisplaySet *v3; // r11
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  char IsEmpty; // al
  __int64 v9; // r9
  int v10; // r10d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  v2 = 0LL;
  v3 = this;
  if ( *((_DWORD *)this + 16) )
  {
    v4 = (_DWORD *)((char *)this + 16);
    do
    {
      LOBYTE(v6) = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(
                     v4,
                     a2,
                     v4,
                     *(_QWORD *)(*((_QWORD *)v3 + 5) + 8 * v2));
      IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v5 + 56, v6, v7, v5);
      if ( (_BYTE)a2 )
      {
        if ( IsEmpty )
        {
          v4[3] = 0;
          v4[2] = 0;
          v4[1] = 0;
          *v4 = 0;
        }
        else
        {
          *(_OWORD *)v4 = *(_OWORD *)(v9 + 56);
        }
      }
      else if ( !IsEmpty )
      {
        v11 = *(_DWORD *)(v9 + 56);
        if ( v11 < *v4 )
          *v4 = v11;
        v12 = *(_DWORD *)(v9 + 60);
        if ( v12 < v4[1] )
          v4[1] = v12;
        v13 = *(_DWORD *)(v9 + 64);
        if ( v13 > v4[2] )
          v4[2] = v13;
        v14 = *(_DWORD *)(v9 + 68);
        if ( v14 > v4[3] )
          v4[3] = v14;
      }
      v2 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v3 + 16) );
  }
}

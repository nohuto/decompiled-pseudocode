/*
 * XREFs of ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1804BE7E4
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180235B60 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1804B8170 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
        Geometry::CRect *this,
        const struct tagPOINT *a2)
{
  bool v2; // al
  int *v3; // rdx
  int *v4; // rcx
  _DWORD *v5; // r10
  int v6; // r9d
  int v7; // r8d
  signed int v8; // r8d
  signed int v9; // r9d
  int v10; // r11d
  signed int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // r11d
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  int v18; // r10d
  int v19; // ebx
  int v20; // eax

  v2 = Geometry::CRect::Contains(this, a2);
  v6 = 0;
  if ( !v2 )
  {
    v7 = v3[1];
    if ( v7 >= v4[1] && v7 <= v4[3] )
    {
      v8 = abs32(*v3 - *v5);
      v9 = abs32(*v3 - v5[2]);
      if ( v8 < v9 )
        v9 = v8;
      return (unsigned int)(v9 * v9);
    }
    v10 = *v3;
    if ( *v3 >= *v4 && v10 <= v4[2] )
    {
      v11 = abs32(v7 - v4[1]);
      v9 = abs32(v7 - v5[3]);
      if ( v11 < v9 )
        v9 = v11;
      return (unsigned int)(v9 * v9);
    }
    v12 = v7 - v4[1];
    v13 = (v10 - *v5) * (v10 - *v5);
    v14 = (v10 - v5[2]) * (v10 - v5[2]);
    v15 = (v7 - v5[3]) * (v7 - v5[3]);
    v16 = v12 * v12;
    v17 = v13;
    v18 = v15 + v13;
    v19 = v13 + v16;
    v6 = v14 + v16;
    if ( v15 + v13 >= v15 + v14 )
      v17 = v14;
    v20 = v15 + v17;
    if ( v19 >= v6 )
      v13 = v14;
    if ( v16 + v13 >= v20 )
    {
      v6 = v15 + v14;
      if ( v18 < v15 + v14 )
        return (unsigned int)v18;
    }
    else if ( v19 < v6 )
    {
      return (unsigned int)v19;
    }
  }
  return (unsigned int)v6;
}

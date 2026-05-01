/*
 * XREFs of ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1805791F4
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1802E42B0 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802E2D4C (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
        Geometry::CRect *this,
        const struct tagPOINT *a2)
{
  bool v2; // al
  int *v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r10
  int v6; // r9d
  int v7; // r8d
  _DWORD *v8; // r11
  int v9; // ecx
  signed int v10; // r8d
  signed int v11; // r9d
  int v12; // ebx
  signed int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  int v19; // r10d
  int v20; // edi
  int v21; // eax

  v2 = Geometry::CRect::Contains(this, a2);
  v6 = 0;
  if ( !v2 )
  {
    v7 = v3[1];
    v8 = v5 + 3;
    v9 = *(_DWORD *)(v4 + 4);
    if ( v7 >= v9 && v7 <= *v8 )
    {
      v10 = abs32(*v3 - *v5);
      v11 = abs32(*v3 - v5[2]);
      if ( v10 < v11 )
        v11 = v10;
      return (unsigned int)(v11 * v11);
    }
    v12 = *v3;
    if ( *v3 >= *v5 && v12 <= v5[2] )
    {
      v13 = abs32(v7 - v9);
      v11 = abs32(v7 - *v8);
      if ( v13 < v11 )
        v11 = v13;
      return (unsigned int)(v11 * v11);
    }
    v14 = (v7 - *v8) * (v7 - *v8);
    v15 = (v3[1] - v9) * (v3[1] - v9);
    v16 = (v12 - *v5) * (v12 - *v5);
    v17 = (v12 - v5[2]) * (v12 - v5[2]);
    v18 = v16;
    v19 = v14 + v16;
    v20 = v16 + v15;
    v6 = v17 + v15;
    if ( v14 + v16 >= v14 + v17 )
      v18 = v17;
    v21 = v14 + v18;
    if ( v20 >= v6 )
      v16 = v17;
    if ( v15 + v16 >= v21 )
    {
      v6 = v14 + v17;
      if ( v19 < v14 + v17 )
        return (unsigned int)v19;
    }
    else if ( v20 < v6 )
    {
      return (unsigned int)v20;
    }
  }
  return (unsigned int)v6;
}

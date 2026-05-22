/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1801C4ED8
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801C4F7C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 i; // r11
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax

  v4 = a2;
  v5 = (a3 - 1) >> 1;
  for ( i = a2; i < v5; v4 = i )
  {
    i = 2 * i + (*(_DWORD *)(a1 + 8 * i + 8) >= *(_DWORD *)(a1 + 8 * i + 4)) + 1LL;
    *(_DWORD *)(a1 + 4 * v4) = *(_DWORD *)(a1 + 4 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4 * v4) = *(_DWORD *)(a1 + 4 * a3 - 4);
    v4 = a3 - 1;
  }
  if ( a2 < v4 )
  {
    do
    {
      v8 = (v4 - 1) >> 1;
      v9 = *(_DWORD *)(a1 + 4 * v8);
      if ( v9 >= *a4 )
        break;
      *(_DWORD *)(a1 + 4 * v4) = v9;
      v4 = (v4 - 1) >> 1;
    }
    while ( a2 < v8 );
  }
  result = (unsigned int)*a4;
  *(_DWORD *)(a1 + 4 * v4) = result;
  return result;
}

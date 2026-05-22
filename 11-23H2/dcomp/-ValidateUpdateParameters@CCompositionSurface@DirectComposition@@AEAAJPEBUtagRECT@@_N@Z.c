/*
 * XREFs of ?ValidateUpdateParameters@CCompositionSurface@DirectComposition@@AEAAJPEBUtagRECT@@_N@Z @ 0x1800EC164
 * Callers:
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::ValidateUpdateParameters(
        DirectComposition::CCompositionSurface *this,
        struct tagRECT *a2,
        char a3)
{
  __int64 v3; // r11
  int v4; // r9d
  _BYTE *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r11d

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  v6 = (_BYTE *)(v3 + 353);
  if ( *(_DWORD *)(v3 + 344) )
  {
    v4 = -2147467259;
  }
  else if ( *v6 && (!a3 || *((_DWORD *)this + 14) != 1 || *(int *)(*(_QWORD *)(v3 + 24) + 368LL) < 1) )
  {
    goto LABEL_11;
  }
  if ( !*v6 && *((_DWORD *)this + 14) == 2 && (!a3 || *(int *)(*(_QWORD *)(v3 + 24) + 368LL) < 1) )
LABEL_11:
    v4 = -2003302399;
  v7 = *((_QWORD *)this + 5);
  v8 = *(_QWORD *)(v7 + 44);
  if ( v4 >= 0 )
  {
    if ( (_DWORD)v8 )
    {
      if ( a2 )
      {
        if ( (*(_BYTE *)(v7 + 112) & 1) != 0 || *((_QWORD *)this + 6) )
        {
          if ( !DirectComposition::IsRectangleInSurface(
                  (DirectComposition *)a2,
                  (const struct tagRECT *)(unsigned int)v8,
                  HIDWORD(v8)) )
            return (unsigned int)-2147024809;
          return v9;
        }
        else if ( a2->left || *(_QWORD *)&a2->top != __PAIR64__(v8, 0) || a2->bottom != HIDWORD(v8) )
        {
          return (unsigned int)-2147024809;
        }
      }
    }
    else
    {
      return (unsigned int)-2147483634;
    }
  }
  return (unsigned int)v4;
}

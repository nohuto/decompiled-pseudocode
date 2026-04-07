/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180108C20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BBB74 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // r8
  bool IsEmpty; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  bool v19; // al
  __int64 v20; // rdx
  char v21; // r8
  unsigned int top; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  bool v27; // zf
  int v28; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 40)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 41) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
      goto LABEL_57;
    }
  }
  if ( *((_DWORD *)this + 14) )
  {
    if ( *((_BYTE *)this + 212) || *((_DWORD *)this + 52) != *((_DWORD *)this + 36) )
    {
      *((_DWORD *)this + 50) = 0;
      *((_BYTE *)this + 212) = 0;
    }
    if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 50) = 0;
      goto LABEL_57;
    }
    v7 = *((_DWORD *)this + 50);
    if ( v7 )
    {
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
        goto LABEL_57;
      v9 = (_DWORD *)*((_QWORD *)this + 24);
      if ( *v8 >= *v9 && v8[1] >= v9[1] && v8[2] <= v9[2] && v8[3] <= v9[3] )
        goto LABEL_57;
    }
    else
    {
      *((_DWORD *)this + 51) = *((_DWORD *)this + 36);
    }
    if ( v7 < 5 )
    {
      v25 = *((_QWORD *)this + 24);
      if ( !v25 )
      {
        v25 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                80LL);
        *((_QWORD *)this + 24) = v25;
        if ( !v25 )
        {
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x205u);
          goto LABEL_57;
        }
        v7 = *((_DWORD *)this + 50);
      }
      *(struct tagRECT *)(v25 + 16LL * v7) = *a2;
      ++*((_DWORD *)this + 50);
    }
    else
    {
      do
      {
        v10 = (_DWORD *)*((_QWORD *)this + 24);
        *((_DWORD *)this + 50) = v7 - 1;
        TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v10);
        IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11);
        if ( v15 )
        {
          if ( IsEmpty )
          {
            *(_QWORD *)(v13 + 8) = 0LL;
            *(_QWORD *)v13 = 0LL;
          }
          else
          {
            *(_OWORD *)v13 = *(_OWORD *)v14;
          }
        }
        else if ( !IsEmpty )
        {
          if ( *(_DWORD *)v14 < *(_DWORD *)v13 )
            *(_DWORD *)v13 = *(_DWORD *)v14;
          v16 = *(_DWORD *)(v14 + 4);
          if ( v16 < *(_DWORD *)(v13 + 4) )
            *(_DWORD *)(v13 + 4) = v16;
          v17 = *(_DWORD *)(v14 + 8);
          if ( v17 > *(_DWORD *)(v13 + 8) )
            *(_DWORD *)(v13 + 8) = v17;
          v18 = *(_DWORD *)(v14 + 12);
          if ( v18 > *(_DWORD *)(v13 + 12) )
            *(_DWORD *)(v13 + 12) = v18;
        }
        v7 = *((_DWORD *)this + 50);
      }
      while ( v7 > 1 );
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_DWORD **)this + 24));
      v19 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
      if ( v21 )
      {
        if ( v19 )
        {
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)v20 = 0LL;
        }
        else
        {
          *(struct tagRECT *)v20 = *a2;
        }
      }
      else if ( !v19 )
      {
        if ( a2->left < *(_DWORD *)v20 )
          *(_DWORD *)v20 = a2->left;
        top = a2->top;
        if ( top < *(_DWORD *)(v20 + 4) )
          *(_DWORD *)(v20 + 4) = top;
        v23 = a2->right;
        if ( v23 > *(_DWORD *)(v20 + 8) )
          *(_DWORD *)(v20 + 8) = v23;
        v24 = a2->bottom;
        if ( v24 > *(_DWORD *)(v20 + 12) )
          *(_DWORD *)(v20 + 12) = v24;
      }
    }
  }
LABEL_57:
  v26 = *((_DWORD *)this + 36);
  v27 = v26 == -1;
  v28 = v26 + 1;
  *((_DWORD *)this + 36) = v28;
  if ( v27 )
  {
    *((_DWORD *)this + 36) = 1;
    v28 = 1;
  }
  if ( v4 < 0 )
    *((_DWORD *)this + 50) = 0;
  else
    *((_DWORD *)this + 52) = v28;
  return (unsigned int)v4;
}

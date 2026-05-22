/*
 * XREFs of ?OnAnimatorStateChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAXPEAVCompositionPropertyAnimator@234@W4AnimationEventType@@IIPEAGPEA_N@Z @ 0x18004FEC0
 * Callers:
 *     ?AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004FB60 (-AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::AnimationBindingManager::OnAnimatorStateChanged(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _WORD *a6,
        _BYTE *a7)
{
  char v7; // bl
  int v10; // eax
  char v11; // di
  char v12; // bp
  bool v13; // si
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r11
  __int16 v24; // r10
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r9
  unsigned __int64 Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int128 v33; // [rsp+28h] [rbp-40h]

  v7 = 0;
  *a6 = 0;
  *a7 = 0;
  v10 = *(_DWORD *)(a2 + 196);
  if ( v10 != 1 )
  {
    if ( !v10 )
      goto LABEL_4;
    if ( v10 != 2 )
      goto LABEL_71;
  }
  if ( a3 != 8 && (unsigned int)(a3 - 1) > 1 )
    goto LABEL_35;
  v7 = 1;
LABEL_4:
  if ( a3 == 8 || a3 == 1 || a3 == 2 )
  {
    v11 = 1;
    if ( a3 == 8 )
      goto LABEL_6;
    goto LABEL_36;
  }
LABEL_35:
  v11 = 0;
LABEL_36:
  if ( a3 != 16 )
  {
    v12 = 0;
    goto LABEL_7;
  }
LABEL_6:
  v12 = 1;
LABEL_7:
  v13 = a3 == 1 && (*(_BYTE *)(a2 + 152) & 0x10) != 0;
  if ( !v7 && !v11 && !v12 )
    return;
  Buffer = __PAIR64__(a5, a4);
  v33 = 0LL;
  v14 = RtlLookupElementGenericTable(a1, &Buffer);
  v15 = v14;
  if ( !v14 )
    return;
  v16 = v14[1];
  v17 = v16;
  v18 = v16;
  if ( v16 )
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)(v18 + 8);
      if ( !v30 )
        goto LABEL_71;
      if ( v30 == a2 )
        break;
      v17 = v18;
      v18 = *(_QWORD *)(v18 + 24);
      if ( !v18 )
        goto LABEL_12;
    }
    if ( !v12 )
    {
      if ( v13 )
      {
        v31 = *(_QWORD *)(v18 + 24);
        if ( v17 == v16 )
          v15[1] = v31;
        else
          *(_QWORD *)(v17 + 24) = v31;
        *(_QWORD *)(v18 + 24) = a1[4].TableRoot;
        a1[4].TableRoot = (PRTL_SPLAY_LINKS)v18;
      }
      v22 = v15[2];
      v20 = v15 + 2;
      v23 = v18;
      goto LABEL_18;
    }
LABEL_71:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
LABEL_12:
  v19 = v15[2];
  v20 = v15 + 2;
  v21 = v19;
  v18 = v19;
  if ( !v19 )
  {
LABEL_23:
    v25 = v20;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v22 = *(_QWORD *)(v18 + 24);
    if ( *(_QWORD *)(v18 + 8) == a2 )
      break;
    v21 = v18;
    v18 = *(_QWORD *)(v18 + 24);
    if ( !v22 )
      goto LABEL_23;
  }
  v23 = v18;
  if ( v12 )
  {
    if ( v18 == v19 )
      *v20 = v22;
    else
      *(_QWORD *)(v21 + 24) = v22;
    *(_QWORD *)(v18 + 24) = a1[4].TableRoot;
    a1[4].TableRoot = (PRTL_SPLAY_LINKS)v18;
  }
LABEL_18:
  v24 = *(_WORD *)(v18 + 16);
  v25 = v20;
  if ( v22 )
  {
    do
    {
      if ( v7 )
        *(_WORD *)(v22 + 16) &= ~v24;
      if ( v11 )
        *(_BYTE *)(v22 + 18) = 0;
      v22 = *(_QWORD *)(v22 + 24);
    }
    while ( v22 );
    v25 = v15 + 2;
  }
  if ( v7 )
  {
    *a6 = *(_WORD *)(v23 + 16);
    v25 = v20;
  }
  if ( v11 )
  {
    *a7 = *(_BYTE *)(v23 + 18);
    goto LABEL_23;
  }
LABEL_24:
  if ( !v15[1] && !*v25 )
  {
    if ( !RtlDeleteElementGenericTable(a1, v15) )
      RaiseFailFastException(0LL, 0LL, 1u);
    LODWORD(Buffer) = a4;
    *(_QWORD *)&v33 = 0LL;
    v26 = RtlLookupElementGenericTable(a1 + 1, &Buffer);
    v27 = (_QWORD *)v26[1];
    v28 = v26 + 1;
    if ( v27 )
    {
      while ( 1 )
      {
        v29 = v27[1];
        if ( *(_DWORD *)v27 == a5 )
          break;
        v28 = v27 + 1;
        v27 = (_QWORD *)v27[1];
        if ( !v29 )
          goto LABEL_31;
      }
      *v28 = v29;
      operator delete(v27, 0x10uLL);
    }
LABEL_31:
    if ( !v26[1] && !RtlDeleteElementGenericTable(a1 + 1, v26) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}

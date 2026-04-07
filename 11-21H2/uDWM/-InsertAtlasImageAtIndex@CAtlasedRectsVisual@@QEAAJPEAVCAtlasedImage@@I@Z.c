/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180034CA0
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180024008 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180032070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x1800359F0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x1800A8134 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        unsigned int a3)
{
  char *v3; // rbx
  __int64 v4; // rdi
  int v6; // esi
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // r8
  struct CAtlasedImage **v10; // rdx
  struct CAtlasedImage **v11; // r9
  _QWORD *v13; // r9
  unsigned int v14; // eax
  struct CAtlasedImage **v15; // [rsp+50h] [rbp+8h] BYREF
  struct CAtlasedImage *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v3 = (char *)this + 248;
  v4 = a3;
  if ( a3 > *((_DWORD *)this + 68) )
  {
    v6 = -2147024809;
    v14 = 451;
    v7 = -2147024809;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v14);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x4Du);
    return (unsigned int)v6;
  }
  v15 = &v16;
  v6 = DynArrayImpl<0>::Grow((int)this + 248, 8, 1, 0, (__int64)&v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = 461;
    goto LABEL_10;
  }
  v8 = *((unsigned int *)v3 + 6);
  v9 = *(_QWORD *)v3;
  *((_DWORD *)v3 + 6) = v8 + 1;
  if ( (unsigned int)v8 > (unsigned int)v4 )
  {
    v13 = (_QWORD *)(v9 + 8 * v8);
    do
    {
      v8 = (unsigned int)(v8 - 1);
      *v13-- = *(_QWORD *)(v9 + 8 * v8);
    }
    while ( (unsigned int)v8 > (unsigned int)v4 );
  }
  v10 = v15;
  v11 = (struct CAtlasedImage **)(v9 + 8 * v4);
  if ( v15 >= v11 && (unsigned __int64)v15 < v9 + 8 * ((unsigned __int64)*((unsigned int *)v3 + 6) - 1) )
    v10 = ++v15;
  *v11 = *v10;
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  *((_QWORD *)v16 + 10) = this;
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  return (unsigned int)v6;
}

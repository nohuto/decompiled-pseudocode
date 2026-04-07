/*
 * XREFs of ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUMilPoint3F@@@Z @ 0x1800ED1C8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2,
        const struct tagRECT *a3,
        char a4,
        struct CImageLegacyMilBrushProxy **a5,
        struct CCachedVisualImageProxy **a6,
        bool *a7,
        struct MilPoint3F *a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r10
  unsigned int v12; // ebp
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rax
  volatile signed __int32 *v21; // rdi
  char v22; // r14
  __int64 v23; // rax
  __int64 v25; // [rsp+20h] [rbp-18h]
  int v26; // [rsp+28h] [rbp-10h]

  v8 = *((_DWORD *)this + 34);
  v9 = 0LL;
  v12 = -2147467259;
  if ( v8 )
  {
    v13 = *((_QWORD *)this + 14);
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 8 * v9);
      v15 = *(_QWORD *)(v14 + 16);
      if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
        && v15 == *((_QWORD *)a2 + 2)
        && *(_BYTE *)(v14 + 67) == a4
        && (((*(_DWORD *)(v14 + 24) >> 26) ^ (*((_DWORD *)a2 + 6) >> 26)) & 1) == 0
        && (((*(_DWORD *)(v14 + 24) >> 28) ^ (*((_DWORD *)a2 + 6) >> 28)) & 1) == 0 )
      {
        break;
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        return v12;
    }
    v16 = *(_QWORD *)(v14 + 40);
    if ( v16 && !*(_BYTE *)(v16 + 975) && !*(_BYTE *)(v14 + 74) )
    {
      v17 = 0;
      if ( a3->right - a3->left >= 0 )
        v17 = a3->right - a3->left;
      if ( v17 == *(_DWORD *)(v16 + 952) )
      {
        v18 = 0;
        if ( a3->bottom - a3->top >= 0 )
          v18 = a3->bottom - a3->top;
        if ( v18 == HIDWORD(*(_QWORD *)(v16 + 952)) )
        {
          v19 = *(volatile signed __int32 **)(v16 + 584);
          if ( v19 )
            _InterlockedIncrement(v19 + 2);
          v20 = *(_QWORD *)(v16 + 608);
          if ( v20 )
          {
            v21 = *(volatile signed __int32 **)(v16 + 608);
          }
          else
          {
            v21 = *(volatile signed __int32 **)(v16 + 592);
            if ( !v21 )
            {
LABEL_26:
              v22 = *(_BYTE *)(v14 + 67);
              v26 = *(_DWORD *)(v16 + 820);
              v23 = *(_QWORD *)(v14 + 32);
              v25 = *(_QWORD *)(v16 + 812);
              if ( v23 )
              {
                *((_QWORD *)a2 + 4) = v23;
                _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
              }
              v12 = 0;
              if ( *a5 )
                CBaseObject::Release(*a5);
              *a5 = (struct CImageLegacyMilBrushProxy *)v21;
              if ( v21 )
                _InterlockedIncrement(v21 + 2);
              if ( *a6 )
                CBaseObject::Release(*a6);
              *a6 = (struct CCachedVisualImageProxy *)v19;
              if ( v19 )
                _InterlockedIncrement(v19 + 2);
              *a7 = v22;
              *(_QWORD *)a8 = v25;
              *((_DWORD *)a8 + 2) = v26;
              if ( v21 )
                CBaseObject::Release((CBaseObject *)v21);
              if ( v19 )
                CBaseObject::Release((CBaseObject *)v19);
              return v12;
            }
            v20 = *(_QWORD *)(v16 + 592);
          }
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
          goto LABEL_26;
        }
      }
    }
  }
  return v12;
}

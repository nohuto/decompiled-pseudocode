/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x180034840
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180034220 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800352CC (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     memcpy_0 @ 0x1800636FB (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        float a4)
{
  unsigned int v4; // ebx
  char v6; // r15
  CBitmapSourceArray *v7; // rcx
  float v8; // xmm6_4
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  char v12; // r10
  unsigned int v13; // edi
  __int64 v14; // r11
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  char v17; // r8
  int v18; // eax
  _QWORD *v19; // rdi
  unsigned int v20; // r10d
  char v21; // cl
  unsigned int v22; // ebp
  __int64 v23; // r11
  _QWORD *v24; // r9
  _QWORD *v25; // r8
  char v26; // dl
  __int64 v27; // r14
  __int64 v28; // rbp
  __int64 v29; // rcx
  int v30; // ebp
  int v31; // eax
  bool v32; // zf
  float v33; // xmm0_4
  int v34; // eax
  __int64 v35; // rbx
  void *Src; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0;
  v6 = 0;
  v7 = (CButton *)((char *)this + 312);
  v8 = a4;
  v10 = 0;
  v11 = *((_DWORD *)v7 + 6);
  if ( v11 == *((_DWORD *)a2 + 6) )
  {
    v12 = 1;
    v13 = 0;
    if ( !v11 )
      goto LABEL_11;
    v14 = 0LL;
    while ( v12 )
    {
      ++v13;
      v15 = (_QWORD *)(v14 + *(_QWORD *)a2);
      v16 = (_QWORD *)(v14 + *(_QWORD *)v7);
      v14 += 8LL;
      v17 = 0;
      if ( *v16 == *v15 )
        v17 = v12;
      v12 = v17;
      if ( v13 >= v11 )
      {
        if ( v17 )
          goto LABEL_11;
        break;
      }
    }
  }
  v18 = CBitmapSourceArray::CopyAndAddRef(v7, a2);
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x4Au);
    return v10;
  }
  v6 = 1;
LABEL_11:
  v19 = (_QWORD *)((char *)this + 344);
  v20 = *((_DWORD *)this + 92);
  if ( v20 == *((_DWORD *)a3 + 6) )
  {
    v21 = 1;
    v22 = 0;
    if ( !v20 )
      goto LABEL_30;
    v23 = 0LL;
    while ( v21 )
    {
      ++v22;
      v24 = (_QWORD *)(v23 + *(_QWORD *)a3);
      v25 = (_QWORD *)(v23 + *v19);
      v23 += 8LL;
      v26 = 0;
      if ( *v25 == *v24 )
        v26 = v21;
      v21 = v26;
      if ( v22 >= v20 )
      {
        if ( v26 )
          goto LABEL_30;
        break;
      }
    }
  }
  if ( v20 )
  {
    v27 = 0LL;
    v28 = *((unsigned int *)this + 92);
    do
    {
      v29 = *(_QWORD *)(v27 + *v19);
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v29)(v29, 1LL);
        *(_QWORD *)(v27 + *v19) = 0LL;
      }
      v27 += 8LL;
      --v28;
    }
    while ( v28 );
  }
  *((_DWORD *)this + 92) = 0;
  v30 = *((_DWORD *)a3 + 6);
  Src = *(void **)a3;
  v31 = DynArrayImpl<0>::Grow((int)this + 344, 8, v30, 0, (__int64)&Src);
  v10 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x238u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x50u);
    return v10;
  }
  memcpy_0((void *)(*v19 + (unsigned int)(8 * *((_DWORD *)this + 92))), Src, (unsigned int)(8 * v30));
  v32 = v30 + *((_DWORD *)this + 92) == 0;
  *((_DWORD *)this + 92) += v30;
  if ( !v32 )
  {
    do
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*v19 + 8LL * v4++) + 8LL));
    while ( v4 < *((_DWORD *)this + 92) );
  }
  v6 = 1;
LABEL_30:
  if ( *((float *)this + 101) == a4 )
  {
    if ( !v6 )
      return v10;
    goto LABEL_34;
  }
  v32 = *((_DWORD *)this + 94) == 1;
  v33 = *((float *)this + 100);
  *((float *)this + 101) = a4;
  if ( v32 )
    v8 = FLOAT_1_0;
  *((float *)this + 100) = v8;
  if ( v6 )
  {
LABEL_34:
    v34 = *((_DWORD *)this + 22);
    if ( (v34 & 0x8000) == 0 )
    {
      v35 = *((_QWORD *)this + 3);
      for ( *((_DWORD *)this + 22) = v34 | 0x8000; v35; v35 = *(_QWORD *)(v35 + 24) )
      {
        if ( (*(_BYTE *)(v35 + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
      }
    }
    return v10;
  }
  if ( v33 != v8 )
    CVisual::SetDirtyFlags(this, 0x8000);
  return v10;
}

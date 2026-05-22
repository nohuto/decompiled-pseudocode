/*
 * XREFs of ?AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEAPEAUExpressionNode@@@Z @ 0x18003F434
 * Callers:
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18003E784 (-Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJM@Z @ 0x18003EDCC (-PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJ_N@Z @ 0x180163208 (-PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJ_N@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::AllocateNodeInBuffer(
        __int64 a1,
        int a2,
        void **a3)
{
  bool v6; // zf
  int v7; // ecx
  bool v8; // zf
  int v9; // ecx
  HANDLE v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v18; // rax
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // ecx
  int v23; // eax
  int v24; // edi
  int v25; // ecx
  int v26; // ecx
  _OWORD *v27; // rax
  _OWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // edx
  void **v31; // [rsp+30h] [rbp-28h] BYREF
  void *v32; // [rsp+78h] [rbp+20h] BYREF

  v32 = 0LL;
  if ( a2 > 52 )
  {
    if ( a2 <= 78 )
    {
      if ( a2 != 78 )
      {
        if ( a2 <= 65 )
        {
          if ( a2 == 65 )
            goto LABEL_12;
          if ( a2 <= 59 )
          {
            if ( a2 == 59 )
              goto LABEL_12;
            v6 = a2 == 53;
            v7 = a2 - 53;
            goto LABEL_9;
          }
          v8 = a2 == 60;
          v9 = a2 - 60;
LABEL_11:
          if ( v8 )
            goto LABEL_12;
          v19 = v9 - 1;
          if ( !v19 )
            goto LABEL_12;
          v20 = v19 - 1;
          if ( !v20 )
            goto LABEL_12;
          v22 = v20 - 1;
          v21 = v22 == 0;
          goto LABEL_48;
        }
        if ( a2 <= 72 )
        {
          if ( a2 == 72 )
            goto LABEL_33;
          if ( a2 == 66 || a2 == 67 || a2 == 68 || a2 == 69 )
            goto LABEL_12;
          v26 = a2 - 70;
          if ( a2 == 70 )
            goto LABEL_33;
        }
        else
        {
          if ( a2 == 73 || a2 == 74 || a2 == 75 )
            goto LABEL_33;
          v26 = a2 - 76;
          if ( a2 == 76 )
            goto LABEL_12;
        }
        if ( v26 != 1 )
          goto LABEL_50;
      }
LABEL_33:
      ProcessHeap = GetProcessHeap();
      v18 = HeapAlloc(ProcessHeap, 0, 8uLL);
      goto LABEL_34;
    }
    if ( a2 <= 91 )
    {
      if ( a2 == 91 )
        goto LABEL_12;
      if ( a2 > 85 )
      {
        v8 = a2 == 86;
        v9 = a2 - 86;
        goto LABEL_11;
      }
      if ( a2 == 85 )
        goto LABEL_12;
      v7 = a2 - 79;
      if ( a2 != 79 )
        goto LABEL_10;
      goto LABEL_33;
    }
    if ( a2 <= 97 )
    {
      if ( a2 == 97 )
        goto LABEL_12;
      v8 = a2 == 92;
      v9 = a2 - 92;
      goto LABEL_11;
    }
    if ( a2 == 98 || a2 == 99 || a2 == 100 )
      goto LABEL_12;
    if ( a2 == 101 )
    {
      v27 = DefaultHeap::Alloc(0x10uLL);
      v11 = v27;
      if ( v27 )
      {
        *v27 = 0LL;
        *((_DWORD *)v27 + 1) = 1;
        *((_BYTE *)v27 + 8) = 0;
        *((_BYTE *)v27 + 12) = 0;
        goto LABEL_14;
      }
      goto LABEL_80;
    }
    if ( a2 != 102 )
      goto LABEL_50;
    v11 = DefaultHeap::Alloc(0x18uLL);
    if ( !v11 )
      goto LABEL_80;
    *(_OWORD *)v11 = 0LL;
    v11[2] = 0LL;
    v11[2] = 0LL;
    *((_DWORD *)v11 + 2) = 2;
    *((_BYTE *)v11 + 12) = 0;
    goto LABEL_14;
  }
  if ( a2 == 52 )
    goto LABEL_74;
  if ( a2 > 26 )
  {
    if ( a2 > 39 )
    {
      if ( a2 > 45 )
      {
        v8 = a2 == 46;
        v9 = a2 - 46;
      }
      else
      {
        if ( a2 == 45 )
          goto LABEL_12;
        v8 = a2 == 40;
        v9 = a2 - 40;
      }
      goto LABEL_11;
    }
    if ( a2 == 39 )
      goto LABEL_12;
    if ( a2 <= 33 )
    {
      if ( a2 == 33 )
        goto LABEL_12;
      v6 = a2 == 27;
      v7 = a2 - 27;
      goto LABEL_9;
    }
    v8 = a2 == 34;
    v9 = a2 - 34;
    goto LABEL_11;
  }
  if ( a2 == 26 )
    goto LABEL_12;
  if ( a2 > 13 )
  {
    if ( a2 <= 20 )
    {
      if ( a2 == 20 )
        goto LABEL_12;
      v6 = a2 == 14;
      v7 = a2 - 14;
LABEL_9:
      if ( v6 )
        goto LABEL_12;
LABEL_10:
      v9 = v7 - 1;
      v8 = v9 == 0;
      goto LABEL_11;
    }
    v8 = a2 == 21;
    v9 = a2 - 21;
    goto LABEL_11;
  }
  if ( a2 == 13 )
    goto LABEL_12;
  if ( a2 > 6 )
  {
    if ( a2 == 7 )
    {
      v11 = DefaultHeap::Alloc(0x1CuLL);
      if ( !v11 )
        goto LABEL_80;
      *(_OWORD *)v11 = 0LL;
      v11[2] = 0LL;
      *((_DWORD *)v11 + 6) = 0;
      goto LABEL_14;
    }
    if ( a2 == 8 )
    {
      v29 = DefaultHeap::Alloc(0x44uLL);
      v11 = v29;
      if ( !v29 )
        goto LABEL_80;
      memset_0(v29, 0, 0x44uLL);
      goto LABEL_14;
    }
    if ( a2 != 9 )
    {
      v22 = a2 - 11;
      v21 = a2 == 11;
LABEL_48:
      if ( !v21 && v22 != 1 )
LABEL_50:
        Microsoft::WRL2::FailFast::Unexpected(0LL);
LABEL_12:
      v10 = GetProcessHeap();
      v11 = HeapAlloc(v10, 0, 4uLL);
      if ( v11 )
      {
        *(_DWORD *)v11 = 0;
        goto LABEL_14;
      }
      goto LABEL_80;
    }
LABEL_89:
    v18 = DefaultHeap::Alloc(8uLL);
LABEL_34:
    v11 = v18;
    if ( v18 )
    {
      *v18 = 0LL;
      goto LABEL_14;
    }
    goto LABEL_80;
  }
  switch ( a2 )
  {
    case 6:
      goto LABEL_74;
    case 0:
      goto LABEL_89;
    case 1:
      goto LABEL_33;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
    {
      if ( (unsigned int)(a2 - 4) > 1 )
        goto LABEL_50;
LABEL_74:
      v11 = DefaultHeap::Alloc(0x14uLL);
      if ( v11 )
      {
        *(_OWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 4) = 0;
        goto LABEL_14;
      }
      goto LABEL_80;
    }
    v28 = DefaultHeap::Alloc(0x10uLL);
    v11 = v28;
    if ( v28 )
    {
      *v28 = 0LL;
      goto LABEL_14;
    }
LABEL_80:
    v11 = 0LL;
    goto LABEL_14;
  }
  v11 = DefaultHeap::Alloc(0xCuLL);
  if ( !v11 )
    goto LABEL_80;
  *v11 = 0LL;
  *((_DWORD *)v11 + 2) = 0;
LABEL_14:
  v32 = v11;
  if ( !v11 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024882, 0x1DE5u, 0LL);
    return v15;
  }
  *(_DWORD *)v11 = a2;
  v12 = (_QWORD *)(a1 + 16);
  v13 = *(_DWORD *)(a1 + 40);
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v15 = -2147024362;
    v30 = 181;
    v24 = -2147024362;
    v25 = -2147024362;
    goto LABEL_112;
  }
  if ( v14 > *(_DWORD *)(a1 + 36) )
  {
    v31 = &v32;
    v23 = DynArrayImpl<0>::Grow((int)a1 + 16, 8, 1, 0, (__int64)&v31);
    v24 = v23;
    v25 = v23;
    if ( v23 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 40))++) + *v12) = *v31;
      goto LABEL_18;
    }
    v15 = v23;
    v30 = 192;
LABEL_112:
    DoStackCaptureDirect(v25, v30);
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v24, 0x1DEAu, 0LL);
    operator delete(v32, 4uLL);
    return v15;
  }
  *(_QWORD *)(*v12 + 8LL * v13) = v32;
  *(_DWORD *)(a1 + 40) = v14;
LABEL_18:
  v15 = 0;
  *a3 = v32;
  return v15;
}

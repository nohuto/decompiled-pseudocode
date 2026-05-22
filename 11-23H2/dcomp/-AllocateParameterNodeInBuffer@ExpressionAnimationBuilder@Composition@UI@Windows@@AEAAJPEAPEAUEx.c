/*
 * XREFs of ?AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUExpressionParameterNode@234@PEAPEAUExpressionParameter@234@@Z @ 0x18003E940
 * Callers:
 *     ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E85C (-PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4.c)
 *     ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x1801632B4 (-PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??_GExpressionParameter@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x18016288C (--_GExpressionParameter@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z @ 0x180163468 (-Remove@-$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z.c)
 *     ?Remove@?$DynArray@PEAUExpressionParameter@Composition@UI@Windows@@$0A@@@QEAAHAEBQEAUExpressionParameter@Composition@UI@Windows@@@Z @ 0x1801634D4 (-Remove@-$DynArray@PEAUExpressionParameter@Composition@UI@Windows@@$0A@@@QEAAHAEBQEAUExpressionP.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::AllocateParameterNodeInBuffer(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        struct Windows::UI::Composition::ExpressionParameterNode **a2,
        struct Windows::UI::Composition::ExpressionParameter **a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // edx
  _QWORD *v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // edx
  Windows::UI::Composition::ExpressionParameter **v24; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v25; // [rsp+38h] [rbp-8h] BYREF
  Windows::UI::Composition::ExpressionParameter *v26; // [rsp+88h] [rbp+48h] BYREF

  v26 = 0LL;
  v6 = DefaultHeap::Alloc(8uLL);
  if ( !v6 )
  {
    v6 = 0LL;
    v20 = 7700;
    goto LABEL_23;
  }
  *(_QWORD *)v6 = 0LL;
  v7 = DefaultHeap::Alloc(0x20uLL);
  if ( !v7 )
  {
    v26 = 0LL;
    v20 = 7703;
LABEL_23:
    v14 = -2147024882;
    goto LABEL_24;
  }
  *v7 = 0;
  v8 = (_QWORD *)((char *)this + 16);
  v7[6] = 0;
  *((_QWORD *)v7 + 1) = 0LL;
  *((_QWORD *)v7 + 2) = 0LL;
  v26 = (Windows::UI::Composition::ExpressionParameter *)v7;
  *v6 = 10;
  v6[1] = *((_DWORD *)this + 62);
  v9 = *((_DWORD *)this + 10);
  v25 = v6;
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v21 = -2147024362;
    v22 = 181;
    v14 = -2147024362;
    goto LABEL_20;
  }
  if ( v10 > *((_DWORD *)this + 9) )
  {
    v24 = (Windows::UI::Composition::ExpressionParameter **)&v25;
    v17 = DynArrayImpl<0>::Grow((int)this + 16, 8, 1, 0, (__int64)&v24);
    v14 = v17;
    if ( v17 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 10))++) + *v8) = *v24;
      goto LABEL_6;
    }
    v21 = v17;
    v22 = 192;
LABEL_20:
    DoStackCaptureDirect(v21, v22);
    v20 = 7708;
    goto LABEL_24;
  }
  *(_QWORD *)(*v8 + 8LL * v9) = v6;
  *((_DWORD *)this + 10) = v10;
LABEL_6:
  v11 = (_QWORD *)((char *)this + 224);
  v12 = *((_DWORD *)this + 62);
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v18 = -2147024362;
    v19 = 181;
    v14 = -2147024362;
  }
  else
  {
    if ( v13 <= *((_DWORD *)this + 61) )
    {
      *(_QWORD *)(*v11 + 8LL * v12) = v26;
      *((_DWORD *)this + 62) = v13;
LABEL_9:
      v14 = 0;
      *a3 = v26;
      *a2 = (struct Windows::UI::Composition::ExpressionParameterNode *)v6;
      return v14;
    }
    v24 = &v26;
    v16 = DynArrayImpl<0>::Grow((int)this + 224, 8, 1, 0, (__int64)&v24);
    v14 = v16;
    if ( v16 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 62))++) + *v11) = *v24;
      goto LABEL_9;
    }
    v18 = v16;
    v19 = 192;
  }
  DoStackCaptureDirect(v18, v19);
  v20 = 7709;
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v14, v20, 0LL);
  v25 = v6;
  DynArray<ExpressionNode *,0>::Remove((char *)this + 16, &v25);
  operator delete(v6, 8uLL);
  DynArray<Windows::UI::Composition::ExpressionParameter *,0>::Remove((char *)this + 224, &v26);
  if ( v26 )
    Windows::UI::Composition::ExpressionParameter::`scalar deleting destructor'(v26, v23);
  return v14;
}

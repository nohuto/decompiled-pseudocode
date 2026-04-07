/*
 * XREFs of ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800C29DC
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C3A14 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180016F30 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x1800C4868 (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800C56D8 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_AddImmersiveBackground(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  int v3; // ebx
  struct CVisual *v4; // rsi
  CVisual *v5; // rdi
  __int64 v7; // r10
  __int64 v8; // rdx
  unsigned int v9; // r12d
  struct tagRECT *v10; // rdx
  bool v11; // zf
  struct tagRECT v12; // xmm0
  char v13; // r15
  int v14; // eax
  int updated; // eax
  int v16; // eax
  int inserted; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // eax
  struct tagPOINT v23; // [rsp+30h] [rbp-59h] BYREF
  CVisual *v24; // [rsp+38h] [rbp-51h] BYREF
  CBaseObject *v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-41h]
  __m256i v27; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v28; // [rsp+70h] [rbp-19h] BYREF
  __m128i v29; // [rsp+80h] [rbp-9h] BYREF
  __int128 v30; // [rsp+90h] [rbp+7h] BYREF

  v2 = 0;
  v26 = a2;
  v25 = 0LL;
  v3 = 0;
  v23 = 0LL;
  v28 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  v29 = 0LL;
  v5 = 0LL;
  if ( CLivePreview::_ShouldAddImmersiveChrome((CLivePreview *)a1) )
  {
    v8 = *(_QWORD *)(a1 + 560);
    v9 = 0;
    if ( *(_DWORD *)(v8 + 40) )
    {
      while ( 1 )
      {
        if ( v9 >= *(_DWORD *)(v8 + 40) )
          v10 = 0LL;
        else
          v10 = (struct tagRECT *)(*(_QWORD *)(v8 + 16) + 24LL * v9);
        v11 = *(_DWORD *)(v7 + 24) == 0;
        v12 = *v10;
        v13 = 0;
        v30 = 0LL;
        v28 = v12;
        if ( !v11 )
        {
          while ( (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(*(_QWORD *)v7 + 16LL * v2, &v28, &v30) != 2 )
          {
            v7 = v26;
            if ( ++v2 >= *(_DWORD *)(v26 + 24) )
              goto LABEL_11;
          }
          v13 = 1;
        }
LABEL_11:
        v2 = 0;
        if ( !v13 )
        {
          v14 = CAccent::Create(&v25);
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x466u);
            v4 = v25;
            goto LABEL_32;
          }
          v4 = v25;
          v29.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
          v29.m128i_i32[0] = 1;
          updated = CAccent::UpdateAccentPolicy(v25, &v28, &v29, 0LL);
          v3 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x46Au);
            goto LABEL_32;
          }
          v16 = CVisual::Create(&v24);
          v3 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x46Cu);
            v5 = v24;
            goto LABEL_32;
          }
          v5 = v24;
          v23.x = v28.left;
          v23.y = v28.top;
          CVisual::SetOffset((struct tagPOINT *)v24, &v23);
          inserted = VisualCollection::InsertRelative((CVisual *)((char *)v5 + 32), v4, 0LL, 0, 1);
          v3 = inserted;
          if ( inserted < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x472u);
            goto LABEL_32;
          }
          v18 = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(a1 + 496) + 32LL), v5, 0LL, 0, 1);
          v3 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x474u);
            goto LABEL_32;
          }
          v27.m256i_i64[0] = (__int64)v5;
          v27.m256i_i64[3] = 0LL;
          v19 = *(unsigned int *)(a1 + 464);
          *(struct tagRECT *)&v27.m256i_u64[1] = v28;
          v20 = v19 + 1;
          if ( (int)v19 + 1 >= (unsigned int)v19 )
          {
            if ( v20 > *(_DWORD *)(a1 + 460) )
            {
              v21 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 440, 0x20u, 1, &v27);
              if ( v21 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xC0u);
            }
            else
            {
              *(__m256i *)(32 * v19 + *(_QWORD *)(a1 + 440)) = v27;
              *(_DWORD *)(a1 + 464) = v20;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
        }
        v8 = *(_QWORD *)(a1 + 560);
        if ( ++v9 >= *(_DWORD *)(v8 + 40) )
          break;
        v7 = v26;
      }
      if ( v3 >= 0 )
        goto LABEL_34;
LABEL_32:
      if ( !v5 )
        goto LABEL_36;
      VisualCollection::RemoveAll((CVisual *)((char *)v5 + 32));
LABEL_34:
      if ( v5 )
        CBaseObject::Release(v5);
LABEL_36:
      if ( v4 )
        CBaseObject::Release(v4);
    }
  }
  return (unsigned int)v3;
}

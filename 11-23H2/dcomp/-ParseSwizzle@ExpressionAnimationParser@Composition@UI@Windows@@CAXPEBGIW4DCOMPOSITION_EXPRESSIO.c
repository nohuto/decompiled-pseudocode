/*
 * XREFs of ?ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSION_TYPE@@_NPEAUExpressionErrorInfo@234@PEAPEAVSubchannelMaskInfo@@PEAI@Z @ 0x18004C330
 * Callers:
 *     ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E668 (-ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVSubchannelMaskInfo@@PEAPEAVTargetMapEntry@234@@Z @ 0x18004D6C0 (-GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAU.c)
 *     ?ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004DF00 (-ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimati.c)
 *     ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z @ 0x18019767C (-ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCom.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimationParser::ParseSwizzle(
        _WORD *a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int v9; // ebp
  HANDLE ProcessHeap; // rax
  _BYTE *v11; // rax
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rbx
  unsigned int v14; // eax
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  char v17; // al
  void *v18; // rcx
  char v19; // r15
  _BYTE *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // dl
  bool v23; // r10
  __int16 v24; // r11
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // r9d
  unsigned int v31; // r8d
  int v32; // r9d
  unsigned __int8 v33; // [rsp+30h] [rbp-58h]
  unsigned __int8 v34; // [rsp+30h] [rbp-58h]
  unsigned __int8 v35; // [rsp+31h] [rbp-57h]
  _DWORD v37[3]; // [rsp+34h] [rbp-54h]
  _QWORD *v38; // [rsp+40h] [rbp-48h]
  __int128 v39; // [rsp+48h] [rbp-40h]

  v9 = 0;
  *a7 = 0;
  v38 = a6;
  if ( !a2 )
    goto LABEL_19;
  switch ( a3 )
  {
    case 35:
      v33 = 1;
      goto LABEL_4;
    case 52:
      v33 = 2;
      goto LABEL_4;
    case 69:
      v33 = 3;
LABEL_4:
      ProcessHeap = GetProcessHeap();
      v11 = HeapAlloc(ProcessHeap, 0, 0xCuLL);
      v13 = v11;
      if ( !v11 )
        Microsoft::WRL2::FailFast::OutOfMemory(v12);
      v11[4] = 0;
      *(_DWORD *)v11 = 1;
      v11[8] = 0;
      v37[0] = 0;
      if ( a2 )
      {
        while ( 1 )
        {
          v14 = (unsigned __int16)*a1;
          if ( v14 < 0x57 )
            goto LABEL_17;
          if ( v14 != 89 )
          {
            switch ( *a1 )
            {
              case 'W':
              case 'w':
                v15 = 3;
                goto LABEL_11;
              case 'X':
              case 'x':
                v15 = 0;
                goto LABEL_12;
              case 'Z':
              case 'z':
                v15 = 2;
                goto LABEL_11;
              case 'y':
                break;
              default:
                goto LABEL_17;
            }
          }
          v15 = 1;
LABEL_11:
          if ( v15 > v33 )
            break;
LABEL_12:
          if ( !a4 )
          {
            if ( *((_BYTE *)v37 + v15) )
            {
              v31 = 3431;
LABEL_63:
              v32 = -2147467259;
              goto LABEL_64;
            }
            *((_BYTE *)v37 + v15) = 1;
          }
          v16 = v13[4];
          if ( v16 >= 4u )
          {
            v32 = -2147024809;
            v31 = 3443;
LABEL_64:
            *(_DWORD *)a5 = 17;
            MilInstrumentationCheckHR_MaybeFailFast(
              4u,
              &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
              2u,
              v32,
              v31,
              0LL);
            *a7 = v9;
            operator delete(v13, 0xCuLL);
            return;
          }
          ++v9;
          v17 = v15 | (4 * v13[8]);
          v13[4] = v16 + 1;
          ++a1;
          v13[8] = v17;
          if ( v9 >= a2 )
            goto LABEL_17;
        }
        v31 = 3453;
        goto LABEL_63;
      }
LABEL_17:
      *v38 = v13;
      v18 = *(void **)(a5 + 16);
      *(_QWORD *)a5 = 0LL;
      *(_DWORD *)(a5 + 8) = 0;
      if ( v18 )
      {
        operator delete(v18);
        *(_QWORD *)(a5 + 16) = 0LL;
      }
LABEL_19:
      *a7 = v9;
      return;
    case 104:
      v35 = 2;
      v19 = 1;
      v34 = 1;
      break;
    case 265:
      v35 = 3;
      v19 = 2;
      v34 = 3;
      break;
    default:
      *(_DWORD *)a5 = 17;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147467259,
        0xCA5u,
        0LL);
      *a7 = 0;
      return;
  }
  v37[0] = 0;
  v20 = DefaultHeap::Alloc(0x10uLL);
  v13 = v20;
  if ( !v20 )
    Microsoft::WRL2::FailFast::OutOfMemory(v21);
  v20[4] = 0;
  *(_DWORD *)v20 = 2;
  *((_QWORD *)v20 + 1) = 0LL;
  v39 = 0LL;
  if ( !a2 )
    goto LABEL_17;
  v22 = 0;
  v23 = 0;
  while ( 1 )
  {
    v24 = a1[v9];
    v25 = v24 - 49;
    if ( !v37[0] )
    {
      v22 = 0;
      v23 = v24 != 95;
      goto LABEL_49;
    }
    if ( v37[0] == 1 )
      break;
    if ( v37[0] == 2 )
    {
      if ( v25 > v34 )
      {
        v29 = 3318;
        goto LABEL_57;
      }
      v22 = v25 | (v22 << v19);
      v26 = v22;
      if ( !a4 )
      {
        v26 = v22;
        if ( *((_BYTE *)&v39 + v22) )
        {
          v29 = 3343;
          goto LABEL_57;
        }
        *((_BYTE *)&v39 + v22) = 1;
      }
      v27 = v20[4];
      if ( v27 >= 0x10u || v22 > 0xFu )
      {
        v29 = 3355;
        v30 = -2147024809;
        goto LABEL_58;
      }
      v28 = (16LL * *((_QWORD *)v20 + 1)) | v26 & 0xF;
      v37[0] = 0;
      *((_QWORD *)v20 + 1) = v28;
      v20[4] = v27 + 1;
    }
    else
    {
      ++v37[0];
    }
LABEL_50:
    if ( !v23 && ++v9 < a2 )
      continue;
    goto LABEL_17;
  }
  if ( v25 <= v35 )
  {
    v22 = v25 | (v22 << v19);
LABEL_49:
    ++v37[0];
    goto LABEL_50;
  }
  v29 = 3297;
LABEL_57:
  v30 = -2147467259;
LABEL_58:
  *(_DWORD *)a5 = 17;
  MilInstrumentationCheckHR_MaybeFailFast(
    4u,
    &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v30,
    v29,
    0LL);
  *a7 = v9;
  operator delete(v13, 0x10uLL);
}

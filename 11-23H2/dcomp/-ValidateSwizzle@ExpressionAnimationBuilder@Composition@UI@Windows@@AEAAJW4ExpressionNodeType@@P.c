/*
 * XREFs of ?ValidateSwizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEBVSubchannelMaskInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003EAE8
 * Callers:
 *     ?Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18003E784 (-Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?GetMaxMaskIndex@VectorSubchannelMaskInfo@@QEBAIXZ @ 0x18003EBB4 (-GetMaxMaskIndex@VectorSubchannelMaskInfo@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateSwizzle(
        int *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  int v4; // eax
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int MaxMaskIndex; // edx
  unsigned int v12; // ebx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int i; // r9d
  __int64 v18; // rax

  v4 = *a1;
  if ( !*a1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 1000LL) = 16;
    v14 = 7290;
    goto LABEL_44;
  }
  if ( a2 == 101 )
  {
    v9 = a1[v4 - 1 + 66];
    switch ( v9 )
    {
      case '4':
        v10 = 3;
        break;
      case 'E':
        v10 = 4;
        break;
      case '#':
        v10 = 2;
        break;
      default:
        v14 = 7316;
        goto LABEL_44;
    }
  }
  else
  {
    if ( a2 != 102 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    v15 = a1[v4 - 1 + 66];
    if ( v15 == 104 )
    {
      v10 = 6;
    }
    else
    {
      if ( v15 != 265 )
      {
        v14 = 7332;
        goto LABEL_44;
      }
      v10 = 16;
    }
  }
  if ( *(_DWORD *)a3 == 1 )
  {
    MaxMaskIndex = VectorSubchannelMaskInfo::GetMaxMaskIndex((VectorSubchannelMaskInfo *)a3);
  }
  else if ( *(_DWORD *)a3 == 2 )
  {
    v16 = *(unsigned __int8 *)(a3 + 4);
    MaxMaskIndex = 0;
    for ( i = 0; i < v16; MaxMaskIndex = v18 )
    {
      v18 = (*(_QWORD *)(a3 + 8) >> (4 * ((unsigned __int8)v16 - (unsigned __int8)i) - 4)) & 0xFLL;
      if ( (unsigned int)v18 <= MaxMaskIndex )
        LODWORD(v18) = MaxMaskIndex;
      ++i;
    }
  }
  else
  {
    MaxMaskIndex = -1;
  }
  if ( MaxMaskIndex >= v10 )
  {
    v14 = 7348;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(a3 + 4) != 1 )
  {
    switch ( *(_BYTE *)(a3 + 4) )
    {
      case 2:
        *a4 = 35;
        return 0;
      case 3:
        *a4 = 52;
        return 0;
      case 4:
        *a4 = 69;
        return 0;
      case 6:
        if ( a2 != 101 )
        {
          *a4 = 104;
          return 0;
        }
        v14 = 7377;
        break;
      case 0x10:
        if ( a2 != 101 )
        {
          *a4 = 265;
          return 0;
        }
        v14 = 7386;
        break;
      default:
        v14 = 7393;
        break;
    }
LABEL_44:
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, v14, 0LL);
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 1000LL) = 17;
    return v12;
  }
  *a4 = 18;
  return 0;
}

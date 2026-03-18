/*
 * XREFs of ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180051C60
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019498 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180052380 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800525D0 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x1800525F8 (-LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800CE7E8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801FC734 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1802289B0 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(CBaseExpression *this, struct CResource *a2)
{
  __int64 v2; // rax
  char v5; // si
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  unsigned int v14; // r9d
  unsigned int ExpressionTypeChannelCount; // r10d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int128 *p_Buf1; // r9
  int v19; // eax
  unsigned int v20; // ecx
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int128 *v22; // rcx
  char *v23; // r9
  int v24; // eax
  unsigned int v25; // ecx
  struct CAnimationLoggingManager *v26; // rax
  __int64 v27; // rax
  CAnimationLoggingManager *v28; // rcx
  __int64 v29; // rcx
  unsigned int v31; // [rsp+20h] [rbp-A9h]
  __int128 Buf1; // [rsp+50h] [rbp-79h] BYREF
  __int128 v33; // [rsp+60h] [rbp-69h]
  __int128 v34; // [rsp+70h] [rbp-59h]
  __int128 v35; // [rsp+80h] [rbp-49h]
  __int128 *v36; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v37; // [rsp+98h] [rbp-31h]
  char v38; // [rsp+9Ch] [rbp-2Dh]
  __int128 v39; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-19h]
  __int128 v41; // [rsp+C0h] [rbp-9h]
  __int128 v42; // [rsp+D0h] [rbp+7h]
  __int64 v43; // [rsp+E0h] [rbp+17h]
  int v44; // [rsp+E8h] [rbp+1Fh]
  char v45; // [rsp+ECh] [rbp+23h]

  v2 = *(_QWORD *)a2;
  v44 = 18;
  v39 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  v45 = 0;
  v41 = 0LL;
  v5 = 0;
  v42 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, __int128 *))(v2 + 136))(
         a2,
         *((unsigned int *)this + 48),
         &v39);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x281u, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 25);
    if ( v9 && *(_BYTE *)(v9 + 4) )
    {
      v36 = 0LL;
      Buf1 = 0LL;
      v37 = 18;
      v33 = 0LL;
      v38 = 0;
      v34 = 0LL;
      v35 = 0LL;
      v10 = *(_DWORD *)v9 - 1;
      if ( *(_DWORD *)v9 == 1 )
      {
        v11 = v44;
        if ( v44 != 18 )
        {
          if ( v44 == 35 )
            goto LABEL_26;
          if ( v44 != 52 && v44 != 69 )
          {
            v8 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024809, 0x830u, 0LL);
            goto LABEL_52;
          }
        }
      }
      else
      {
        if ( *(_DWORD *)v9 != 2 )
        {
          v31 = 2115;
LABEL_51:
          v8 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467259, v31, 0LL);
          goto LABEL_52;
        }
        v11 = v44;
        if ( v44 != 104 && v44 != 265 )
        {
          v8 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(1u, 0LL, 0, -2147024809, 0x839u, 0LL);
LABEL_52:
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v8, 0x2A4u, 0LL);
LABEL_53:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v36);
          goto LABEL_71;
        }
      }
      if ( v11 != 35 )
      {
        switch ( v11 )
        {
          case 0xBu:
            v37 = 11;
            v38 = 1;
            Microsoft::WRL::ComPtr<CPathData>::operator=(&v36, v43);
            v11 = v44;
            break;
          case 0x11u:
            LOBYTE(Buf1) = v39;
            v37 = 17;
            goto LABEL_28;
          case 0x12u:
            goto LABEL_27;
          case 0x2Au:
            v37 = 42;
            goto LABEL_27;
          case 0x34u:
            *(_QWORD *)&Buf1 = v39;
            v37 = 52;
            DWORD2(Buf1) = DWORD2(v39);
            goto LABEL_28;
          case 0x45u:
            Buf1 = v39;
            v37 = 69;
            goto LABEL_28;
          case 0x46u:
            Buf1 = v39;
            v37 = 70;
            goto LABEL_28;
          case 0x47u:
            Buf1 = v39;
            v37 = 71;
            goto LABEL_28;
          case 0x68u:
            Buf1 = v39;
            *(_QWORD *)&v33 = v40;
            v37 = 104;
            goto LABEL_28;
          case 0x109u:
            Buf1 = v39;
            v33 = v40;
            v34 = v41;
            v35 = v42;
            v37 = 265;
            goto LABEL_28;
          default:
            break;
        }
LABEL_29:
        if ( *(_BYTE *)(v9 + 4) )
        {
          ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v11);
          while ( 1 )
          {
            if ( *(_DWORD *)v9 == 1 )
            {
              LOBYTE(v13) = 2 * (v13 - v14);
              v10 = v13 - 2;
              LODWORD(v16) = (*(unsigned __int8 *)(v9 + 8) >> (v13 - 2)) & 3;
            }
            else if ( *(_DWORD *)v9 == 2 )
            {
              v10 = 4 * ((unsigned __int8)v13 - v14) - 4;
              v16 = (*(_QWORD *)(v9 + 8) >> (4 * ((unsigned __int8)v13 - (unsigned __int8)v14) - 4)) & 0xFLL;
            }
            else
            {
              LODWORD(v16) = -1;
            }
            if ( (unsigned int)v16 >= ExpressionTypeChannelCount || (unsigned int)v16 >= 0x10 )
              break;
            v17 = v14++;
            v10 = v16;
            *((_DWORD *)&Buf1 + (unsigned int)v16) = *((_DWORD *)this + v17 + 18);
            LODWORD(v17) = *(unsigned __int8 *)(v9 + 4);
            v13 = (unsigned __int8)v17;
            if ( v14 >= (unsigned int)v17 )
              goto LABEL_39;
          }
          v31 = 2154;
          goto LABEL_51;
        }
LABEL_39:
        if ( !(unsigned __int8)CExpressionValue::operator==(&Buf1)
          || (*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 128LL))(a2) )
        {
          p_Buf1 = &Buf1;
          if ( v37 == 11 )
            p_Buf1 = v36;
          v19 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)a2 + 96LL))(
                  a2,
                  *((unsigned int *)this + 48),
                  v37,
                  p_Buf1);
          v8 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2A8u, 0LL);
            goto LABEL_53;
          }
          v5 = 1;
          if ( (*((_BYTE *)this + 232) & 4) != 0 )
          {
            AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
            CAnimationLoggingManager::LogDebugPropertyUpdate(
              AnimationLoggingManagerNoRef,
              a2,
              2LL,
              *((_QWORD *)this + 21),
              *((_DWORD *)this + 53),
              *((_DWORD *)this + 52),
              *((_DWORD *)this + 48),
              *((_QWORD *)this + 25),
              &Buf1);
          }
        }
        v22 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int128 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        if ( !v5 )
          goto LABEL_68;
        goto LABEL_64;
      }
LABEL_26:
      DWORD1(Buf1) = DWORD1(v39);
      v37 = 35;
LABEL_27:
      LODWORD(Buf1) = v39;
LABEL_28:
      v38 = 1;
      goto LABEL_29;
    }
    if ( (unsigned __int8)CExpressionValue::operator==(&v39)
      && !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 272LL))(this)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 128LL))(a2) )
    {
LABEL_68:
      v8 = 0;
      goto LABEL_71;
    }
    if ( *((_DWORD *)this + 36) == 11 )
      v23 = (char *)*((_QWORD *)this + 17);
    else
      v23 = (char *)this + 72;
    v24 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 96LL))(
            a2,
            *((unsigned int *)this + 48),
            *((unsigned int *)this + 38),
            v23);
    v8 = v24;
    if ( v24 >= 0 )
    {
      if ( (*((_BYTE *)this + 232) & 4) != 0 )
      {
        v26 = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
        CAnimationLoggingManager::LogDebugPropertyUpdate(
          v26,
          a2,
          2LL,
          *((_QWORD *)this + 21),
          *((_DWORD *)this + 53),
          *((_DWORD *)this + 52),
          *((_DWORD *)this + 48),
          0LL,
          (char *)this + 72);
      }
LABEL_64:
      if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *, __int64))(*(_QWORD *)this + 56LL))(this, 90LL) )
      {
        v27 = *((_QWORD *)this + 6);
        if ( v27 )
        {
          v28 = *(CAnimationLoggingManager **)(v27 + 64);
          if ( v28 )
            CAnimationLoggingManager::LogKeyframeAnimationDirtiedTarget(v28, this);
        }
      }
      goto LABEL_68;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x288u, 0LL);
  }
LABEL_71:
  v29 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return v8;
}

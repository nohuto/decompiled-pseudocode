/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1C0205774 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBU.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0205E2C (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C0204338 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0204774 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C02047AC (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C0205048 (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C02051A8 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0205BE8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0205E2C (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0206590 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

__int64 __fastcall xxxWindowHitTestWithTargeting(
        struct tagWND **a1,
        struct tagPOINT a2,
        __int64 a3,
        struct tagRECT *a4,
        int a5)
{
  __int64 v5; // r15
  int v6; // r13d
  struct tagPOINT v8; // rbx
  const struct tagWND *v9; // rsi
  struct tagRECT v11; // xmm6
  struct tagTOUCHTARGETINGCONTACT *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r12d
  unsigned int Prop; // r12d
  _OWORD *v18; // rax
  struct tagRECT *v19; // r8
  __int128 v20; // xmm1
  __int64 v21; // rcx
  int v22; // eax
  struct tagRECT *v23; // r12
  struct tagPOINT *v24; // rax
  const struct tagWND *v25; // rax
  int v27; // [rsp+48h] [rbp-41h] BYREF
  int started; // [rsp+4Ch] [rbp-3Dh]
  int v29; // [rsp+50h] [rbp-39h] BYREF
  struct tagWND *v30; // [rsp+58h] [rbp-31h]
  struct tagRECT v31; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v32[6]; // [rsp+78h] [rbp-11h] BYREF
  int v33; // [rsp+E8h] [rbp+5Fh] BYREF
  struct tagPOINT v34; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v35; // [rsp+100h] [rbp+77h]

  v35 = a4;
  v34 = a2;
  v32[2] = 0LL;
  v5 = 0LL;
  v27 = 0;
  v6 = 0;
  v33 = 0;
  v30 = 0LL;
  v8 = a2;
  started = 0;
  v9 = (const struct tagWND *)a1;
  v29 = -2;
  v11 = *a4;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v13 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v30 = a1[13];
    started = CanPointStartResize(v30, v13, a2);
  }
  v14 = gptiCurrent;
  v32[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v32;
  v32[1] = 0LL;
LABEL_46:
  if ( v9 && !v6 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways((__int64)v9, (__int64)v32);
      v15 = *(_QWORD *)(a3 + 40);
      v14 = 0LL;
      if ( !*(_DWORD *)(v15 + 176) && !*(_DWORD *)(v15 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      v16 = IsCompositionInputWindow(v9);
      if ( !v16 && (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 0x10) == 0 )
        goto LABEL_45;
      v14 = *((_QWORD *)v9 + 5);
      if ( (*(_BYTE *)(v14 + 26) & 8) != 0 && (*(_BYTE *)(v14 + 24) & 0x20) != 0 )
        goto LABEL_45;
      if ( (unsigned int)IsWindowDesktopComposed(v9) && (unsigned int)GetWindowCloakState(v9)
        || started && TouchTargetingIsSpecialTarget(v30, v9) )
      {
        goto LABEL_45;
      }
      v27 = 0;
      if ( *(_DWORD *)(a3 + 88) || v16 )
        Prop = GetProp((__int64)v9, (unsigned __int16)gatomPtrTargetFlags, 1u);
      else
        Prop = 4;
      if ( *(_DWORD *)(a3 + 84) )
      {
        v18 = (_OWORD *)*((_QWORD *)v9 + 27);
        if ( v18 )
        {
          v19 = *(struct tagRECT **)(a3 + 40);
          *(_OWORD *)(a3 + 104) = *v18;
          *(_OWORD *)(a3 + 120) = v18[1];
          *(_OWORD *)(a3 + 136) = v18[2];
          v20 = v18[3];
          *(_QWORD *)(a3 + 96) = a3 + 104;
          *(_OWORD *)(a3 + 152) = v20;
          ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v34, v19, 1);
          TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v35, 1);
          v8 = v34;
        }
      }
      v31 = *v35;
      v21 = xxxWindowHitTestFromTargetingProperty(
              (unsigned __int64 *)v9,
              v8,
              a3,
              &v33,
              (unsigned __int16)Prop,
              (__int64)&v31);
      if ( *(_DWORD *)(a3 + 88) < 0xFu )
      {
        v22 = v33;
      }
      else
      {
        v22 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v33 = 0;
      }
      if ( v22 )
      {
        v31 = *v35;
        v21 = xxxTargetingHitTest(v9, a2, v8, a3, &v27, &v31, Prop, a5);
      }
      if ( !v5 && v21 )
        v5 = v21;
      if ( *(const struct tagWND **)(a3 + 168) == v9 )
        v6 = 1;
      xxxSendNCHitTest(
        (__int64 *)v9,
        a2,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v29,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v23 = v35;
      if ( v29 != -1 )
        ClipContact(v9, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), (unsigned int)v27, v35);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v14 = *(_QWORD *)(a3 + 96);
        if ( v14 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform((const struct _D3DMATRIX *)v14, &v34, *(struct tagRECT **)(a3 + 40), 0);
            v24 = *(struct tagPOINT **)(a3 + 40);
            *(_QWORD *)(a3 + 96) = 0LL;
            v8 = v34;
            *v23 = v11;
            v24[4] = a2;
          }
        }
      }
      if ( !v6 )
      {
LABEL_45:
        v9 = (const struct tagWND *)*((_QWORD *)v9 + 11);
        goto LABEL_46;
      }
      v25 = (const struct tagWND *)*((_QWORD *)v9 + 15);
      if ( !v25 || v25 == v9 )
        break;
      v9 = (const struct tagWND *)*((_QWORD *)v9 + 15);
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))ThreadUnlock1)(v14, a2, a3);
  return v5;
}

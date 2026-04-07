/*
 * XREFs of ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x1800D5E24
 * Callers:
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800D6088 (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800D5FA0 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddBorderInstructions(
        struct tagRECT *this,
        RECT *lprc,
        int a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v8; // ebx
  LONG right; // r9d
  int v10; // edx
  LONG left; // r10d
  int v12; // eax
  LONG bottom; // r11d
  int v14; // eax
  LONG top; // ebx
  struct tagRECT *v16; // rdi
  double v17; // xmm0_8
  int v18; // eax
  int v19; // eax
  struct tagRECT v21; // [rsp+30h] [rbp-29h] BYREF
  LONG v22; // [rsp+40h] [rbp-19h]
  int v23; // [rsp+44h] [rbp-15h]
  LONG v24; // [rsp+48h] [rbp-11h]
  LONG v25; // [rsp+4Ch] [rbp-Dh]
  LONG v26; // [rsp+50h] [rbp-9h]
  LONG v27; // [rsp+54h] [rbp-5h]
  int v28; // [rsp+58h] [rbp-1h]
  int v29; // [rsp+5Ch] [rbp+3h]
  int v30; // [rsp+60h] [rbp+7h]
  LONG v31; // [rsp+64h] [rbp+Bh]
  LONG v32; // [rsp+68h] [rbp+Fh]
  int v33; // [rsp+6Ch] [rbp+13h]
  __int64 v34; // [rsp+70h] [rbp+17h] BYREF

  v8 = 0;
  if ( !IsRectEmpty(lprc) )
  {
    right = lprc->right;
    v10 = 2 * a3;
    left = lprc->left;
    v12 = 0;
    if ( right - lprc->left >= 0 )
      v12 = lprc->right - lprc->left;
    if ( v12 < v10 )
      goto LABEL_13;
    bottom = lprc->bottom;
    v14 = 0;
    top = lprc->top;
    if ( bottom - top >= 0 )
      v14 = lprc->bottom - top;
    if ( v14 < v10 )
    {
LABEL_13:
      v19 = CProjectionBorderVisual::_AddRectInstruction((CProjectionBorderVisual *)this, this + 18, a4);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x4Cu);
    }
    else
    {
      v16 = &v21;
      v21.left = left;
      v21.top = top;
      v21.right = right;
      v22 = left;
      v24 = right;
      v25 = bottom;
      v17 = (double)a3 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53);
      v26 = left;
      v32 = right;
      v23 = bottom - (int)v17;
      v29 = v23;
      v33 = v23;
      v21.bottom = top + (int)v17;
      v28 = left + (int)v17;
      v27 = v21.bottom;
      v30 = right - (int)v17;
      v31 = v21.bottom;
      while ( 1 )
      {
        v18 = CProjectionBorderVisual::_AddRectInstruction((CProjectionBorderVisual *)this, v16, a4);
        v8 = v18;
        if ( v18 < 0 )
          break;
        if ( ++v16 == (struct tagRECT *)&v34 )
          return v8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x5Cu);
    }
  }
  return v8;
}

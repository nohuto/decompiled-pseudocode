/*
 * XREFs of ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804716CC
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x1804763F0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??0ViewOptions@@QEAA@$$QEAU0@@Z @ 0x18022DFB6 (--0ViewOptions@@QEAA@$$QEAU0@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18046A3B8 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetViewOptions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  int v6; // eax
  void *v7; // rbx
  signed __int64 v8; // rdi
  const void *v9; // rdx
  char *v10; // rbx
  _BYTE v12[4]; // [rsp+28h] [rbp-48h] BYREF
  int v13; // [rsp+2Ch] [rbp-44h]
  BOOL v14; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+34h] [rbp-3Ch]
  __int128 v16; // [rsp+38h] [rbp-38h]
  void *v17[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]

  v16 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v12[0] = *(_BYTE *)(a2 + 40) != 0;
  v12[1] = *(_BYTE *)(a2 + 41) != 0;
  v12[2] = *(_BYTE *)(a2 + 42) != 0;
  v12[3] = *(_BYTE *)(a2 + 43) != 0;
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    v13 = 1;
  }
  else
  {
    v5 = 0;
    if ( *(_DWORD *)(a2 + 28) == 2 )
      v5 = 2;
    v13 = v5;
  }
  v14 = *(_DWORD *)(a2 + 32) == 1;
  if ( *(_DWORD *)(a2 + 36) == 1 )
  {
    v15 = 1;
  }
  else
  {
    v6 = 0;
    if ( *(_DWORD *)(a2 + 36) == 2 )
      v6 = 2;
    v15 = v6;
  }
  *(float *)&v16 = (float)((float)a4 * *(float *)(a2 + 48)) / 100.0;
  *((float *)&v16 + 1) = (float)((float)a4 * *(float *)(a2 + 52)) / 100.0;
  *((float *)&v16 + 2) = (float)((float)a4 * *(float *)(a2 + 56)) / 100.0;
  *((float *)&v16 + 3) = (float)((float)a4 * *(float *)(a2 + 60)) / 100.0;
  if ( v17 != (void **)a3 )
  {
    v7 = *(void **)a3;
    v8 = *(_QWORD *)(a3 + 8) - *(_QWORD *)a3;
    if ( v8 >> 4 )
      std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(v17, v8 >> 4);
    v9 = v7;
    v10 = (char *)v17[0];
    memmove_0(v17[0], v9, v8);
    v17[1] = &v10[v8];
  }
  ViewOptions::ViewOptions(a1, (__int64)v12);
  std::vector<Geometry::CRect>::_Tidy((__int64)v17);
  return a1;
}

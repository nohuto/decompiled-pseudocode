/*
 * XREFs of ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180523CF8
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x180527AE0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??0ViewOptions@@QEAA@$$QEAU0@@Z @ 0x1802DA85E (--0ViewOptions@@QEAA@$$QEAU0@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x18051C52C (-_Clear_and_reserve_geometric@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetViewOptions(__int64 a1, __m128 *a2, __int64 a3, int a4)
{
  int v5; // eax
  int v6; // eax
  void *v7; // rbx
  signed __int64 v8; // rdi
  const void *v9; // rdx
  char *v10; // rbx
  _BYTE v12[4]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch]
  BOOL v14; // [rsp+38h] [rbp-38h]
  int v15; // [rsp+3Ch] [rbp-34h]
  __m128 v16; // [rsp+40h] [rbp-30h]
  void *v17[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]

  v16 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v12[0] = a2[2].m128_i8[8] != 0;
  v12[1] = a2[2].m128_i8[9] != 0;
  v12[2] = a2[2].m128_i8[10] != 0;
  v12[3] = a2[2].m128_i8[11] != 0;
  if ( a2[1].m128_i32[3] == 1 )
  {
    v13 = 1;
  }
  else
  {
    v5 = 0;
    if ( a2[1].m128_i32[3] == 2 )
      v5 = 2;
    v13 = v5;
  }
  v14 = a2[2].m128_i32[0] == 1;
  if ( a2[2].m128_i32[1] == 1 )
  {
    v15 = 1;
  }
  else
  {
    v6 = 0;
    if ( a2[2].m128_i32[1] == 2 )
      v6 = 2;
    v15 = v6;
  }
  v16 = _mm_div_ps(
          _mm_mul_ps(
            a2[3],
            _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)a4), (__m128)COERCE_UNSIGNED_INT((float)a4), 0)),
          (__m128)_xmm);
  if ( v17 != (void **)a3 )
  {
    v7 = *(void **)a3;
    v8 = *(_QWORD *)(a3 + 8) - *(_QWORD *)a3;
    if ( v8 >> 4 )
      std::vector<Geometry::CRect>::_Clear_and_reserve_geometric(v17, v8 >> 4);
    v9 = v7;
    v10 = (char *)v17[0];
    memmove_0(v17[0], v9, v8);
    v17[1] = &v10[v8];
  }
  ViewOptions::ViewOptions(a1, (__int64)v12);
  std::vector<Geometry::CRect>::_Tidy((__int64)v17);
  return a1;
}

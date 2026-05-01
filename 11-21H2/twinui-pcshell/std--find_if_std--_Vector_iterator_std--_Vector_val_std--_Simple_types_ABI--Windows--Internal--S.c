/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_26cca3a0c1c2e804cd017d0045782f16___ @ 0x1805FFCD4
 * Callers:
 *     ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x18060239C (-DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x18036F50C (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_26cca3a0c1c2e804cd017d0045782f16___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v8; // rsi
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm1_4
  _DWORD v16[4]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  if ( a2 != a3 )
  {
    v8 = a2 + 16;
    do
    {
      if ( *(_DWORD *)(v8 + 8) <= 1u )
      {
        v9 = *(float *)(v8 - 8);
        v10 = *(float *)(v8 - 4);
        v11 = (int)v9;
        v12 = v9 + *(float *)v8;
        v16[0] = v11;
        v13 = (int)v10;
        v14 = v10 + *(float *)(v8 + 4);
        v16[1] = v13;
        v16[2] = (int)v12;
        v16[3] = (int)v14;
        if ( Geometry::CRect::Intersects((Geometry::CRect *)v16, a4) )
          break;
      }
      v6 += 32LL;
      v8 += 32LL;
    }
    while ( v6 != v5 );
  }
  *a1 = v6;
  return a1;
}

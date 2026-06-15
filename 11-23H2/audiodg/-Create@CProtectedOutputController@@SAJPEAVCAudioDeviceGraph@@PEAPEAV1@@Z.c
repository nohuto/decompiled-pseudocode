/*
 * XREFs of ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x14005DE58
 * Callers:
 *     ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14005FB30 (-GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CProtectedOutputController::Create(
        struct CAudioDeviceGraph *a1,
        struct CProtectedOutputController **a2)
{
  _QWORD *v4; // rax

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v4[1] = a1;
  *v4 = &CProtectedOutputController::`vftable';
  v4[2] = 0LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *((_DWORD *)v4 + 14) = 10;
  *((_DWORD *)v4 + 16) = 0;
  *a2 = (struct CProtectedOutputController *)v4;
  return 0LL;
}

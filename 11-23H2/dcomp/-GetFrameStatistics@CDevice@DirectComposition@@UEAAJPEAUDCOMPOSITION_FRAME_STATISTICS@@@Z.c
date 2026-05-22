/*
 * XREFs of ?GetFrameStatistics@CDevice@DirectComposition@@UEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x180076300
 * Callers:
 *     ?GetFrameStatistics@CDevice@DirectComposition@@W7EAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1800A8B90 (-GetFrameStatistics@CDevice@DirectComposition@@W7EAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z.c)
 *     ?GetFrameStatistics@CDevice@DirectComposition@@WBA@EAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1800A8BB0 (-GetFrameStatistics@CDevice@DirectComposition@@WBA@EAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CDevice::GetFrameStatistics(
        DirectComposition::CDevice *this,
        struct DCOMPOSITION_FRAME_STATISTICS *a2)
{
  __int64 result; // rax
  enum D3D_FEATURE_LEVEL v4[6]; // [rsp+28h] [rbp-30h] BYREF

  result = NtDCompositionGetFrameStatistics(a2, v4);
  if ( !(_DWORD)result )
    goto LABEL_2;
  if ( (int)result > -1073741801 )
  {
    if ( (_DWORD)result == -1073741790 )
    {
      result = 2147942405LL;
      goto LABEL_24;
    }
    if ( (_DWORD)result != -1073741788 )
    {
      if ( (_DWORD)result != -1073741637 )
        goto LABEL_4;
LABEL_21:
      result = 2147942487LL;
      goto LABEL_24;
    }
LABEL_22:
    result = 2147942406LL;
    goto LABEL_24;
  }
  switch ( (_DWORD)result )
  {
    case 0xC0000017:
      result = 2147942414LL;
      goto LABEL_24;
    case 0x803E0006:
      result = 2291664896LL;
      goto LABEL_24;
    case 0xC0000001:
      result = 2147500037LL;
      goto LABEL_24;
    case 0xC0000002:
      result = 2147500033LL;
      goto LABEL_24;
    case 0xC0000008:
      goto LABEL_22;
    case 0xC000000D:
      goto LABEL_21;
  }
LABEL_4:
  result = (unsigned int)result | 0x10000000;
  if ( (int)result >= 0 )
  {
LABEL_2:
    DirectComposition::CDevice::s_minSafeFeatureLevel = v4[0];
    return result;
  }
LABEL_24:
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *((_OWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
  }
  return result;
}

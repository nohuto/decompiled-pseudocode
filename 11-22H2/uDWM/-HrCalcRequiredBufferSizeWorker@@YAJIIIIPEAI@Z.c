/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x18005A3E4
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18005A398 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18010F11C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r11
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a2;
  v7 = 0;
  if ( !a4 )
    goto LABEL_8;
  v8 = a4 - 1;
  v9 = a3 * (unsigned __int64)a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v13 = 875;
    goto LABEL_15;
  }
  if ( (int)v9 + 7 < (unsigned int)v9 )
  {
    v13 = 876;
    goto LABEL_15;
  }
  v10 = (unsigned int)(v9 + 7) >> 3;
  if ( (unsigned int)v6 < v10 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x371u, 0LL);
    return v7;
  }
  v11 = v6 * v8;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = 884;
    goto LABEL_15;
  }
  if ( (unsigned int)v11 + v10 < (unsigned int)v11 )
  {
    v13 = 885;
LABEL_15:
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, v13, 0LL);
    return v7;
  }
  v5 = v11 + v10;
LABEL_8:
  *a5 = v5;
  return v7;
}

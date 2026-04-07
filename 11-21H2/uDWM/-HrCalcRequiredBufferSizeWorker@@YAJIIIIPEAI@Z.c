/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x180058AF4
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180058AA8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1801089EC (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a2;
  if ( !a4 )
    goto LABEL_7;
  v7 = (unsigned int)(a4 - 1);
  v8 = a3 * (unsigned __int64)a1;
  if ( v8 > 0xFFFFFFFF )
  {
    v13 = 875;
    goto LABEL_14;
  }
  if ( (int)v8 + 7 < (unsigned int)v8 )
  {
    v13 = 876;
    goto LABEL_14;
  }
  v9 = (unsigned int)(v8 + 7) >> 3;
  if ( (unsigned int)v6 < v9 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x371u);
    return v11;
  }
  v10 = v6 * v7;
  if ( v10 > 0xFFFFFFFF )
  {
    v13 = 884;
    goto LABEL_14;
  }
  v5 = v9 + v10;
  if ( v9 + (unsigned int)v10 < (unsigned int)v10 )
  {
    v13 = 885;
LABEL_14:
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, v13);
    return v11;
  }
LABEL_7:
  v11 = 0;
  *a5 = v5;
  return v11;
}

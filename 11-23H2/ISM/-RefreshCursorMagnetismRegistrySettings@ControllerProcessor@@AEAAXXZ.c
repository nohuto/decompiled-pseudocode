/*
 * XREFs of ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x18019741C
 * Callers:
 *     _lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_ @ 0x1801946D0 (_lambda_828562b8234057b7c70d01bfff3fe312_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180196490 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     _lambda_9421d204e635201636d0a16c341872b8_::operator() @ 0x180194FAC (_lambda_9421d204e635201636d0a16c341872b8_--operator().c)
 *     ?ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z @ 0x18019607C (-ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z.c)
 */

void __fastcall ControllerProcessor::RefreshCursorMagnetismRegistrySettings(ControllerProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // eax
  ControllerProcessor *v10; // rcx
  __int64 v11; // rcx
  ControllerProcessor *v12; // rcx
  ControllerProcessor *v13; // rcx
  __m128 v14; // xmm7
  ControllerProcessor *v15; // rcx
  __m128 v16; // xmm6
  ControllerProcessor *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+40h] BYREF

  v20 = 360;
  v21 = lambda_9421d204e635201636d0a16c341872b8_::operator()((__int64)this, L"VelocityInDIPSPerSecond", &v20);
  v20 = 40;
  v22 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v2, L"DistanceThresholdInDIPS", &v20);
  v20 = 5;
  v23 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v3, L"AttractionRectInsetInDIPS", &v20);
  v20 = 50;
  v5 = (unsigned int)lambda_9421d204e635201636d0a16c341872b8_::operator()(v4, L"MagnetismDelayInMilliseconds", &v20);
  v20 = 16;
  v7 = (unsigned int)lambda_9421d204e635201636d0a16c341872b8_::operator()(
                       v6,
                       L"MagnetismUpdateIntervalInMilliseconds",
                       &v20);
  v20 = 100;
  v9 = lambda_9421d204e635201636d0a16c341872b8_::operator()(
         v8,
         L"ClosestInteractiveBoundsUpdateIntervalInMilliseconds",
         &v20);
  *((_QWORD *)this + 966) = v9;
  v20 = 100;
  v20 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v9, L"SearchWidthInDIPS", &v20);
  *((_DWORD *)this + 1934) = ControllerProcessor::ConvertDIPSToPixels(v10, &v20);
  v20 = 100;
  v20 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v11, L"SearchHeightInDIPS", &v20);
  *((_DWORD *)this + 1935) = ControllerProcessor::ConvertDIPSToPixels(v12, &v20);
  v14 = 0LL;
  v14.m128_f32[0] = (float)ControllerProcessor::ConvertDIPSToPixels(v13, &v21) * (float)((float)(int)v7 / 1000.0);
  v16 = 0LL;
  v16.m128_f32[0] = (float)ControllerProcessor::ConvertDIPSToPixels(v15, &v22);
  v18 = ControllerProcessor::ConvertDIPSToPixels(v17, &v23);
  *((_QWORD *)this + 949) = _mm_unpacklo_ps(v14, v16).m128_u64[0];
  *((_DWORD *)this + 1900) = v18;
  *((_QWORD *)this + 963) = 10000 * v5;
  v19 = 10000LL * *((_QWORD *)this + 966);
  *((_QWORD *)this + 964) = 10000 * v7;
  *((_QWORD *)this + 965) = v19;
}

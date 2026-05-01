/*
 * XREFs of _lambda_c9e41158417a66ad4ebde63763de7538_::operator() @ 0x1801946AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9e41158417a66ad4ebde63763de7538___::Run @ 0x1801957B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c9e41158417a66ad4ebde63763de7538___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall lambda_c9e41158417a66ad4ebde63763de7538_::operator()(__int64 a1)
{
  int v1; // edx
  unsigned int LastError; // edi
  float v4; // xmm2_4
  float v5; // xmm1_4
  __m128i v6; // xmm0
  int v7; // ecx
  HRGN RectRgn; // rax
  HRGN v9; // rsi
  float v10; // xmm2_4
  int v11; // r8d
  int v12; // ecx
  HRGN v13; // rax
  HRGN v14; // r8
  const char *v15; // r9
  HWND v16; // rcx
  const char *v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hrgnSrc2; // [rsp+30h] [rbp+8h] BYREF
  HRGN hrgnDst; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int)*(float *)(a1 + 16);
  LastError = 0;
  hrgnDst = 0LL;
  v4 = *(float *)(a1 + 20);
  v5 = (float)v1 + *(float *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 8) )
  {
    v6 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 28));
    v7 = 0;
    v4 = v4 - _mm_cvtepi32_ps(v6).m128_f32[0];
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 28);
  }
  RectRgn = CreateRectRgn(v7, v1, (int)v4, (int)v5);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hrgnDst,
    RectRgn);
  v9 = hrgnDst;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( *(float *)(a1 + 44) > 0.0 )
    {
      v10 = *(float *)(a1 + 48);
      if ( v10 > 0.0 )
      {
        v11 = *(_DWORD *)(a1 + 28);
        hrgnSrc2 = 0LL;
        if ( *(_BYTE *)(a1 + 8) )
        {
          v12 = (int)(float)(*(float *)(a1 + 20) - (float)v11);
          v11 += v12;
        }
        else
        {
          v12 = 0;
        }
        v13 = CreateRectRgn(v12, (int)*(float *)(a1 + 40), v11, (int)(float)((float)(int)*(float *)(a1 + 40) + v10));
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&hrgnSrc2,
          v13);
        v14 = hrgnSrc2;
        hrgnSrc2 = 0LL;
        if ( CombineRgn(v9, v9, v14, 2) != 3 )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x2F4,
                        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                        v15);
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
          goto LABEL_15;
        }
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
      }
    }
  }
  v16 = *(HWND *)a1;
  hrgnDst = 0LL;
  if ( !SetWindowRgn(v16, v9, 1) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2F7,
                  (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                  v17);
LABEL_15:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
  return LastError;
}

/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180058650
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18001395C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18005883C (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18005A03C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  char *v5; // rcx
  int v9; // eax
  int v10; // ebx
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  INT v16; // r8d
  INT v17; // r9d
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // r8d
  signed int v21; // ecx
  unsigned int v22; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v24; // r8d
  unsigned int v25; // r14d
  unsigned __int64 v26; // r15
  void *v27; // r13
  int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-79h]
  void *v31; // [rsp+28h] [rbp-71h]
  struct IUnknown *v32; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v35; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-25h] BYREF
  __int64 v37; // [rsp+78h] [rbp-21h] BYREF
  void *v38; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v39; // [rsp+88h] [rbp-11h]
  char *v40; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v41[4]; // [rsp+98h] [rbp-1h] BYREF

  v39 = a4;
  v37 = 0LL;
  v5 = (char *)this + 88;
  v32 = 0LL;
  v40 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(*((_QWORD *)this + 27), &IID_IWICBitmap, &v37);
  if ( v37 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v37 + 64LL))(
           v37,
           a2,
           (unsigned int)a3,
           &v32);
    v10 = v9;
    if ( v9 < 0 )
    {
      v30 = 94;
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v32->lpVtbl[1].QueryInterface)(
             v32,
             &v36,
             &v35);
      v10 = v9;
      if ( v9 < 0 )
      {
        v30 = 96;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v32->lpVtbl[1].AddRef)(v32, &v34);
        v10 = v9;
        if ( v9 < 0 )
        {
          v30 = 97;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v32->lpVtbl[1].Release)(
                 v32,
                 &v33,
                 &v38);
          v10 = v9;
          if ( v9 < 0 )
          {
            v30 = 98;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v36,
                   v35,
                   (CWICBitmapWrapper *)((char *)this + 176),
                   v34,
                   v33,
                   v38,
                   a3,
                   a4,
                   0,
                   v32);
            v10 = v9;
            if ( v9 >= 0 )
            {
              v32 = 0LL;
              goto LABEL_10;
            }
            v30 = 114;
          }
        }
      }
    }
    v12 = v9;
    goto LABEL_53;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292412, 0x84u);
    goto LABEL_54;
  }
  *(_OWORD *)v41 = 0LL;
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v16 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v16)
      || (v17 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v17) )
    {
      v31 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xBAu);
    }
    else
    {
      v18 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v41 = *a2;
      v19 = v41[2];
      v41[0] = v18;
      if ( v18 < 0 )
      {
        v19 = v18 + v41[2];
        v18 = 0;
        v41[0] = 0;
        v41[2] = v19;
      }
      if ( v19 + v18 > v16 )
      {
        v19 = v16 - v18;
        v41[2] = v16 - v18;
      }
      v20 = v41[1];
      v21 = v41[3];
      if ( (v41[1] & 0x80000000) != 0 )
      {
        v21 = v41[1] + v41[3];
        v41[1] = 0;
        v41[3] = v21;
        v20 = 0;
      }
      if ( (int)(v21 + v20) > v17 )
      {
        v21 = v17 - v20;
        v41[3] = v17 - v20;
      }
      if ( v19 <= 0 || v21 <= 0 )
      {
        v31 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xB2u);
      }
    }
  }
  else
  {
    v22 = *((_DWORD *)this + 41);
    v41[2] = *((_DWORD *)this + 40);
    v41[3] = v22;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 44));
  if ( !PixelFormatSize || v24 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v30 = 199;
    goto LABEL_52;
  }
  v25 = (((v24 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v26 = v25 * (unsigned __int64)*((unsigned int *)this + 41);
  if ( v26 > 0xFFFFFFFF )
  {
    v30 = 201;
LABEL_52:
    v12 = -2147024362;
    v10 = -2147024362;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v30);
    goto LABEL_54;
  }
  v27 = (void *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  (unsigned int)v26);
  if ( !v27 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xCCu);
    goto LABEL_54;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, void *, void *))(**((_QWORD **)this + 27)
                                                                                          + 56LL))(
          *((_QWORD *)this + 27),
          v41,
          v25,
          (unsigned int)v26,
          v27,
          v31);
  v10 = v28;
  if ( v28 >= 0 )
  {
    v10 = CBitmap::HrLock(
            (CWICBitmapWrapper *)((char *)this - 24),
            v41[2],
            v41[3],
            (CWICBitmapWrapper *)((char *)this + 176),
            v25,
            v26,
            v27,
            WICBitmapLockRead,
            v39,
            1,
            0LL);
    v15 = (unsigned int)v10;
    if ( v10 >= 0 )
      goto LABEL_54;
    v29 = 219;
  }
  else
  {
    LODWORD(v15) = v28;
    v29 = 209;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v29);
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v27);
LABEL_54:
  if ( v32 )
    ((void (__fastcall *)(struct IUnknown *, __int64, __int64, __int64))v32->lpVtbl->Release)(v32, v13, v14, v15);
LABEL_10:
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v40);
  return (unsigned int)v10;
}

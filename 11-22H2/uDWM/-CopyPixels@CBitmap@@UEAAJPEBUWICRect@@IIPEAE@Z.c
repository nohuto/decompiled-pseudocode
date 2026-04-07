/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18010F650
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800667E0 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18004F554 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18010F11C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18010F928 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18010FB9C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  char *v6; // rcx
  unsigned int v10; // ebx
  int v11; // r9d
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-71h]
  unsigned int v16; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v18; // [rsp+58h] [rbp-39h] BYREF
  int v19; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  char *v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  int v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+84h] [rbp-Dh]
  struct tagRECT v26; // [rsp+88h] [rbp-9h] BYREF

  v18 = 0LL;
  v6 = (char *)this + 96;
  v19 = 0;
  v17 = 0;
  Src = 0LL;
  v16 = 0;
  v22 = v6;
  if ( v6[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
  if ( !a5 )
  {
    v10 = -2147024809;
    v15 = 160;
LABEL_5:
    v11 = v10;
    goto LABEL_27;
  }
  if ( !a2 )
  {
    v12 = *((_DWORD *)this + 42);
    v23 = 0LL;
    if ( v12 > 0x7FFFFFFF )
    {
      v24 = -1;
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xA8u);
      goto LABEL_28;
    }
    v24 = v12;
    if ( *((_DWORD *)this + 43) > 0x7FFFFFFFu )
    {
      v25 = -1;
      v10 = -2147024362;
      v15 = 169;
      goto LABEL_5;
    }
    v25 = *((_DWORD *)this + 43);
    a2 = (const struct WICRect *)&v23;
  }
  v13 = CBitmap::HrCheckPixelRect((CBitmap *)((char *)this - 16), a2, &v26);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v13 = HrCheckBufferSize(*((_DWORD *)this + 46), a3, a2, a4);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v18);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v18 + 32LL))(v18, &v19, &v17);
        v10 = v13;
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 40LL))(v18, &v20);
          v10 = v13;
          if ( v13 >= 0 )
          {
            v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    &v16,
                    &Src);
            v10 = v13;
            if ( v13 >= 0 )
            {
              v13 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                      a2->Width,
                      v17,
                      v20,
                      v16,
                      Src,
                      a3,
                      a4,
                      a5);
              v10 = v13;
              if ( v13 >= 0 )
                goto LABEL_28;
              v15 = 199;
            }
            else
            {
              v15 = 186;
            }
          }
          else
          {
            v15 = 184;
          }
        }
        else
        {
          v15 = 183;
        }
      }
      else
      {
        v15 = 181;
      }
    }
    else
    {
      v15 = 179;
    }
  }
  else
  {
    v15 = 174;
  }
  v11 = v13;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v15);
LABEL_28:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v22);
  return v10;
}

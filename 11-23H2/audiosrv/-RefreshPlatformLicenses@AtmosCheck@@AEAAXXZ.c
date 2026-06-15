/*
 * XREFs of ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x18003969C
 * Callers:
 *     _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180039494 (_lambda_25a52f7b70a5b2ddb41b08d731639da5_--operator().c)
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x18005D874 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18015CED8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A08C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x1800EE76C (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::RefreshPlatformLicenses(AtmosCheck *this, __int64 a2, __int64 a3, __int64 a4)
{
  int PlatformSpatialLicenseOverrides; // eax
  unsigned int v6; // edx
  struct _EVENT_DATA_DESCRIPTOR *v7; // r8
  _BYTE *v8; // r9
  _BYTE *v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  unsigned int v12; // r10d
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-19h] BYREF
  ULONGLONG v19; // [rsp+38h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v22; // [rsp+80h] [rbp+37h]
  int v23; // [rsp+88h] [rbp+3Fh]
  int v24; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4) )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20.Ptr = (ULONGLONG)&v18;
    v20.Size = 0;
    v20.Type = 1;
    PlatformSpatialLicenseOverrides = TryGetPlatformSpatialLicenseOverrides(&v20.Size, &v18, 0LL);
    if ( v20.Type )
      *(_QWORD *)(v20.Ptr + 8) = v20.Size;
    if ( PlatformSpatialLicenseOverrides < 0 )
    {
      if ( PlatformSpatialLicenseOverrides != -2147467263 && (unsigned int)dword_1801CD2B8 > 2 )
      {
        LODWORD(v20.Ptr) = PlatformSpatialLicenseOverrides;
        v22 = &v20;
        v23 = 4;
        v24 = 0;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801CD2B8,
          (unsigned __int8 *)dword_180198E9C,
          0LL,
          0LL,
          3u,
          &v21);
      }
    }
    else
    {
      if ( (unsigned int)dword_1801CD2B8 > 5 )
      {
        v20.Ptr = v19;
        v22 = &v20;
        v23 = 8;
        v24 = 0;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801CD2B8,
          (unsigned __int8 *)dword_180198CC1,
          0LL,
          0LL,
          3u,
          &v21);
      }
      v6 = 0;
      v7 = &v20;
      v8 = (char *)this + 273;
      v9 = (char *)this + 273;
      do
      {
        LOBYTE(v7->Ptr) = *v9;
        *v9 = 0;
        ++v6;
        v7 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v7 + 1);
        v9 += 48;
      }
      while ( v6 < 7 );
      v10 = 0;
      if ( v19 )
      {
        v11 = 0LL;
        do
        {
          v12 = 0;
          v13 = 0LL;
          v14 = (_QWORD *)(v18 + 16 * v11);
          while ( 1 )
          {
            v15 = *(_QWORD *)((char *)this + 48 * (int)v12 + 276) - *v14;
            if ( !v15 )
              v15 = *(_QWORD *)((char *)this + 48 * (int)v12 + 284) - v14[1];
            if ( !v15 )
              break;
            ++v12;
            ++v13;
            if ( v12 >= 7 )
              goto LABEL_18;
          }
          *((_BYTE *)this + 48 * v13 + 273) = 1;
LABEL_18:
          v11 = ++v10;
        }
        while ( v10 < v19 );
      }
      v16 = 0LL;
      v17 = &v20;
      while ( *v8 == LOBYTE(v17->Ptr) )
      {
        v16 = (unsigned int)(v16 + 1);
        v8 += 48;
        v17 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v17 + 1);
        if ( (unsigned int)v16 >= 7 )
          goto LABEL_30;
      }
      if ( *((_QWORD *)this + 5) )
      {
        if ( (unsigned int)dword_1801CD2B8 > 5 )
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1801CD2B8,
            (unsigned __int8 *)dword_180198B00,
            0LL,
            0LL,
            2u,
            &v20);
        (***((void (__fastcall ****)(_QWORD, __int64))this + 5))(*((_QWORD *)this + 5), v16);
      }
    }
LABEL_30:
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(&v18);
  }
}

/*
 * XREFs of ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x180041C20
 * Callers:
 *     _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180040DE0 (_lambda_25a52f7b70a5b2ddb41b08d731639da5_--operator().c)
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x180058044 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180155EE8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::RefreshPlatformLicenses(AtmosCheck *this)
{
  int PlatformSpatialLicenseOverrides; // eax
  unsigned int v3; // edx
  struct _EVENT_DATA_DESCRIPTOR *v4; // r8
  _BYTE *v5; // r10
  _BYTE *v6; // rcx
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v13; // rcx
  void (__fastcall ***v14)(_QWORD, __int64, struct _EVENT_DATA_DESCRIPTOR *); // rcx
  LPVOID pv; // [rsp+30h] [rbp-19h] BYREF
  ULONGLONG v16; // [rsp+38h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
  {
    pv = 0LL;
    v16 = 0LL;
    v17.Ptr = (ULONGLONG)&pv;
    v17.Size = 0;
    v17.Type = 1;
    PlatformSpatialLicenseOverrides = TryGetPlatformSpatialLicenseOverrides(&v17.Size, &pv, 0LL);
    if ( v17.Type )
      *(_QWORD *)(v17.Ptr + 8) = v17.Size;
    if ( PlatformSpatialLicenseOverrides < 0 )
    {
      if ( PlatformSpatialLicenseOverrides != -2147467263 && (unsigned int)dword_1801C02B0 > 2 )
      {
        LODWORD(v17.Ptr) = PlatformSpatialLicenseOverrides;
        v19 = &v17;
        v20 = 4;
        v21 = 0;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801C02B0,
          (unsigned __int8 *)dword_18018F7A9,
          0LL,
          0LL,
          3u,
          &v18);
      }
    }
    else
    {
      if ( (unsigned int)dword_1801C02B0 > 5 )
      {
        v17.Ptr = v16;
        v19 = &v17;
        v20 = 8;
        v21 = 0;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801C02B0,
          (unsigned __int8 *)dword_18018F596,
          0LL,
          0LL,
          3u,
          &v18);
      }
      v3 = 0;
      v4 = &v17;
      v5 = (char *)this + 273;
      v6 = (char *)this + 273;
      do
      {
        LOBYTE(v4->Ptr) = *v6;
        *v6 = 0;
        ++v3;
        v4 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v4 + 1);
        v6 += 48;
      }
      while ( v3 < 7 );
      v7 = 0;
      if ( v16 )
      {
        v8 = 0LL;
        do
        {
          v4 = 0LL;
          v9 = 0LL;
          v10 = (char *)pv + 16 * v8;
          while ( 1 )
          {
            v11 = *(_QWORD *)((char *)this + 48 * (int)v4 + 276) - *v10;
            if ( !v11 )
              v11 = *(_QWORD *)((char *)this + 48 * (int)v4 + 284) - v10[1];
            if ( !v11 )
              break;
            v4 = (struct _EVENT_DATA_DESCRIPTOR *)(unsigned int)((_DWORD)v4 + 1);
            ++v9;
            if ( (unsigned int)v4 >= 7 )
              goto LABEL_19;
          }
          *((_BYTE *)this + 48 * v9 + 273) = 1;
LABEL_19:
          v8 = ++v7;
        }
        while ( v7 < v16 );
      }
      v12 = 0LL;
      v13 = &v17;
      while ( *v5 == LOBYTE(v13->Ptr) )
      {
        v12 = (unsigned int)(v12 + 1);
        v5 += 48;
        v13 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v13 + 1);
        if ( (unsigned int)v12 >= 7 )
          goto LABEL_31;
      }
      v14 = (void (__fastcall ***)(_QWORD, __int64, struct _EVENT_DATA_DESCRIPTOR *))*((_QWORD *)this + 5);
      if ( v14 )
      {
        if ( (unsigned int)dword_1801C02B0 > 5 )
        {
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1801C02B0,
            (unsigned __int8 *)dword_18018F3D5,
            0LL,
            0LL,
            2u,
            &v17);
          v14 = (void (__fastcall ***)(_QWORD, __int64, struct _EVENT_DATA_DESCRIPTOR *))*((_QWORD *)this + 5);
        }
        (**v14)(v14, v12, v4);
      }
    }
LABEL_31:
    if ( pv )
      CoTaskMemFree(pv);
  }
}

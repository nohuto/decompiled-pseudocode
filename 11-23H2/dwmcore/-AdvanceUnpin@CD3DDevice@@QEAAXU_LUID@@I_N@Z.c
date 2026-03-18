/*
 * XREFs of ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x1800FCB04
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800FC9F0 (-PostPresent@CLegacySwapChain@@MEAAJ_N0@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800FD374 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180288200 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z @ 0x18028AFF0 (-PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall CD3DDevice::AdvanceUnpin(CD3DDevice *this, struct _LUID a2, int a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  char v5; // r10
  __int64 v6; // r11
  char v7; // cl
  int v8; // ecx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  struct _LUID v10; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v11[5]; // [rsp+40h] [rbp-9h] BYREF
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  int *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  struct _LUID *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v4 = *((_QWORD *)this + 150);
  v5 = 0;
  v6 = *((_QWORD *)this + 151);
  v10 = a2;
  while ( v4 != v6 )
  {
    if ( a4 )
    {
      *(_DWORD *)(v4 + 28) = 0;
LABEL_8:
      v7 = 1;
      goto LABEL_13;
    }
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 && *(_QWORD *)(v4 + 16) == a2 && *(_DWORD *)(v4 + 24) == a3 )
    {
      *(_DWORD *)(v4 + 28) = v8 - 1;
      goto LABEL_8;
    }
    v7 = 0;
LABEL_13:
    v5 |= v7;
    v4 += 32LL;
  }
  if ( v5 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v10.LowPart = a4;
      v11[4] = v11;
      v14 = &v9;
      v17 = &v10;
      v11[0] = a2;
      v9 = a3;
      v12 = 8;
      v15 = 4;
      v18 = 4;
      McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &Pinning_AdvanceUnpin);
    }
  }
}

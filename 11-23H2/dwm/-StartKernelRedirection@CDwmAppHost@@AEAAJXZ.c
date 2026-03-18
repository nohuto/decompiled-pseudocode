/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140003994
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140003DC8 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400027F0 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400033CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140003A7C (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     __security_check_cookie @ 0x140005BF0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14000D0C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v5; // eax
  signed int LastError; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-60h]
  void **v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+38h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-40h]
  char v13; // [rsp+48h] [rbp-38h]
  int v14; // [rsp+4Ch] [rbp-34h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  _BYTE v17[16]; // [rsp+68h] [rbp-18h] BYREF

  v3 = (__int64)*(&hInstance + 1);
  v4 = 0;
  if ( *(&hInstance + 1) )
  {
    v14 = 0;
    v16 = 0LL;
    v10 = &CPortClient::`vftable';
    v11 = 0;
    v13 = 0;
    v15 = 0LL;
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
    {
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&CPortClient::`vftable',
        (unsigned int)&EstablishKernelRedirection,
        a3,
        1,
        (__int64)v17);
      v3 = (__int64)*(&hInstance + 1);
    }
    v12 = v3;
    v5 = CPortClient::SendSimpleAsyncRequest((CPortClient *)&v10, 0x40000025u);
    v4 = v5;
    if ( v5 < 0 )
    {
      v9 = 334;
    }
    else
    {
      SetLastError(0);
      if ( !(unsigned int)DwmKernelStartup() )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        v9 = 336;
        if ( (v4 & 0x80000000) == 0 )
          v4 = -2003304445;
        v8 = v4;
        goto LABEL_17;
      }
      v5 = CPortClient::SendSimpleAsyncRequest((CPortClient *)&v10, 0x40000026u);
      v4 = v5;
      if ( v5 >= 0 )
      {
LABEL_7:
        CPortClient::~CPortClient((CPortClient *)&v10);
        return v4;
      }
      v9 = 338;
    }
    v8 = v5;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140011B90, 2LL, v8, v9);
    goto LABEL_7;
  }
  return v4;
}

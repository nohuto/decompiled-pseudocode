/*
 * XREFs of ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003B18
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003870 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400027F0 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400033CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140007EBC (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 */

__int64 __fastcall CDwmAppHost::LpcSyncFlush(CDwmAppHost *this, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-19h]
  unsigned int v8; // [rsp+30h] [rbp-11h]
  void *v9; // [rsp+38h] [rbp-9h]
  __int16 v10; // [rsp+40h] [rbp-1h]
  void **v11; // [rsp+58h] [rbp+17h] BYREF
  int v12; // [rsp+60h] [rbp+1Fh]
  __int64 v13; // [rsp+68h] [rbp+27h]
  char v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  __int128 v16; // [rsp+78h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+47h]
  CDwmAppHost *v18; // [rsp+A8h] [rbp+67h] BYREF
  int v19; // [rsp+B0h] [rbp+6Fh] BYREF
  int v20; // [rsp+B4h] [rbp+73h]

  v18 = this;
  v4 = 0;
  if ( *(&hInstance + 1) )
  {
    LODWORD(v18) = 0;
    v15 = 0;
    v17 = 0LL;
    v11 = &CPortClient::`vftable';
    v13 = (__int64)*(&hInstance + 1);
    v20 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0LL;
    v19 = -2147483639;
    v5 = CPortClient::SendComplexSyncRequest((CPortClient *)&v11, 0x80000009, &v19, a4, v7, v8, v9, v10, (int *)&v18);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x180u);
    CPortClient::~CPortClient((CPortClient *)&v11);
  }
  return v4;
}

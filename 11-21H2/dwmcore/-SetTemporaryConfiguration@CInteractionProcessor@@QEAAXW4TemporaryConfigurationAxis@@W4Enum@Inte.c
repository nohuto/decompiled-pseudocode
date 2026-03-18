/*
 * XREFs of ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18018EBB8
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18002AA00 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x180189E28 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

char __fastcall CInteractionProcessor::SetTemporaryConfiguration(_BYTE *a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  _BYTE *v5; // rsi
  int v6; // r14d
  int v8; // eax
  int v12; // edi
  _BYTE *v13; // rsi
  int v14; // r10d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r9d
  char *v18; // r8
  char v19; // cl
  char v20; // al
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  int v24; // r11d
  int v25; // eax
  int v27; // [rsp+80h] [rbp-1h] BYREF
  int v28; // [rsp+84h] [rbp+3h] BYREF
  int v29; // [rsp+88h] [rbp+7h] BYREF
  int v30; // [rsp+8Ch] [rbp+Bh] BYREF
  int v31; // [rsp+90h] [rbp+Fh] BYREF
  int v32; // [rsp+94h] [rbp+13h] BYREF
  int v33; // [rsp+98h] [rbp+17h] BYREF
  _BYTE *v34; // [rsp+A0h] [rbp+1Fh] BYREF
  int v35; // [rsp+E8h] [rbp+67h] BYREF
  int v36; // [rsp+F0h] [rbp+6Fh] BYREF

  v5 = a1 + 1272;
  v6 = a4;
  v8 = -a3;
  v12 = -1;
  v13 = &v5[a3 != 0 ? 0x24 : 0];
  v14 = 0;
  v15 = 3LL;
  if ( a2 )
  {
    v16 = a2 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v12 = 2;
        v14 = 48;
      }
    }
    else
    {
      v12 = 1;
      v14 = 12;
    }
  }
  else
  {
    v12 = 0;
    v14 = 3;
  }
  v17 = a5 | ~v14;
  if ( v12 == -1
    || (LOBYTE(v8) = v12, v13[12 * v12] == (_BYTE)v6) && (!(_BYTE)v6 || *(_DWORD *)&v13[12 * v12 + 4] == v17)
    || (v13[12 * v12] = v6, *(_DWORD *)&v13[12 * v12 + 4] = v17, *(_DWORD *)&v13[12 * v12 + 8] = v14, a3) )
  {
    if ( a3 == 1 )
    {
      a1[1264] &= ~2u;
      v18 = a1 + 1308;
      v19 = a1[1264];
      do
      {
        v20 = *v18;
        v18 += 12;
        LOBYTE(v8) = (v19 ^ (v19 | (2 * v20))) & 2;
        v19 ^= v8;
        a1[1264] = v19;
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    a1[148] |= 1u;
    a1[308] |= 1u;
    a1[468] |= 1u;
    a1[628] |= 1u;
  }
  if ( (unsigned int)dword_1803D0EF0 > 4 )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL);
    if ( (_BYTE)v8 )
    {
      v25 = ((unsigned __int8)a1[1264] >> 1) & 1;
      v36 = v22;
      a5 = v25;
      v27 = v23;
      v28 = v24;
      v30 = v6;
      v31 = v12;
      v35 = *(_DWORD *)&v13[12 * v12 + 4];
      v29 = (unsigned __int8)v13[12 * v12];
      v32 = a3;
      v33 = a2;
      v34 = a1;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     3LL * v12,
                     byte_18036A611,
                     v21,
                     v22,
                     (__int64)&v34,
                     (__int64)&v33,
                     (__int64)&v32,
                     (__int64)&v31,
                     (__int64)&v30,
                     (__int64)&v29,
                     (__int64)&v28,
                     (__int64)&v27,
                     (__int64)&v36,
                     (__int64)&v35,
                     (__int64)&a5);
    }
  }
  return v8;
}

/*
 * XREFs of StorpTelemetrySendUnitPauseRequestCounters @ 0x1C001C880
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C001B5D8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendUnitPauseRequestCounters(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  char v9; // [rsp+32h] [rbp-CEh] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  char *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 2192)
    || *(_DWORD *)(a1 + 2196)
    || *(_DWORD *)(a1 + 2200)
    || (v2 = *(_QWORD *)(a1 + 24), *(_DWORD *)(v2 + 5292))
    || *(_DWORD *)(v2 + 5288) )
  {
    if ( (unsigned int)dword_1C00920C8 > 5 )
    {
      if ( tlgKeywordOn(a1, 0x400000000000LL) )
      {
        v6 = *(_DWORD **)(v3 + 24);
        v18 = 16LL;
        v20 = 16LL;
        v17 = v6 + 1250;
        v19 = a1 + 2024;
        v10 = v6[14];
        v21 = &v10;
        v7 = *(_BYTE *)(a1 + 96);
        v23 = &v7;
        v8 = *(_BYTE *)(a1 + 97);
        v25 = &v8;
        v9 = *(_BYTE *)(a1 + 98);
        v27 = &v9;
        v29 = &v11;
        v12 = *(_DWORD *)(a1 + 2196);
        v31 = &v12;
        v13 = *(_DWORD *)(a1 + 2200);
        v33 = &v13;
        v22 = 4LL;
        v24 = 1LL;
        v26 = 1LL;
        v28 = 1LL;
        v11 = v5;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        v14 = v6[1323];
        v35 = &v14;
        v36 = 4LL;
        v15 = v6[1322];
        v37 = &v15;
        v38 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)v6, (unsigned __int8 *)dword_1C0086FE1, v4, v5, 0xDu, &v16);
      }
    }
    *(_QWORD *)(a1 + 2192) = 0LL;
    *(_DWORD *)(a1 + 2200) = 0;
  }
}

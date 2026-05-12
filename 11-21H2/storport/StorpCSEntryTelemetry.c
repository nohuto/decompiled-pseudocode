/*
 * XREFs of StorpCSEntryTelemetry @ 0x1C005DF98
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C003B2A0 (RaidPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

void __fastcall StorpCSEntryTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *i; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r10d
  int v19; // r11d
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21; // [rsp+31h] [rbp-CFh] BYREF
  char v22; // [rsp+32h] [rbp-CEh] BYREF
  char v23; // [rsp+33h] [rbp-CDh] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  char *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF
  __int64 v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  __int64 *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]

  if ( a1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a1 + 5096) = 0LL;
    v4 = (unsigned __int64)(v3 - *(_QWORD *)(a1 + 5088)) * (unsigned __int128)0x346DC5D63886594BuLL;
    v5 = *(_QWORD *)(a1 + 4832);
    *(_QWORD *)(a1 + 5088) = v2;
    v6 = *((_QWORD *)&v4 + 1) >> 11;
    *(_QWORD *)(a1 + 5104) = 0LL;
    *(_QWORD *)(a1 + 5112) = 0LL;
    *(_QWORD *)(a1 + 5120) = 0LL;
    *(_QWORD *)(a1 + 5128) = 0LL;
    *(_QWORD *)(a1 + 5136) = 0LL;
    *(_QWORD *)(a1 + 5144) = 0LL;
    *(_QWORD *)(a1 + 5152) = 0LL;
    *(_QWORD *)(a1 + 5160) = 0LL;
    *(_QWORD *)(a1 + 5168) = 0LL;
    *(_QWORD *)(a1 + 5176) = 0LL;
    *(_DWORD *)(a1 + 5184) = 0;
    *(_QWORD *)(a1 + 5192) = 0LL;
    *(_QWORD *)(a1 + 5200) = 0LL;
    *(_QWORD *)(a1 + 5208) = 0LL;
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 20) & 2) != 0 )
      {
        v8 = 0LL;
        if ( *(_DWORD *)(v5 + 16) )
          v8 = v2;
        *(_QWORD *)(a1 + 5136) = v8;
      }
      else
      {
        v7 = (*(_BYTE *)(a1 + 109) & 0x40) == 0;
        *(_QWORD *)(a1 + 5112) = v2;
        *(_QWORD *)(a1 + 5120) = v2;
        if ( !v7 )
        {
          *(_QWORD *)(a1 + 5192) = v2;
          *(_QWORD *)(a1 + 5200) = v2;
        }
      }
      if ( (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(v5, 0x400000000000LL) )
      {
        v55 = 16LL;
        v54 = a1 + 4936;
        v24 = *(_DWORD *)(a1 + 56);
        v56 = &v24;
        v58 = &v27;
        v57 = 4LL;
        v27 = v6;
        v59 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(v9, (unsigned __int8 *)dword_1C006FB58, v10, v11, 5u, &v53);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
    {
      i[243] = 0LL;
      i[244] = 0LL;
      i[245] = 0LL;
      i[246] = 0LL;
      i[247] = 0LL;
      i[248] = 0LL;
      i[249] = 0LL;
      i[250] = 0LL;
      i[251] = 0LL;
      *((_DWORD *)i + 504) = 0;
      i[253] = 0LL;
      i[254] = 0LL;
      i[255] = 0LL;
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 7)) )
      {
        v13 = i[211];
        v14 = *(unsigned int *)(v13 + 32);
        if ( (v14 & 8) != 0 )
        {
          if ( *(_DWORD *)(v13 + 16) )
            i[244] = v2;
        }
        else
        {
          v7 = (*((_BYTE *)i + 395) & 2) == 0;
          i[243] = v2;
          i[246] = v2;
          if ( !v7 )
          {
            i[253] = v2;
            i[254] = v2;
          }
        }
        if ( (unsigned int)dword_1C0079058 > 5 )
        {
          if ( tlgKeywordOn(v14, 0x400000000000LL) )
          {
            v32 = 16LL;
            v31 = a1 + 4936;
            v34 = 16LL;
            v33 = i + 240;
            v24 = *(_DWORD *)(a1 + 56);
            v35 = &v24;
            v20 = *((_BYTE *)i + 40);
            v37 = &v20;
            v21 = *((_BYTE *)i + 41);
            v39 = &v21;
            v22 = *((_BYTE *)i + 42);
            v41 = &v22;
            v43 = &v25;
            v45 = &v26;
            v47 = &v23;
            v49 = &v28;
            LODWORD(v27) = *((_DWORD *)i + 502);
            v51 = &v27;
            v36 = 4LL;
            v38 = 1LL;
            v40 = 1LL;
            v42 = 1LL;
            v25 = v18;
            v44 = 4LL;
            v26 = v19;
            v46 = 4LL;
            v23 = v17;
            v48 = 1LL;
            v28 = v6;
            v50 = 8LL;
            v52 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(v15, (unsigned __int8 *)dword_1C006EFB8, v16, v17, 0xDu, &v30);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[210]);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

/*
 * XREFs of MiLogCommitRequestFailed @ 0x140A43C04
 * Callers:
 *     MiCommitRequestFailed @ 0x140A43BA4 (MiCommitRequestFailed.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     PsGetProcessSessionId @ 0x1402978B0 (PsGetProcessSessionId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PsQueryJobMemoryUsageByProcess @ 0x1409B1EE0 (PsQueryJobMemoryUsageByProcess.c)
 */

char __fastcall MiLogCommitRequestFailed(__int64 a1, __int64 a2, int a3)
{
  signed __int32 v3; // eax
  signed __int32 v7; // ett
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D8h]
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h] BYREF
  __int64 v30; // [rsp+98h] [rbp-70h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-68h] BYREF
  int v32; // [rsp+A8h] [rbp-60h] BYREF
  __int16 ProcessSessionId; // [rsp+ACh] [rbp-5Ch]
  __int16 v34; // [rsp+AEh] [rbp-5Ah]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+B8h] [rbp-50h] BYREF
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  __int64 *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 *v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  __int64 *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  __int64 *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  __int64 *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  __int64 *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  __int64 *v55; // [rsp+168h] [rbp+60h]
  __int64 v56; // [rsp+170h] [rbp+68h]
  __int64 *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  __int64 *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  __int64 *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]

  LOBYTE(v3) = 0;
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( *(_QWORD *)&qword_140C698E8 )
  {
    _m_prefetchw((const void *)(a1 + 2172));
    v3 = *(_DWORD *)(a1 + 2172);
    do
    {
      v7 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2172), v3 | 0x400, v3);
    }
    while ( v7 != v3 );
    if ( (v3 & 0x400) == 0 )
    {
      v32 = *(_DWORD *)(a1 + 1088);
      ProcessSessionId = PsGetProcessSessionId(a1);
      v34 = MEMORY[0xFFFFF780000002C4];
      v35 = *(_QWORD *)(a1 + 1128);
      v8 = *(_QWORD *)(a1 + 1384);
      v9 = *(_QWORD *)(a1 + 1600);
      v10 = *(_QWORD *)(a1 + 1608);
      v11 = *(_QWORD *)(v8 + 320);
      v12 = *(_QWORD *)(v8 + 256);
      PsQueryJobMemoryUsageByProcess(a1, &v20, &v21, &v22, &v23);
      LOBYTE(v3) = MiGetProcessPartition(a1);
      if ( **(_DWORD **)&qword_140C698E8 > 5u )
      {
        LOBYTE(v3) = tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000000LL);
        if ( (_BYTE)v3 )
        {
          v30 = v14;
          v37 = &v32;
          v38 = 16LL;
          v39 = &v25;
          v25 = a2;
          v41 = &v24;
          v40 = 8LL;
          v43 = &v26;
          v45 = &v27;
          v47 = &v28;
          v49 = &v29;
          v51 = &v20;
          v53 = &v21;
          v55 = &v22;
          v57 = &v23;
          v59 = &v30;
          v61 = &v31;
          LODWORD(v24) = a3;
          v42 = 4LL;
          v26 = v11;
          v44 = 8LL;
          v27 = v12;
          v46 = 8LL;
          v28 = v9;
          v48 = 8LL;
          v29 = v10;
          v50 = 8LL;
          v52 = 8LL;
          v54 = 8LL;
          v56 = 8LL;
          v58 = 8LL;
          v60 = 8LL;
          v31 = v16;
          v62 = 8LL;
          LOBYTE(v3) = tlgWriteEx_EtwWriteEx(v15, (unsigned __int8 *)&byte_140039755, v13, 1u, v18, v19, 0xFu, &v36);
        }
      }
    }
  }
  return v3;
}

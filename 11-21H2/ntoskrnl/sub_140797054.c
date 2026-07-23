/*
 * XREFs of sub_140797054 @ 0x140797054
 * Callers:
 *     sub_140795400 @ 0x140795400 (sub_140795400.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402E10FC @ 0x1402E10FC (sub_1402E10FC.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1406F21DC @ 0x1406F21DC (sub_1406F21DC.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 *     sub_140796390 @ 0x140796390 (sub_140796390.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_14079809C @ 0x14079809C (sub_14079809C.c)
 *     sub_1409F4FB4 @ 0x1409F4FB4 (sub_1409F4FB4.c)
 */

__int64 __fastcall sub_140797054(int a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r12d
  char v7; // r14
  unsigned int v9; // esi
  __int64 v10; // r8
  int v11; // r11d
  unsigned __int8 v12; // dl
  __int64 v13; // r10
  int v14; // r13d
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  __int128 v19; // xmm1
  _QWORD *v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rsi
  char *v23; // r12
  char v24; // cl
  char v25; // al
  int v26; // eax
  int v27; // r13d
  unsigned int v28; // r12d
  int v29; // eax
  __int64 v30; // rcx
  struct _KTHREAD *v31; // rax
  char v32; // [rsp+38h] [rbp-39h]
  int v34; // [rsp+3Ch] [rbp-35h]
  unsigned int v35; // [rsp+40h] [rbp-31h] BYREF
  _DWORD *v36; // [rsp+48h] [rbp-29h] BYREF
  __int64 v37; // [rsp+50h] [rbp-21h]
  int v38; // [rsp+58h] [rbp-19h]
  int v39; // [rsp+5Ch] [rbp-15h]
  __int128 v40; // [rsp+60h] [rbp-11h]
  __int128 v41; // [rsp+70h] [rbp-1h]
  __int128 Source2; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v43; // [rsp+90h] [rbp+1Fh]

  v39 = a1;
  Source2 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = 0;
  v6 = 0;
  v36 = 0LL;
  v34 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v38 = *(unsigned __int16 *)(a2 + 88);
  v35 = 0;
  if ( v38 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  if ( sub_1402E10FC(a2, a1, &v35) )
  {
    v9 = v35;
    v10 = a2 + 132;
    v7 = 1;
    v40 = 0LL;
    v11 = 0;
    v12 = 0;
    *(_QWORD *)&v41 = 0LL;
    v13 = 0LL;
    v14 = 1 << v35;
    *(_DWORD *)(32 * (v35 + 4LL) + a2) = 0;
    v15 = -1LL;
    *((_QWORD *)&v41 + 1) = -1LL;
    v16 = 8LL;
    do
    {
      if ( *(_DWORD *)(v10 - 4) )
      {
        v17 = *(_BYTE *)v10;
        v18 = v12;
        LODWORD(v40) = 1;
        if ( v12 <= v17 )
          v18 = v17;
        v13 |= *(_QWORD *)(v10 + 12);
        v15 &= *(_QWORD *)(v10 + 20);
        v12 = v18;
        v11 |= *(_DWORD *)(v10 + 4);
      }
      v10 += 32LL;
      --v16;
    }
    while ( v16 );
    BYTE4(v40) = v12;
    *((_QWORD *)&v41 + 1) = v15;
    DWORD2(v40) = v11;
    *(_QWORD *)&v41 = v13;
    v19 = v41;
    *(_OWORD *)(a2 + 96) = v40;
    *(_OWORD *)(a2 + 112) = v19;
    sub_14078F198(a2, v9, 0LL, 1, 0LL);
    v20 = *(_QWORD **)(a2 + 56);
    if ( v20 != (_QWORD *)(a2 + 56) )
    {
      v21 = (__int64)v36;
      LOBYTE(v14) = ~(_BYTE)v14;
      v35 = v14;
      do
      {
        if ( a3 )
        {
          v31 = KeGetCurrentThread();
          v22 = (__int64)(v20 - 2);
          v23 = (char *)v20 + 85;
          --*((_WORD *)v31 + 242);
          ExAcquirePushLockExclusiveEx(v20[2] + 408LL, 0LL);
          v21 = (__int64)v36;
          v32 = 1;
          *(_QWORD *)(v20[2] + 416LL) = KeGetCurrentThread();
        }
        else
        {
          v22 = (__int64)v20;
          v23 = (char *)v20 + 100;
        }
        v24 = *v23;
        v20 = (_QWORD *)*v20;
        v25 = *v23 & v14;
        *v23 = v25;
        if ( (*(_BYTE *)(v22 + 98) & 8) != 0 && v38 != v39 || v25 == v24 )
        {
          v6 = v34;
        }
        else
        {
          sub_14079809C(v22, &Source2);
          v26 = sub_140796390(a2, *(_BYTE *)(v22 + 100));
          v27 = v26;
          v28 = 120;
          if ( v26 )
            v28 = v26 + 136;
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 4) != v28 || RtlCompareMemory((const void *)(v21 + 72), &Source2, 0x20uLL) != 32 )
            {
              sub_14078F0FC((volatile signed __int32 *)v21);
              v21 = 0LL;
              v36 = 0LL;
            }
            if ( v21 )
              goto LABEL_26;
          }
          v29 = sub_1406F21DC(v28, 0LL, &v36);
          v21 = (__int64)v36;
          v34 = v29;
          if ( v29 >= 0 )
          {
            *v36 = 3;
            *(_DWORD *)(v21 + 4) = v28;
            v30 = *(_QWORD *)(v22 + 32);
            BYTE3(v37) = 0;
            *(_OWORD *)(v21 + 40) = *(_OWORD *)(v30 + 40);
            *(_OWORD *)(v21 + 72) = Source2;
            *(_OWORD *)(v21 + 88) = v43;
            *(_DWORD *)(v21 + 112) = *(_BYTE *)(a2 + 91) & 1;
            LOWORD(v37) = *(_WORD *)(a2 + 88);
            BYTE2(v37) = *(_BYTE *)(a2 + 90);
            HIDWORD(v37) = *(_DWORD *)(a2 + 80);
            *(_QWORD *)(v21 + 104) = v37;
            if ( v27 )
            {
              *(_DWORD *)(v21 + 132) = 0x80000000;
              *(_DWORD *)(v21 + 128) = v27;
              *(_QWORD *)(v21 + 120) = 136LL;
              sub_1409F4FB4((void *)(v21 + 136));
              *(_DWORD *)(v21 + 116) = 1;
            }
            else
            {
              *(_DWORD *)(v21 + 116) = 0;
            }
          }
          if ( v21 )
          {
LABEL_26:
            v6 = sub_140790CF8(v22, v21);
            v34 = v6;
          }
          else
          {
            v6 = v34;
          }
          LOBYTE(v14) = v35;
        }
        if ( v32 )
        {
          *(_QWORD *)(*(_QWORD *)(v22 + 32) + 416LL) = 0LL;
          ExReleasePushLockEx(*(_QWORD *)(v22 + 32) + 408LL, 0LL);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v21 = (__int64)v36;
          v32 = 0;
        }
      }
      while ( v20 != (_QWORD *)(a2 + 56) );
      if ( v21 )
        sub_14078F0FC((volatile signed __int32 *)v21);
    }
  }
  else
  {
    v7 = 0;
  }
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(a2 + 408, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v7 )
    sub_140796B04((volatile signed __int64 *)a2);
  return v6;
}

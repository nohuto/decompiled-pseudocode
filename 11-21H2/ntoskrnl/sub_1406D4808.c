/*
 * XREFs of sub_1406D4808 @ 0x1406D4808
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_14024F8B4 @ 0x14024F8B4 (sub_14024F8B4.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140678A28 @ 0x140678A28 (sub_140678A28.c)
 *     sub_140678FCC @ 0x140678FCC (sub_140678FCC.c)
 *     sub_14068565C @ 0x14068565C (sub_14068565C.c)
 *     sub_1406D4A68 @ 0x1406D4A68 (sub_1406D4A68.c)
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 *     sub_1406D4EFC @ 0x1406D4EFC (sub_1406D4EFC.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1409B07D4 @ 0x1409B07D4 (sub_1409B07D4.c)
 */

__int64 __fastcall sub_1406D4808(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v3; // edi
  __int64 v4; // r12
  volatile signed __int64 *v7; // r13
  int v8; // r14d
  char v9; // al
  int v10; // eax
  const EVENT_DESCRIPTOR *v11; // rbx
  bool v12; // zf
  __int64 v14; // rax
  const WCHAR *v15; // r8
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  const WCHAR *v52; // [rsp+150h] [rbp+50h]
  int v53; // [rsp+158h] [rbp+58h]
  int v54; // [rsp+15Ch] [rbp+5Ch]
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = -1LL;
  v18 = 0LL;
  v19 = 0LL;
  v16 = 0;
  --*((_WORD *)CurrentThread + 242);
  v17 = 0;
  v7 = (volatile signed __int64 *)(a1 + 1704);
  ExAcquirePushLockExclusiveEx(a1 + 1704, 0LL);
  v8 = 1;
  if ( (*(_DWORD *)(a2 + 36) & 1) == 0 )
  {
    v14 = v19;
    if ( *(_QWORD *)(a1 + 1632) )
      v14 = *(_QWORD *)(a1 + 1632);
    v19 = v14;
    v8 = sub_140678A28(a1);
LABEL_12:
    if ( !v8 )
      goto LABEL_17;
    goto LABEL_13;
  }
  sub_140678FCC(a1, (__int64)CurrentThread, &v18);
  sub_14068565C(a1, &v18);
  v3 = sub_1406D4A68((PVOID)a1);
  if ( v3 >= 0 )
  {
    if ( a1 != v18 )
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    sub_1406FFE90(v18, CurrentThread);
    v3 = 0;
    if ( *(_QWORD *)(a2 + 24) )
    {
      v3 = sub_1409B07D4(a1, a2, (unsigned int)&v16, (unsigned int)&v17, (__int64)&v19);
      if ( v3 >= 0 )
      {
LABEL_9:
        v3 = 0;
        if ( !v16 )
          goto LABEL_10;
        goto LABEL_24;
      }
    }
    else
    {
      if ( !sub_14024F8B4((_QWORD *)a2) )
      {
        if ( !*(_QWORD *)(a1 + 1632) )
          goto LABEL_12;
        v19 = *(_QWORD *)(a1 + 1632);
        sub_1406D4EFC(a1 + 1592);
LABEL_24:
        v8 = 2;
LABEL_10:
        if ( v17 )
          --v8;
        goto LABEL_12;
      }
      v3 = sub_1406D4DF0(a1 + 1592, a1, a2, &v16);
      if ( v3 >= 0 )
      {
        v19 = *(_QWORD *)(a1 + 1632);
        v17 = 1;
        goto LABEL_9;
      }
    }
LABEL_13:
    sub_140678FCC(a1, (__int64)CurrentThread, &v18);
    sub_14068565C(a1, &v18);
    sub_1406D4A68((PVOID)a1);
  }
  if ( a1 != v18 )
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  sub_1406FFE90(v18, CurrentThread);
LABEL_17:
  v9 = _InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  sub_1402F9540((__int64)CurrentThread);
  v22 = v19;
  v10 = *(_DWORD *)(a1 + 1428);
  v11 = (const EVENT_DESCRIPTOR *)qword_14000EC10;
  v20 = v10;
  v12 = (*(_DWORD *)(a2 + 36) & 1) == 0;
  v21 = v3;
  if ( v12 )
    v11 = &stru_1400371D0;
  if ( EtwEventEnabled(qword_140C15FF8, v11) )
  {
    v15 = L"Global";
    if ( *(_QWORD *)(a2 + 24) )
      v15 = *(const WCHAR **)(a2 + 24);
    do
      ++v4;
    while ( v15[v4] );
    v52 = v15;
    UserData.Ptr = (ULONGLONG)&v20;
    v53 = 2 * v4 + 2;
    v24 = &v22;
    v54 = 0;
    v28 = a2 + 8;
    *(_QWORD *)&UserData.Size = 4LL;
    v30 = a2 + 72;
    v32 = a2 + 16;
    v34 = a2 + 56;
    v36 = a2 + 80;
    v38 = a2 + 48;
    v40 = a2 + 64;
    v42 = a2 + 88;
    v44 = a2 + 96;
    v46 = a2 + 104;
    v48 = a2 + 112;
    v55 = &v21;
    v25 = 8LL;
    v26 = a2;
    v27 = 8LL;
    v29 = 8LL;
    v31 = 8LL;
    v33 = 8LL;
    v35 = 8LL;
    v37 = 8LL;
    v39 = 8LL;
    v41 = 8LL;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 8LL;
    v50 = a2 + 36;
    v51 = 4LL;
    v56 = 4LL;
    EtwWrite(qword_140C15FF8, v11, 0LL, 0x11u, &UserData);
  }
  return (unsigned int)v3;
}

/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0001D44
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00019C0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0033EF8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqPR2XR2_EtwWriteTransfer @ 0x1C003C3A4 (McTemplateK0pxqPR2XR2_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  _QWORD *v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // r12
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r13
  _QWORD *v12; // rsi
  __int64 Pool2; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  _DWORD *v17; // r8
  _QWORD *v18; // r14
  unsigned int v19; // esi
  _QWORD *i; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r9
  char *v32; // rax
  char *v33; // rbx
  char **v34; // rcx
  _QWORD *j; // r9
  _QWORD *v37; // r10
  __int64 *v38; // r11
  __int64 v39; // rax
  __int64 v40; // r13
  _QWORD *v41; // rcx
  __int64 v42; // rax
  void *v43; // rcx
  int v44; // [rsp+40h] [rbp-69h]
  __int64 v45; // [rsp+48h] [rbp-61h]
  _BYTE *v47; // [rsp+58h] [rbp-51h]
  _BYTE v48[16]; // [rsp+60h] [rbp-49h] BYREF
  int v49; // [rsp+70h] [rbp-39h]
  __int64 v50; // [rsp+78h] [rbp-31h]
  _QWORD *v51; // [rsp+80h] [rbp-29h]
  PVOID P; // [rsp+88h] [rbp-21h]
  _BYTE v53[16]; // [rsp+90h] [rbp-19h] BYREF
  int v54; // [rsp+A0h] [rbp-9h]

  v10 = a4;
  v11 = (unsigned __int64)a1;
  v45 = a2;
  if ( a4 || a5 )
  {
    v6 = (_QWORD *)a1[202];
    v12 = a1 + 201;
    if ( v6 != a1 + 201 && v6[2] == a3 )
      goto LABEL_45;
    v8 = 64LL;
    Pool2 = ExAllocatePool2(64LL, 168LL, 1717659990LL);
    v6 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225495LL;
    }
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 64) = 0;
    *(_QWORD *)(Pool2 + 72) = 0LL;
    *(_DWORD *)(Pool2 + 128) = 0;
    v51 = (_QWORD *)(Pool2 + 16);
    *(_QWORD *)(Pool2 + 16) = a3;
    *(_QWORD *)(Pool2 + 144) = Pool2 + 136;
    *(_QWORD *)(Pool2 + 136) = Pool2 + 136;
    *(_QWORD *)(Pool2 + 160) = Pool2 + 152;
    *(_QWORD *)(Pool2 + 152) = Pool2 + 152;
    v15 = (_QWORD *)v12[1];
    if ( (_QWORD *)*v15 != v12 )
      goto LABEL_90;
    *v6 = v12;
    v6[1] = v15;
    *v15 = v6;
    v12[1] = v6;
    v7 = 895576406;
    if ( (unsigned int)v10 <= 2 )
    {
      v6[3] = v6 + 4;
      if ( (_DWORD)v10 )
        memset(v6 + 4, 0, 16 * v10);
      goto LABEL_8;
    }
  }
  else
  {
    WdLogSingleEntry5(0LL, 281LL, 3328LL, a1, a3, a6);
    __debugbreak();
  }
  v14 = 0xFFFFFFFFFFFFFFFFuLL % v10;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 >= 0x10 )
  {
    v6[3] = ExAllocatePool2(v8, 16 * v10, v7);
LABEL_8:
    v16 = (_QWORD *)v6[3];
    *((_DWORD *)v6 + 16) = v10;
    goto LABEL_9;
  }
  v16 = 0LL;
LABEL_9:
  if ( a5 <= 2 )
  {
    v6[9] = v6 + 10;
    if ( a5 )
      memset(v6 + 10, 0, 24LL * a5);
    goto LABEL_12;
  }
  v14 = 0xFFFFFFFFFFFFFFFFuLL % a5;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a5 >= 0x18 )
  {
    v6[9] = ExAllocatePool2(64LL, 24LL * a5, v7);
LABEL_12:
    v17 = (_DWORD *)v6[9];
    *((_DWORD *)v6 + 32) = a5;
    goto LABEL_13;
  }
  v17 = 0LL;
LABEL_13:
  if ( !v16 )
  {
    if ( !v17 )
    {
LABEL_89:
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v6, v14);
      WdLogSingleEntry0(3LL);
      return 3221225495LL;
    }
    v43 = v17;
LABEL_88:
    ExFreePoolWithTag(v43, 0);
    goto LABEL_89;
  }
  if ( !v17 )
  {
    v43 = v16;
    goto LABEL_88;
  }
  v18 = (_QWORD *)(v11 + 72);
  v19 = 0;
  for ( i = *(_QWORD **)(v11 + 72); i != v18; i = (_QWORD *)*i )
  {
    v21 = i[19];
    v22 = i[17];
    if ( v21 > v22 )
    {
      if ( v19 > (int)v10 - 1 )
      {
        WdLogSingleEntry5(0LL, 281LL, 3328LL, v21, v22, v19);
        __debugbreak();
        goto LABEL_63;
      }
      v23 = 2LL * v19++;
      v16[v23 + 1] = v21;
      v16[v23] = i - 3;
    }
  }
  v11 = 0LL;
  v18 = a1 + 11;
  v44 = 0;
  v24 = (_QWORD *)a1[11];
LABEL_22:
  if ( v24 == v18 )
  {
    if ( bTracingEnabled )
    {
      v47 = 0LL;
      v49 = 0;
      P = 0LL;
      v54 = 0;
      if ( (unsigned int)v10 > 2 )
        goto LABEL_74;
      v47 = v48;
      if ( (_DWORD)v10 )
        memset(v48, 0, 8 * v10);
      goto LABEL_27;
    }
    goto LABEL_44;
  }
LABEL_63:
  for ( j = (_QWORD *)v24[4]; ; j = (_QWORD *)*j )
  {
    if ( j == v24 + 4 )
    {
      v24 = (_QWORD *)*v24;
      goto LABEL_22;
    }
    v37 = j - 1;
    v38 = j + 8;
    if ( (unsigned __int64)*v38 > j[7] || v37[12] > v37[11] )
      break;
LABEL_70:
    ;
  }
  if ( (unsigned int)v11 <= a5 - 1 )
  {
    v39 = 3 * v11;
    v40 = 2LL;
    v50 = v39;
    v41 = &v17[2 * v39 + 2];
    do
    {
      v42 = *v38;
      v38 += 3;
      *v41++ = v42;
      --v40;
    }
    while ( v40 );
    v11 = (unsigned int)++v44;
    *(_QWORD *)&v17[2 * v50] = v37;
    goto LABEL_70;
  }
  WdLogSingleEntry5(0LL, 281LL, 3328LL, 0LL, 0LL, (unsigned int)v11);
  __debugbreak();
LABEL_74:
  v25 = v10;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 8 )
  {
    v26 = 0LL;
    goto LABEL_76;
  }
  v47 = (_BYTE *)ExAllocatePool2(64LL, 8 * v10, 1717659990LL);
LABEL_27:
  v25 = v10;
  v49 = v10;
  v26 = (__int64)v47;
  if ( (unsigned int)v10 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 >= 8 )
    {
      P = (PVOID)ExAllocatePool2(64LL, 8 * v10, 1717659990LL);
      goto LABEL_30;
    }
LABEL_76:
    v27 = 0LL;
  }
  else
  {
    P = v53;
    if ( (_DWORD)v10 )
      memset(v53, 0, 8 * v10);
LABEL_30:
    v27 = P;
    v54 = v10;
  }
  if ( v26 && v27 )
  {
    if ( (_DWORD)v10 )
    {
      v28 = v27;
      do
      {
        v17 = (_DWORD *)*v16;
        v29 = *(_QWORD *)(*v16 + 56LL);
        if ( !v29 || (v17[28] & 0x40) != 0 )
          v29 = *v16;
        *(_QWORD *)((char *)v28 + v26 - (_QWORD)v27) = v29;
        v30 = v16[1];
        v16 += 2;
        *v28++ = v30;
        --v25;
      }
      while ( v25 );
    }
    v31 = a1[1];
    if ( !v31 )
      LODWORD(v31) = (_DWORD)a1;
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0pxqPR2XR2_EtwWriteTransfer((_DWORD)v27, *v51, (_DWORD)v17, v31, *v51, v10, v26, (__int64)v27);
  }
  if ( P != v53 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v54 = 0;
  if ( v47 != v48 )
  {
    if ( v47 )
      ExFreePoolWithTag(v47, 0);
  }
LABEL_44:
  a2 = v45;
LABEL_45:
  if ( !a6 )
  {
    v32 = (char *)(a2 + 200);
    v33 = (char *)(v6 + 17);
LABEL_48:
    v34 = (char **)*((_QWORD *)v33 + 1);
    if ( *v34 == v33 )
    {
      *(_QWORD *)v32 = v33;
      *((_QWORD *)v32 + 1) = v34;
      *v34 = v32;
      *((_QWORD *)v33 + 1) = v32;
      return 0LL;
    }
LABEL_90:
    __fastfail(3u);
  }
  if ( a6 == 3 )
  {
    v32 = (char *)(a2 + 216);
    v33 = (char *)(v6 + 19);
    goto LABEL_48;
  }
  return 0LL;
}

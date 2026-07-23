/*
 * XREFs of sub_1407AC930 @ 0x1407AC930
 * Callers:
 *     sub_1407AC6B0 @ 0x1407AC6B0 (sub_1407AC6B0.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_1406C9174 @ 0x1406C9174 (sub_1406C9174.c)
 *     sub_1406D8084 @ 0x1406D8084 (sub_1406D8084.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407A5A90 @ 0x1407A5A90 (sub_1407A5A90.c)
 *     sub_1407A6A74 @ 0x1407A6A74 (sub_1407A6A74.c)
 *     sub_1407A7B20 @ 0x1407A7B20 (sub_1407A7B20.c)
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407F58C4 @ 0x1407F58C4 (sub_1407F58C4.c)
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407AC930(__int64 a1, unsigned __int64 a2, _QWORD *a3, int *a4, LARGE_INTEGER *a5)
{
  struct _KTHREAD *CurrentThread; // r9
  int v8; // r10d
  unsigned __int8 v9; // dl
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rax
  int v15; // r12d
  ULONG v16; // r10d
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  ULONG v20; // eax
  ULONG v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  ULONG v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r14d
  ULONG_PTR v29; // rdi
  __int16 v30; // ax
  unsigned __int16 v31; // ax
  char *v32; // rdx
  __int16 v33; // ax
  __int16 v34; // dx
  __int64 v35; // r9
  int v36; // edx
  ULONG_PTR v37; // rsi
  char v38; // cl
  signed __int64 BugCheckParameter4; // rcx
  unsigned int v41; // [rsp+30h] [rbp-A8h]
  int v42; // [rsp+34h] [rbp-A4h]
  int v43; // [rsp+38h] [rbp-A0h]
  int v44; // [rsp+3Ch] [rbp-9Ch]
  int v45; // [rsp+48h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-88h] BYREF
  __int64 v47; // [rsp+58h] [rbp-80h]
  unsigned __int64 v48; // [rsp+60h] [rbp-78h]
  int v49; // [rsp+68h] [rbp-70h]
  __int64 v50; // [rsp+70h] [rbp-68h] BYREF
  struct _KTHREAD *v51; // [rsp+78h] [rbp-60h]
  __int64 v52; // [rsp+80h] [rbp-58h]
  _OWORD v53[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v54; // [rsp+E0h] [rbp+8h]
  __int64 v55; // [rsp+E0h] [rbp+8h]
  _QWORD *v56; // [rsp+F0h] [rbp+18h]

  v56 = a3;
  v54 = a1;
  BugCheckParameter2 = 0LL;
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v51 = CurrentThread;
  v8 = *(_DWORD *)(a1 + 48);
  v45 = v8;
  v47 = *(_QWORD *)a1;
  v52 = v47;
  v9 = *((_BYTE *)CurrentThread + 562);
  v49 = v9;
  v50 = 0LL;
  v48 = -1LL;
  v44 = 0;
  v43 = 0;
  if ( v9 )
  {
    v10 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v50 = *(_QWORD *)v10;
      a5 = (LARGE_INTEGER *)&v50;
    }
    v11 = v8 & 0xC0000000;
    v12 = a2;
    if ( (v8 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        goto LABEL_63;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + 23) = *(_BYTE *)(v12 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        goto LABEL_63;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + 39) = *(_BYTE *)(v12 + 39);
    }
    v13 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      if ( v11 == 0x80000000 )
      {
        v44 = *(_DWORD *)(a2 + 16);
        v43 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v44 = *(_DWORD *)(a2 + 24);
        v43 = *(_DWORD *)(a2 + 32);
      }
    }
    if ( !a4 )
    {
      v15 = 0;
      v42 = 0;
      goto LABEL_36;
    }
    v14 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    v15 = *(_DWORD *)v14;
    v16 = 8;
    if ( v11 == 0x80000000 )
    {
      if ( v15 < 0 )
        v16 = 20;
      v26 = v16 + 16;
      if ( (v15 & 0x40000000) == 0 )
        v26 = v16;
      v21 = v26 + 20;
      if ( (v15 & 0x20000000) == 0 )
        v21 = v26;
      if ( (v15 & 0x10000000) != 0 )
        v21 += 16;
      if ( (v15 & 0x8000000) != 0 )
        v21 += 24;
      v16 = 4;
    }
    else
    {
      v17 = 8;
      if ( v15 < 0 )
        v17 = 32;
      v18 = v17 + 32;
      if ( (v15 & 0x40000000) == 0 )
        v18 = v17;
      v19 = v18 + 32;
      if ( (v15 & 0x20000000) == 0 )
        v19 = v18;
      v20 = v19 + 24;
      if ( (v15 & 0x10000000) == 0 )
        v20 = v19;
      v21 = v20 + 24;
      if ( (v15 & 0x8000000) == 0 )
        v21 = v20;
      if ( (v15 & 0x4000000) != 0 )
        v21 += 8;
    }
    v22 = v21 + 8;
    if ( (v15 & 0x2000000) == 0 )
      v22 = v21;
    v23 = (__int64)a4;
    if ( (unsigned __int64)(v22 - 1) > 0xFFE )
    {
      ProbeForWrite(a4, (unsigned int)v22, v16);
      a3 = v56;
LABEL_35:
      v42 = v15;
LABEL_36:
      if ( a3 )
      {
        v24 = (__int64)a3;
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v24 = 0x7FFFFFFF0000LL;
        v48 = *(_QWORD *)v24;
        v25 = (__int64)a3;
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v25 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v25 = *(_QWORD *)v25;
        v15 = v42;
      }
      a1 = v54;
      v9 = v49;
      goto LABEL_64;
    }
    if ( ((v16 - 1) & (unsigned int)a4) == 0 )
    {
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v23 = *(_BYTE *)v23;
      *(_BYTE *)(v23 + (unsigned int)v22 - 1) = *(_BYTE *)(v23 + (unsigned int)v22 - 1);
      goto LABEL_35;
    }
LABEL_63:
    ExRaiseDatatypeMisalignment();
  }
  v13 = v8 & 0x1000000;
  if ( (v8 & 0x1000000) != 0 )
  {
    v44 = *(_DWORD *)(a2 + 24);
    v43 = *(_DWORD *)(a2 + 32);
  }
  if ( a4 )
    v15 = *a4;
  else
    v15 = 0;
  if ( a3 )
    v48 = *a3;
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 )
    v9 = 1;
LABEL_64:
  if ( v13 )
    v27 = sub_1407A6A74((__int64 *)a1, v44, v43, &BugCheckParameter2, v15);
  else
    v27 = sub_1407A8B00((__int64 *)a1, v9, a5, &BugCheckParameter2, v15);
  v41 = v27;
  v28 = v27;
  if ( !v27 )
  {
    v29 = BugCheckParameter2;
    v30 = 24;
    if ( (v45 & 0xC0000000) != 0x80000000 )
      v30 = 40;
    v31 = *(_WORD *)(BugCheckParameter2 + 240) + v30;
    if ( v56 && (v55 = v31, v31 > v48) )
    {
      memset(v53, 0, sizeof(v53));
      v28 = sub_1406C9174(v47, (_QWORD *)BugCheckParameter2, v53);
      v41 = v28;
      if ( v28 == -1073741789 )
      {
        *v56 = v55;
        sub_1406D8084(v45, v53, v15, (__int64)a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v51;
      if ( (v45 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a2 = *(_WORD *)(v29 + 240);
        *(_WORD *)(a2 + 2) = *(_WORD *)(v29 + 240) + 24;
        v33 = *(_WORD *)(v29 + 246);
        if ( v33 )
          *(_WORD *)(a2 + 6) = v33 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v34 = *(_WORD *)(v29 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v34;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v29 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v29 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v29 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v29 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v29 + 272);
        if ( (*(_DWORD *)(v47 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v34 & 0xC00F;
        v32 = (char *)(a2 + 24);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v29 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v29 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v29 + 272);
        if ( (*(_DWORD *)(v47 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = *(_WORD *)(v29 + 244) & 0xC00F;
        v32 = (char *)(a2 + 40);
      }
      if ( *(_QWORD *)(v29 + 176) )
        sub_1407F58C4(v29, v32);
      else
        sub_1407A7B20(v29, v32);
      if ( a4 )
        sub_1407A9220(v47, v45, v29, v15, (__int64)a4);
    }
    v35 = v47;
    if ( v28 != -1073741789 && *(_QWORD *)(v29 + 64) == v47 )
    {
      *(_QWORD *)(v29 + 64) = 0LL;
      *(_QWORD *)(v29 + 56) = 0LL;
    }
    if ( ((v28 + 0x80000000) & 0x80000000) != 0 || v28 == -1073741789 )
    {
      if ( dword_140C2A158 )
        sub_140966A84(v29);
      v36 = 0;
      v37 = v29 - 48;
      v38 = *(_BYTE *)(v29 - 48 + 16);
      if ( (v38 & 1) != 0 )
      {
        v36 = 0x10000 - *(__int16 *)(v37 + 18);
        *(_BYTE *)(v37 + 16) = v38 & 0xFE;
        *(_WORD *)(v37 + 18) = 0;
      }
      if ( v36 > 0 )
      {
        BugCheckParameter4 = -v36 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 24), -v36);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          sub_1407A5A90(BugCheckParameter2, 1LL);
          v29 = 0LL;
        }
        v28 = v41;
      }
      if ( v29 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v37 + 32);
        sub_1402AFC00(v37 + 32);
        return v41;
      }
    }
    else
    {
      *(_QWORD *)(v29 + 200) = 0LL;
      sub_140662E08(v35, v29, 0x10000);
    }
  }
  return v28;
}

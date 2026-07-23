/*
 * XREFs of sub_14022A8D0 @ 0x14022A8D0
 * Callers:
 *     WmiTraceMessage @ 0x14022A8A0 (WmiTraceMessage.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     WmiTraceMessageVa @ 0x140460660 (WmiTraceMessageVa.c)
 * Callees:
 *     sub_14022A874 @ 0x14022A874 (sub_14022A874.c)
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_14022B0A0 @ 0x14022B0A0 (sub_14022B0A0.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403884A4 @ 0x1403884A4 (sub_1403884A4.c)
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14062D2A0 @ 0x14062D2A0 (sub_14062D2A0.c)
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 */

__int64 __fastcall sub_14022A8D0(
        unsigned __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int16 v6; // r9
  __int64 v7; // rsi
  int v8; // ebx
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // eax
  char v15; // r13
  char v16; // r15
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rdi
  signed __int32 v24; // ecx
  volatile signed __int32 *v25; // rax
  unsigned __int64 v26; // r9
  __int16 v27; // dx
  __int64 v28; // r8
  signed __int32 *v29; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  int *v31; // rdi
  unsigned __int64 v32; // rsi
  char *v33; // rdx
  size_t v34; // r15
  unsigned __int8 v35; // di
  unsigned __int64 v36; // rcx
  char v38; // [rsp+30h] [rbp-108h]
  char v39; // [rsp+31h] [rbp-107h]
  char v40; // [rsp+32h] [rbp-106h]
  unsigned int v41; // [rsp+34h] [rbp-104h]
  char v42[4]; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-FCh]
  unsigned __int8 v44; // [rsp+40h] [rbp-F8h]
  unsigned __int8 v45; // [rsp+48h] [rbp-F0h]
  unsigned __int16 v46; // [rsp+50h] [rbp-E8h]
  unsigned int v47; // [rsp+54h] [rbp-E4h]
  __int64 v48; // [rsp+58h] [rbp-E0h]
  int *v49; // [rsp+60h] [rbp-D8h]
  __int64 v50; // [rsp+68h] [rbp-D0h]
  int v51; // [rsp+70h] [rbp-C8h]
  int v52; // [rsp+74h] [rbp-C4h]
  __int64 v53; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v54; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v55; // [rsp+88h] [rbp-B0h]
  unsigned int v56; // [rsp+90h] [rbp-A8h]
  int v57; // [rsp+94h] [rbp-A4h]
  int v58; // [rsp+98h] [rbp-A0h]
  __int128 *v59; // [rsp+A0h] [rbp-98h]
  __int64 v60; // [rsp+A8h] [rbp-90h] BYREF
  unsigned __int64 v61; // [rsp+B0h] [rbp-88h]
  __int64 v62; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-78h]
  __int64 v64; // [rsp+C8h] [rbp-70h]
  __int128 v65; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-58h]
  __int128 v67; // [rsp+E8h] [rbp-50h] BYREF

  v46 = a4;
  v59 = a3;
  v47 = a2;
  v6 = a1;
  v55 = a1;
  v7 = a5;
  v44 = a6;
  v45 = a6;
  v65 = 0LL;
  v66 = 0LL;
  v42[0] = 0;
  v67 = 0LL;
  v8 = 0;
  v41 = 0;
  v60 = 0LL;
  v9 = 0LL;
  v54 = 0LL;
  v61 = 0LL;
  if ( a6 )
    v10 = *(_QWORD *)(sub_140347DB0(a1, a2, a3, a1) + 864);
  else
    v10 = qword_140D05008;
  v62 = v10;
  v48 = v10;
  v11 = v6;
  v43 = v6;
  if ( (unsigned int)v6 >= *(_DWORD *)(v10 + 16) )
    return (unsigned int)-1073741816;
  v12 = sub_14022AFF8(v6, v10, a6, v42);
  v13 = v12;
  if ( (v64 = v12) == 0 )
    return (unsigned int)-1073741816;
  v14 = *(_DWORD *)(v12 + 12);
  if ( (v14 & 0x80u) != 0 )
  {
    v8 = -1073741790;
    v41 = -1073741790;
    goto LABEL_91;
  }
  if ( !a6 && (v14 & 0x1000000) != 0 )
  {
    v8 = -1073741637;
    v41 = -1073741637;
    goto LABEL_91;
  }
  v50 = 0LL;
  v15 = v47 & 0x40;
  v38 = v47 & 0x40;
  v16 = v47 & 0x80;
  v40 = v47 & 0x80;
  v39 = v47 & 0x80;
  if ( (v47 & 0x40) != 0 )
  {
    if ( !HIDWORD(v55) )
    {
      v8 = -1073741306;
      v41 = -1073741306;
      v10 = v48;
      goto LABEL_91;
    }
    v9 = a5 + HIDWORD(v55);
    v54 = v9;
    v61 = v9;
  }
  v17 = 0LL;
  v55 = 0LL;
  v18 = a5;
  v50 = a5;
  while ( 1 )
  {
    if ( !v15 )
    {
      v19 = v18 + 8;
LABEL_25:
      v20 = *(_QWORD *)(v19 - 8);
      goto LABEL_26;
    }
    if ( !v16 )
    {
      v19 = v18 + 8;
      if ( v19 > v9 )
      {
        v8 = -1073741306;
        v41 = -1073741306;
        v10 = v48;
        v11 = v43;
        goto LABEL_91;
      }
      goto LABEL_25;
    }
    v19 = v18 + 4;
    if ( v19 > v9 )
    {
      v8 = -1073741306;
      v41 = -1073741306;
      v10 = v48;
      v11 = v43;
      goto LABEL_91;
    }
    v20 = *(unsigned int *)(v19 - 4);
LABEL_26:
    v50 = v19;
    if ( !v20 )
      break;
    if ( v15 && v16 )
    {
      v18 = v19 + 4;
      v36 = *(unsigned int *)(v18 - 4);
    }
    else
    {
      v18 = v19 + 8;
      v36 = *(_QWORD *)(v18 - 8);
    }
    v50 = v18;
    if ( v36 )
    {
      v17 += v36;
      v55 = v17;
      if ( v17 < v36 )
      {
        v8 = -1073741675;
        v41 = -1073741675;
        v10 = v48;
        v11 = v43;
        goto LABEL_91;
      }
    }
  }
  v67 = *v59;
  v21 = v47 & 0xFFFFFFFE;
  if ( *(_QWORD *)(v13 + 264) )
    v21 = v47;
  v56 = v21;
  v57 = v21 & 1;
  v51 = v21 & 2;
  v58 = v21 & 4;
  v52 = v21 & 0x20;
  v22 = (v58 != 0 ? 4 : 0)
      + (v52 != 0 ? 8 : 0)
      + ((v21 & 0x18) != 0 ? 8 : 0)
      + v17
      + (v51 != 0 ? 0x10 : 0)
      + 4 * v57
      + 8;
  v47 = v22;
  if ( v17 > v22 )
  {
    v8 = -1073741306;
    v41 = -1073741306;
    if ( EtwEventEnabled(qword_140C15FA8, &stru_140014A18) )
      sub_14062D2A0(&v67, v46, v13 + 136, 3221225990LL);
    sub_14022A874(v13);
    goto LABEL_89;
  }
  v23 = sub_1402ABBF0(v13, v22, (unsigned int)&v65, (unsigned int)&v60, 0);
  v24 = 0;
  v25 = *(volatile signed __int32 **)(v13 + 264);
  if ( v25 )
  {
    v24 = _InterlockedIncrement(v25);
    v17 = v55;
    v8 = 0;
    v15 = v38;
    v26 = v61;
    v54 = v61;
    v16 = v39;
    v40 = v39;
  }
  else
  {
    v26 = v54;
  }
  if ( v23 )
  {
    *(_DWORD *)v23 = -1879048192;
    *(_WORD *)v23 = v47;
    *(_WORD *)(v23 + 4) = v46;
    v27 = 64;
    if ( !v16 )
      v27 = 128;
    v28 = v56;
    *(_WORD *)(v23 + 6) = v27 | v56 & 0x3F;
    v29 = (signed __int32 *)(v23 + 8);
    v49 = v29;
    if ( v57 )
    {
      *v29++ = v24;
      v49 = v29;
    }
    if ( v58 )
    {
      *v29++ = *(_DWORD *)v59;
    }
    else
    {
      if ( !v51 )
        goto LABEL_48;
      *(_OWORD *)v29 = *v59;
      v29 += 4;
    }
    v49 = v29;
LABEL_48:
    if ( (v28 & 8) != 0 )
    {
      *(_QWORD *)v29 = v60;
      v29 += 2;
      v49 = v29;
    }
    if ( v52 )
    {
      CurrentThread = KeGetCurrentThread();
      v52 = *((_DWORD *)CurrentThread + 308);
      v31 = v49;
      *v49 = v52;
      v49 = ++v31;
      v51 = *((_DWORD *)CurrentThread + 306);
      *v31 = v51;
      v29 = v31 + 1;
      v49 = v29;
      v17 = v55;
      v8 = 0;
      v15 = v38;
      v26 = v61;
      v54 = v61;
      v16 = v39;
      v40 = v39;
    }
    v63 = v17;
    v53 = a5;
    while ( 1 )
    {
      if ( v15 && v16 )
      {
        v32 = v7 + 4;
        v33 = (char *)*(unsigned int *)(v32 - 4);
      }
      else
      {
        v32 = v7 + 8;
        v33 = *(char **)(v32 - 8);
      }
      v53 = v32;
      if ( !v33 )
        break;
      if ( !v15 )
        goto LABEL_62;
      if ( v32 >= v26 )
        goto LABEL_71;
      if ( v16 )
      {
        v7 = v32 + 4;
        v34 = *(unsigned int *)(v7 - 4);
      }
      else
      {
LABEL_62:
        v7 = v32 + 8;
        v34 = *(_QWORD *)(v7 - 8);
      }
      v53 = v7;
      if ( v34 )
      {
        if ( v34 > v17 )
        {
LABEL_71:
          v8 = -1073741306;
          v41 = -1073741306;
          break;
        }
        if ( v15 && ((unsigned __int64)&v33[v34] > 0x7FFFFFFF0000LL || &v33[v34] < v33) )
          MEMORY[0x7FFFFFFF0000] = 0;
        memmove(v29, v33, v34);
        v17 -= v34;
        v63 = v17;
        v29 = (signed __int32 *)((char *)v29 + v34);
        v49 = v29;
        v26 = v54;
      }
      v16 = v40;
    }
    v35 = v44;
    v10 = v48;
    if ( v8 >= 0 )
    {
      if ( (*(_DWORD *)(v13 + 12) & 0x80000) != 0 && (!(_BYTE)KdDebuggerNotPresent && !byte_140C09804 || byte_140C40504) )
        sub_1403B3C40(v13, &v65);
      if ( *(_QWORD *)(v13 + 1288) )
        sub_140632EEC(v13, &v65, &v67, v35);
    }
    sub_14022B0A0(&v65, v33, v28, v26);
    goto LABEL_90;
  }
  v8 = sub_1403884A4(v13, v47);
  v41 = v8;
  if ( EtwEventEnabled(qword_140C15FA8, &stru_140014A18) )
    sub_14062D2A0(&v67, v46, v13 + 136, (unsigned int)v8);
LABEL_89:
  v10 = v48;
LABEL_90:
  v11 = v43;
LABEL_91:
  if ( v42[0] )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 448) + 8LL * v11), 1u);
    sub_1402F9540(KeGetCurrentThread());
    return v41;
  }
  return (unsigned int)v8;
}

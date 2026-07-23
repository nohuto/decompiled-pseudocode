/*
 * XREFs of sub_140460192 @ 0x140460192
 * Callers:
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 * Callees:
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_14022B0A0 @ 0x14022B0A0 (sub_14022B0A0.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403884A4 @ 0x1403884A4 (sub_1403884A4.c)
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140460192(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  unsigned int v13; // esi
  char *v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbx
  int j; // edx
  unsigned int v19; // ecx
  char *v20; // rax
  char *v21; // r14
  __int64 v22; // r9
  int i; // esi
  char *v24; // rdx
  size_t v25; // rcx
  size_t v26; // rbx
  unsigned __int64 v27; // rcx
  _OWORD *v28; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v30[4]; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-1C4h]
  char v32; // [rsp+38h] [rbp-1C0h]
  size_t v33; // [rsp+40h] [rbp-1B8h]
  unsigned int v34; // [rsp+48h] [rbp-1B0h]
  int v35; // [rsp+4Ch] [rbp-1ACh]
  int v36; // [rsp+50h] [rbp-1A8h]
  int v37; // [rsp+54h] [rbp-1A4h]
  int v38; // [rsp+58h] [rbp-1A0h]
  __int64 v39; // [rsp+60h] [rbp-198h]
  char *v40; // [rsp+68h] [rbp-190h]
  void *v41; // [rsp+70h] [rbp-188h]
  __int64 v42; // [rsp+78h] [rbp-180h]
  __int64 v43[2]; // [rsp+80h] [rbp-178h] BYREF
  __int128 v44; // [rsp+90h] [rbp-168h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-158h]
  void *Src[32]; // [rsp+B0h] [rbp-148h] BYREF

  v5 = a3;
  LODWORD(v40) = a3;
  v32 = a5;
  v44 = 0LL;
  v45 = 0LL;
  v35 = 0;
  v30[0] = 0;
  v33 = 0LL;
  v31 = 0;
  v43[0] = 0LL;
  v7 = a1;
  v34 = a1;
  if ( a5 )
    v8 = *((_QWORD *)sub_140347DB0() + 108);
  else
    v8 = qword_140D05008;
  v42 = v8;
  v39 = v8;
  if ( v7 >= *(_DWORD *)(v8 + 16) )
    return 3221225480LL;
  v10 = sub_14022AFF8(v7, v8, a5, v30);
  v11 = v10;
  v43[1] = v10;
  if ( !v10 )
    return 3221225480LL;
  v12 = *(_DWORD *)(v10 + 12);
  if ( (v12 & 0x80u) != 0 )
  {
    result = 3221225506LL;
LABEL_9:
    v31 = result;
    goto LABEL_72;
  }
  if ( !a5 && (v12 & 0x1000000) != 0 )
  {
    result = 3221225659LL;
    goto LABEL_9;
  }
  if ( a5 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a2 + v5 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)a2 + v5) < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  LODWORD(v33) = *a2;
  if ( (unsigned int)v33 < (unsigned int)v5 )
  {
    result = 3221225485LL;
    v31 = -1073741811;
    goto LABEL_72;
  }
  v35 = *((_DWORD *)a2 + 11);
  v38 = v35;
  v13 = v33;
  if ( (v35 & 0x100000) == 0 )
  {
LABEL_37:
    v20 = (char *)sub_1402ABBF0(v11, v13, (__int64)&v44, v43, 0);
    v21 = v20;
    v40 = v20;
    if ( v20 )
    {
      if ( (v38 & 0x100000) != 0 )
      {
        v37 = 0;
        v41 = &v20[(unsigned int)v5];
        memmove(v20, a2, (unsigned int)v5);
        for ( i = 0; ; ++i )
        {
          v37 = i;
          if ( i >= SHIDWORD(v33) )
            break;
          v24 = (char *)Src[2 * i];
          v25 = LODWORD(Src[2 * i + 1]);
          if ( v24 && (_DWORD)v25 )
          {
            if ( a5 && ((unsigned __int64)&v24[v25] > 0x7FFFFFFF0000LL || &v24[v25] < v24) )
              MEMORY[0x7FFFFFFF0000] = 0;
            v26 = v25;
            memmove(v41, v24, v25);
            v41 = (char *)v41 + v26;
          }
        }
      }
      else
      {
        if ( a5 && v13 )
        {
          if ( ((unsigned __int8)a2 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v27 = (unsigned __int64)a2 + v13;
          if ( v27 > 0x7FFFFFFF0000LL || v27 < (unsigned __int64)a2 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        memmove(v20, a2, v13);
      }
      if ( (v38 & 0x80000) != 0 )
      {
        v28 = (_OWORD *)*((_QWORD *)a2 + 3);
        if ( a5 && ((unsigned __int8)v28 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(_OWORD *)(v21 + 24) = *v28;
      }
      v8 = v39;
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)v21 = a4 | v33;
      *((_QWORD *)v21 + 2) = v43[0];
      *((_DWORD *)v21 + 10) = *((_DWORD *)CurrentThread + 163);
      *((_DWORD *)v21 + 11) = *((_DWORD *)CurrentThread + 183);
      *((_DWORD *)v21 + 2) = *((_DWORD *)CurrentThread + 308);
      *((_DWORD *)v21 + 3) = *((_DWORD *)CurrentThread + 306);
      if ( (*(_DWORD *)(v11 + 12) & 0x80000) != 0 && (!(_BYTE)KdDebuggerNotPresent && !byte_140C09804 || byte_140C40504) )
        sub_1403B3C40(v11, (__int64)&v44);
      if ( *(_QWORD *)(v11 + 1288) )
      {
        LOBYTE(v22) = a5;
        sub_140632EEC(v11, &v44, v21 + 24, v22);
      }
      sub_14022B0A0((signed __int64 *)&v44);
      result = v31;
    }
    else
    {
      result = sub_1403884A4(v11, v13);
      v31 = result;
      v8 = v39;
    }
    v7 = v34;
    goto LABEL_72;
  }
  v36 = 0;
  v14 = (char *)a2 + v5;
  v15 = v33 - v5;
  if ( (unsigned int)(v33 - v5) <= 0x100 )
  {
    if ( v15 )
    {
      if ( a5 )
      {
        if ( ((unsigned __int8)v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)&v14[v15];
        if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)v14 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v17 = v15;
      memmove(Src, v14, v15);
      v13 = (unsigned int)v40;
      LODWORD(v33) = (_DWORD)v40;
      HIDWORD(v33) = v17 >> 4;
      for ( j = 0; ; ++j )
      {
        v36 = j;
        if ( j >= SHIDWORD(v33) )
          break;
        v19 = (unsigned int)Src[2 * j + 1];
        v13 += v19;
        LODWORD(v33) = v13;
        if ( v13 < v19 )
        {
          result = 2147483653LL;
          v31 = -2147483643;
          v8 = v39;
          goto LABEL_72;
        }
      }
      LODWORD(v5) = (_DWORD)v40;
    }
    goto LABEL_37;
  }
  result = 3221225612LL;
  v31 = -1073741684;
  v8 = v39;
LABEL_72:
  if ( v30[0] )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v8 + 448) + 8LL * v7), 1u);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return v31;
  }
  return result;
}

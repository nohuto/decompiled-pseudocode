/*
 * XREFs of sub_1403AB658 @ 0x1403AB658
 * Callers:
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_1403AB344 @ 0x1403AB344 (sub_1403AB344.c)
 *     sub_1409E3390 @ 0x1409E3390 (sub_1409E3390.c)
 *     sub_1409E386C @ 0x1409E386C (sub_1409E386C.c)
 * Callees:
 *     sub_14022A874 @ 0x14022A874 (sub_14022A874.c)
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_14022B0A0 @ 0x14022B0A0 (sub_14022B0A0.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1403860B0 @ 0x1403860B0 (sub_1403860B0.c)
 *     sub_1403884A4 @ 0x1403884A4 (sub_1403884A4.c)
 *     sub_1403AC324 @ 0x1403AC324 (sub_1403AC324.c)
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     sub_14041A750 @ 0x14041A750 (sub_14041A750.c)
 *     sub_14041A808 @ 0x14041A808 (sub_14041A808.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140460770 @ 0x140460770 (sub_140460770.c)
 *     sub_1404608E8 @ 0x1404608E8 (sub_1404608E8.c)
 *     sub_14062D1C8 @ 0x14062D1C8 (sub_14062D1C8.c)
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 *     sub_140635854 @ 0x140635854 (sub_140635854.c)
 */

char sub_1403AB658(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned int a7,
        char a8,
        ...)
{
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // edx
  unsigned __int16 v18; // r14
  __int64 v19; // r9
  unsigned int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v35[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-84h]
  __int64 v37; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-78h]
  __int64 v39; // [rsp+48h] [rbp-70h]
  __int64 v40; // [rsp+50h] [rbp-68h]
  void *v41; // [rsp+60h] [rbp-58h]
  __int128 v42; // [rsp+68h] [rbp-50h] BYREF
  __int64 v43; // [rsp+78h] [rbp-40h]

  v42 = 0LL;
  v43 = 0LL;
  v10 = 0;
  v35[0] = 0;
  v37 = 0LL;
  v11 = sub_14022AFF8(a4, a1, 1, v35);
  v39 = v11;
  v12 = v11;
  v40 = v11;
  if ( v11 )
  {
    v13 = 0;
    v36 = 0;
    if ( a5 )
    {
      v14 = (_DWORD *)(a2 + 8);
      v15 = a5;
      do
      {
        v13 += *v14;
        v14 += 4;
        --v15;
      }
      while ( v15 );
      v36 = v13;
    }
    v16 = sub_1402ABBF0(v11, v13 + 32, (__int64)&v42, &v37, a7);
    if ( v16 )
    {
      v17 = -1073676288;
      if ( (a7 & 0xC0000000) != 0x80000000 )
        v17 = -1073610752;
      *(_DWORD *)v16 = (unsigned __int8)a7 | v17;
      *(_QWORD *)(v16 + 16) = v37;
      *(_WORD *)(v16 + 4) = v13 + 32;
      v18 = a6;
      *(_WORD *)(v16 + 6) = a6;
      *(_DWORD *)(v16 + 8) = a3[308];
      *(_DWORD *)(v16 + 12) = a3[306];
      *(_DWORD *)(v16 + 24) = a3[163];
      *(_DWORD *)(v16 + 28) = a3[183];
      v41 = (void *)(v16 + 32);
      if ( v16 != -32 )
      {
        v20 = sub_1403AC324((void *)(v16 + 32));
        v38 = v20;
        if ( v20 )
        {
          memset(v41, 0, v13);
          sub_14022A874(v12);
          if ( (unsigned int)sub_14041A808(v22, v21, v23, v24) )
          {
            if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
              sub_14062D1C8(a6, v12 + 136, a7, v20);
          }
          else if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
          {
            sub_14041A750(a6, v12 + 136, v20);
          }
        }
        if ( (*(_DWORD *)(v12 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !byte_140C09804 || byte_140C40504) )
        {
          sub_1403B3C40(v12, &v42);
        }
        if ( *(_QWORD *)(v12 + 1288) )
        {
          LOBYTE(v19) = a8;
          sub_140632EEC(v12, &v42, 0LL, v19);
        }
        sub_14022B0A0((signed __int64 *)&v42);
        v25 = *(_DWORD *)(v12 + 816);
        if ( (v25 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v12 + 1000), a6 & 0x1FFF) )
        {
          sub_140460770(v12, &v37, a3, a7);
          v25 = *(_DWORD *)(v39 + 816);
        }
        if ( (v25 & 0x8000) != 0 )
        {
          v26 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v12 + 1024) + 8LL) )
          {
            while ( 1 )
            {
              v27 = *(_QWORD *)(v12 + 1024);
              if ( *(_WORD *)(v27 + 2LL * v26 + 12) == a6 )
                break;
              if ( ++v26 >= *(_DWORD *)(v27 + 8) )
                goto LABEL_32;
            }
            sub_1404608E8(v12, &v37, a3, a7);
          }
        }
LABEL_32:
        if ( (*(_DWORD *)(v12 + 816) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1032) + 24LL) )
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)(v12 + 1032);
            if ( *(_WORD *)(v28 + 2LL * v10 + 28) == a6 )
              break;
            if ( ++v10 >= *(_DWORD *)(v28 + 24) )
              goto LABEL_44;
          }
          sub_140635854(v12, &v37, a3, a7);
        }
        goto LABEL_44;
      }
    }
    else
    {
      v18 = a6;
    }
    v29 = sub_1403884A4(v12, v13);
    if ( (unsigned int)sub_14041A808(v31, v30, v32, v33) )
    {
      if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
        sub_14062D1C8(v18, v12 + 136, a7, v29);
    }
    else if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
    {
      sub_14041A750(v18, v12 + 136, v29);
    }
LABEL_44:
    LOBYTE(v11) = sub_1403860B0(a4, a1, v35[0]);
  }
  return v11;
}

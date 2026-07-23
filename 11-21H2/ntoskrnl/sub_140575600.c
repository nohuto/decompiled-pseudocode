/*
 * XREFs of sub_140575600 @ 0x140575600
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 * Callees:
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 *     sub_1402916EC @ 0x1402916EC (sub_1402916EC.c)
 *     sub_140573AAC @ 0x140573AAC (sub_140573AAC.c)
 *     sub_14062E650 @ 0x14062E650 (sub_14062E650.c)
 *     sub_14062E754 @ 0x14062E754 (sub_14062E754.c)
 */

char __fastcall sub_140575600(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _UNKNOWN **v4; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int8 v16; // dl
  __int64 v17; // r8
  char v18; // cl
  unsigned __int16 v20[12]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v4 = &retaddr;
  v20[0] = 0;
  if ( byte_140D068F8 )
  {
    LOBYTE(v4) = sub_1402916EC(a2);
    if ( !(_BYTE)v4 )
    {
      *(_QWORD *)(v8 + 1080) += v9;
      v11 = *(_QWORD *)(v8 + 1080);
      v4 = (_UNKNOWN **)__rdtsc();
      v12 = (unsigned __int64)v4 - *(_QWORD *)(a2 + 1072);
      if ( v12 > qword_140D05358 || v10 )
      {
        v4 = (_UNKNOWN **)__rdtsc();
        *(_QWORD *)(a2 + 1080) = 0LL;
        *(_QWORD *)(a2 + 1072) = v4;
        if ( v12 > qword_140D05358 && v11 > qword_140D05368 )
        {
          v13 = __readmsr(0x17D2u);
          v14 = (unsigned __int64)HIDWORD(v13) << 32;
          v15 = v13;
          if ( SBYTE4(xmmword_140D06910) < 0 )
            sub_14062E650(a2, KeGetCurrentPrcb(), v13);
          if ( v15 >= 0 )
          {
            LODWORD(v4) = ++*(_DWORD *)(a2 + 1088);
            if ( (unsigned int)v4 < dword_140D05370 )
              return (char)v4;
            v18 = byte_140D053BC;
            LOBYTE(v4) = dword_140D05374;
            if ( dword_140D05378 )
              v18 = dword_140D05374;
            *(_QWORD *)(a2 + 1092) = 0LL;
            *(_BYTE *)(a2 + 516) = v18;
            *(_DWORD *)(a2 + 1088) = 0;
            if ( (WORD2(xmmword_140D06910) & 0x100) == 0 )
              goto LABEL_19;
            v17 = 16LL;
            LOBYTE(v14) = v18;
            v20[0] = 16;
          }
          else
          {
            v16 = *(_BYTE *)(a2 + 516);
            *(_DWORD *)(a2 + 1088) = 0;
            LOBYTE(v4) = sub_140573AAC(a2, v16, v15, (__int16 *)v20);
            if ( !(_BYTE)v4 )
              return (char)v4;
            *(_BYTE *)(a2 + 516) = v15;
            if ( (WORD2(xmmword_140D06910) & 0x100) == 0 )
              goto LABEL_19;
            v17 = v20[0];
            LOBYTE(v14) = v15;
          }
          LOBYTE(v4) = sub_14062E754(a2, v14, v17);
LABEL_19:
          if ( !a4 )
          {
            *(_BYTE *)(a1 + 13241) = 1;
            LOBYTE(v4) = sub_14022BA6C((struct _KPRCB *)a1, 2);
          }
        }
      }
    }
  }
  return (char)v4;
}

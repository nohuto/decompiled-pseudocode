/*
 * XREFs of sub_1403ABB10 @ 0x1403ABB10
 * Callers:
 *     sub_1403ABA40 @ 0x1403ABA40 (sub_1403ABA40.c)
 * Callees:
 *     sub_14022B0A0 @ 0x14022B0A0 (sub_14022B0A0.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1403ABFD0 @ 0x1403ABFD0 (sub_1403ABFD0.c)
 *     sub_14041A750 @ 0x14041A750 (sub_14041A750.c)
 *     sub_14041A808 @ 0x14041A808 (sub_14041A808.c)
 *     sub_140460770 @ 0x140460770 (sub_140460770.c)
 *     sub_1404608E8 @ 0x1404608E8 (sub_1404608E8.c)
 *     sub_14062D1C8 @ 0x14062D1C8 (sub_14062D1C8.c)
 *     sub_14062F600 @ 0x14062F600 (sub_14062F600.c)
 *     sub_14062F694 @ 0x14062F694 (sub_14062F694.c)
 *     sub_140635854 @ 0x140635854 (sub_140635854.c)
 */

char __fastcall sub_1403ABB10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rax
  int v5; // r12d
  bool v7; // zf
  __int64 v8; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // edi
  LARGE_INTEGER v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  LARGE_INTEGER v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int128 v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER v37; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 4248);
  LOBYTE(v4) = 0;
  v37.QuadPart = 0LL;
  v5 = 0;
  v7 = !_BitScanForward((unsigned int *)&v8, v3);
  v35 = 0LL;
  v36 = 0LL;
  if ( !v7 )
  {
    while ( 1 )
    {
      v3 &= v3 - 1;
      v11 = 32LL * (unsigned int)v8;
      v4 = v11 + a1 + 4284;
      if ( v4 )
      {
        LODWORD(v4) = *(_DWORD *)(v4 + 4);
        if ( (v4 & 4) != 0 )
        {
          LODWORD(v4) = *(unsigned __int8 *)(a1 + 2 * v8 + 4232);
          if ( (unsigned int)v4 < *(_DWORD *)(a1 + 16) )
          {
            _mm_lfence();
            v4 = *(_QWORD *)(a1 + 456);
            v12 = *(_QWORD *)(v4 + 8LL * *(unsigned __int8 *)(a1 + 2 * v8 + 4232));
            if ( (v12 & 1) == 0 )
              break;
          }
        }
      }
LABEL_57:
      v7 = !_BitScanForward((unsigned int *)&v8, v3);
      if ( v7 )
        return v4;
    }
    if ( (*(_DWORD *)(v11 + a1 + 4288) & 0x100) != 0 )
    {
      v13 = 1 << *(_DWORD *)(v12 + 200);
      LOBYTE(v4) = ~(_BYTE)v5;
      if ( (~v5 & v13) != 0 )
      {
        v14 = sub_1402E1D0C(v12, v11);
        v15 = *(unsigned int *)(v12 + 200);
        v37 = v14;
        LOBYTE(v4) = sub_1403ABFD0(a2, a3, v15, &v37);
        v5 |= v13;
      }
      v16 = v12;
LABEL_36:
      if ( a3 )
      {
        v29 = *(_DWORD *)(v16 + 816);
        if ( (v29 & 0x80u) != 0 )
        {
          v4 = *(_QWORD *)(v16 + 1000);
          if ( _bittest((const signed __int32 *)(v4 + 164), 4u) )
          {
            LOBYTE(v4) = sub_140460770(v16, &v37, a3, 4217348LL);
            v29 = *(_DWORD *)(v16 + 816);
          }
        }
        if ( (v29 & 0x8000) != 0 )
        {
          v4 = *(_QWORD *)(v16 + 1024);
          v30 = 0LL;
          if ( *(_DWORD *)(v4 + 8) )
          {
            while ( 1 )
            {
              v31 = *(_QWORD *)(v16 + 1024);
              if ( *(_WORD *)(v31 + 2 * v30 + 12) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v31 + 8);
              v30 = (unsigned int)(v30 + 1);
              if ( (unsigned int)v30 >= (unsigned int)v4 )
                goto LABEL_46;
            }
            LOBYTE(v4) = sub_1404608E8(v16, &v37, a3, 4217348LL);
          }
        }
LABEL_46:
        if ( (*(_DWORD *)(v16 + 816) & 0x4000000) != 0 )
        {
          v4 = *(_QWORD *)(v16 + 1032);
          v32 = 0LL;
          if ( *(_DWORD *)(v4 + 24) )
          {
            while ( 1 )
            {
              v33 = *(_QWORD *)(v16 + 1032);
              if ( *(_WORD *)(v33 + 2 * v32 + 28) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v33 + 24);
              v32 = (unsigned int)(v32 + 1);
              if ( (unsigned int)v32 >= (unsigned int)v4 )
                goto LABEL_57;
            }
            LOBYTE(v4) = sub_140635854(v16, &v37, a3, 4217348LL);
          }
        }
      }
      goto LABEL_57;
    }
    v17 = *(_DWORD *)(v12 + 816);
    v16 = v12;
    if ( (v17 & 0xC00) == 0 )
      goto LABEL_17;
    if ( (v17 & 0x400) != 0 )
    {
      v18 = sub_14062F600(v12, 1316, 24, (unsigned int)&v35, (__int64)&v37, 4217348);
      goto LABEL_19;
    }
    if ( (v17 & 0x800) != 0 && (v22 = 0LL, *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 8LL)) )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v12 + 1016);
        if ( *(_WORD *)(v23 + 2 * v22 + 12) == 1316 )
          break;
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= *(_DWORD *)(v23 + 8) )
          goto LABEL_17;
      }
      v18 = sub_14062F694(v12, 1316, 24, (unsigned int)&v35, (__int64)&v37, 4217348);
    }
    else
    {
LABEL_17:
      v24 = sub_1402ABBF0(v12, 0x28u, (__int64)&v35, (__int64 *)&v37, 4217348);
      if ( !v24 )
      {
LABEL_52:
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_14041A808)(
                             (LARGE_INTEGER)v19.QuadPart,
                             v18,
                             v20,
                             v21) )
        {
          LOBYTE(v4) = EtwEventEnabled(qword_140C15FA8, &stru_1400149F8);
          if ( (_BYTE)v4 )
            LOBYTE(v4) = sub_14062D1C8(1316LL, v12 + 136, 4217348LL, 3221225495LL);
        }
        else
        {
          LOBYTE(v4) = EtwEventEnabled(qword_140C15FA8, &stru_1400149F8);
          if ( (_BYTE)v4 )
            LOBYTE(v4) = sub_14041A750(1316LL, v12 + 136, 3221225495LL);
        }
        goto LABEL_57;
      }
      v19 = v37;
      v18 = v24 + 16;
      *(LARGE_INTEGER *)(v24 + 8) = v37;
      *(_DWORD *)v24 = -1072627708;
      *(_DWORD *)(v24 + 4) = 86245416;
    }
LABEL_19:
    if ( v18 )
    {
      *(_OWORD *)v18 = 0LL;
      *(_QWORD *)(v18 + 16) = 0LL;
      if ( a2 )
      {
        *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 1232);
        *(_BYTE *)(v18 + 9) = *(_BYTE *)(a2 + 195);
        *(_BYTE *)(v18 + 12) = *(_BYTE *)(a2 + 643);
        *(_BYTE *)(v18 + 13) ^= (*(_BYTE *)(v18 + 13) ^ *(_BYTE *)(a2 + 391)) & 1;
        *(_BYTE *)(v18 + 14) = *(_BYTE *)(a2 + 388);
        *(_BYTE *)(v18 + 15) = *(_BYTE *)(a2 + 588);
        *(_BYTE *)(v18 + 13) ^= (*(_BYTE *)(v18 + 13) ^ (2 * *(_BYTE *)(a2 + 512))) & 0xE;
        *(_DWORD *)(v18 + 20) = (*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 72)) >> 10;
        CurrentPrcb = KeGetCurrentPrcb();
        if ( a2 == *((_QWORD *)CurrentPrcb + 3) )
        {
          v26 = *((_QWORD *)CurrentPrcb + 4200);
          if ( v26 )
            *(_BYTE *)(v18 + 10) = *(_BYTE *)(v26 + 20);
        }
        else
        {
          v27 = *(_QWORD *)(a2 + 104);
          if ( v27 )
          {
            v28 = v27 + *((unsigned int *)CurrentPrcb + 54);
            while ( 1 )
            {
              LODWORD(v27) = *(_DWORD *)(v28 + 116);
              if ( (unsigned int)v27 > 0xFF )
                break;
              if ( !(_BYTE)v27 )
              {
                v28 = *(_QWORD *)(v28 + 408);
                if ( v28 )
                  continue;
              }
              goto LABEL_32;
            }
            LOBYTE(v27) = -1;
          }
LABEL_32:
          *(_BYTE *)(v18 + 10) = v27;
        }
      }
      if ( a3 )
      {
        *(_DWORD *)v18 = *(_DWORD *)(a3 + 1232);
        *(_BYTE *)(v18 + 8) = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(a3 + 564);
        *(_BYTE *)(v18 + 13) ^= (*(_BYTE *)(v18 + 13) ^ (16 * *(_BYTE *)(a3 + 512))) & 0x70;
        *(_DWORD *)(v18 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a3 + 436);
      }
      LOBYTE(v4) = sub_14022B0A0((signed __int64 *)&v35);
      goto LABEL_36;
    }
    goto LABEL_52;
  }
  return v4;
}

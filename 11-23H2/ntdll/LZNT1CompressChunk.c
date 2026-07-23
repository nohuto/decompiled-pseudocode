/*
 * XREFs of LZNT1CompressChunk @ 0x18011B17C
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x18011B610 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(_BYTE *),
        _BYTE *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  unsigned __int64 v7; // r13
  char *v8; // rax
  _BYTE *v10; // r14
  char v11; // r8
  _WORD *v12; // r12
  __int64 (__fastcall *v14)(_BYTE *); // r11
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  char *v17; // r9
  int v18; // r10d
  int v19; // esi
  _BYTE *v20; // r15
  _WORD *v21; // rbx
  unsigned int *v22; // r12
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // rax
  _WORD *v27; // rcx
  bool v28; // cf
  __int64 v29; // rdi
  int v31; // ebx
  char v32; // [rsp+20h] [rbp-68h]
  _BYTE *v33; // [rsp+28h] [rbp-60h]
  char *v34; // [rsp+30h] [rbp-58h]
  char v36; // [rsp+98h] [rbp+10h]

  v7 = a5;
  v8 = a2 + 4096;
  v10 = a2;
  v11 = 0;
  v12 = a4;
  v28 = (unsigned __int64)(a2 + 4096) < a3;
  v36 = 0;
  v14 = a1;
  v15 = a7;
  v16 = &LZNT1Formats;
  if ( v28 )
    a3 = (unsigned __int64)v8;
  v33 = &LZNT1Formats;
  *(_QWORD *)a7 = v10;
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v7 = (unsigned __int64)a4 + 4095;
  *(_QWORD *)(a7 + 8) = a3;
  v17 = (char *)(a4 + 1);
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v18) = 0;
  v34 = v17;
  LOBYTE(v19) = 0;
  v32 = 0;
  v20 = v17;
  v21 = v17 + 1;
  if ( (unsigned __int64)v10 < a3 )
  {
    v22 = (unsigned int *)&unk_18015C29C;
    while ( 1 )
    {
      if ( &a2[*v22] < v10 )
      {
        do
        {
          v23 = v16[7];
          v16 += 5;
          *(_DWORD *)(v15 + 16) = v23;
          v22 = v16 + 3;
        }
        while ( &a2[v16[3]] < v10 );
        v33 = v16;
      }
      if ( (unsigned __int64)(v10 + 3) <= a3 )
      {
        LODWORD(v24) = v14(v10);
        if ( (_DWORD)v24 )
        {
          if ( (unsigned __int64)v21 + 1 >= v7 )
            goto LABEL_22;
          LOBYTE(v18) = v32;
          v25 = 2LL;
          v24 = (int)v24;
          v11 = v36;
          v19 = (unsigned __int8)v19 | (1 << v32);
          *v21 = (v24 - 3) | (((_WORD)v10 - *(_WORD *)(a7 + 24) - 1) << v33[16]);
          goto LABEL_17;
        }
        v11 = v36;
        LOBYTE(v18) = v32;
      }
      if ( (unsigned __int64)v21 >= v7 )
        goto LABEL_22;
      v11 |= *v10;
      *(_BYTE *)v21 = *v10;
      v24 = 1LL;
      v25 = 1LL;
      v36 = v11;
      v19 = (unsigned __int8)v19 & ~(1 << v18);
LABEL_17:
      v26 = &v10[v24];
      v27 = (_WORD *)((char *)v21 + v25);
      v10 = v26;
      v18 = ((_BYTE)v18 + 1) & 7;
      v21 = v27;
      v32 = v18;
      if ( v18 )
      {
        v28 = (unsigned __int64)v26 < a3;
        goto LABEL_21;
      }
      v28 = (unsigned __int64)v26 < a3;
      if ( (unsigned __int64)v26 >= a3 )
      {
LABEL_21:
        v16 = v33;
        v15 = a7;
        v14 = a1;
        if ( !v28 )
        {
LABEL_22:
          v12 = a4;
          v11 = v36;
          v17 = v34;
          break;
        }
      }
      else
      {
        v15 = a7;
        v21 = (_WORD *)((char *)v27 + 1);
        v14 = a1;
        *v20 = v19;
        v20 = v27;
        v16 = v33;
        LOBYTE(v19) = 0;
      }
    }
  }
  if ( (unsigned __int64)v10 >= a3 )
  {
    if ( (unsigned __int64)v20 >= v7 )
      LODWORD(v21) = (_DWORD)v21 - 1;
    else
      *v20 = v19;
    v31 = (_DWORD)v21 - (_DWORD)v12;
    *a6 = v31;
    *v12 = (v31 - 3) & 0xFFF | 0xB000;
    return v11 == 0 ? 0x117 : 0;
  }
  else
  {
    v29 = (unsigned int)(a3 - (_DWORD)a2);
    if ( (unsigned __int64)v12 + v29 + 2 > a5 )
    {
      return 3221225507LL;
    }
    else
    {
      memmove(v17, a2, (unsigned int)v29);
      *a6 = v29 + 2;
      *v12 = (v29 - 1) & 0xFFF | 0x3000;
      return 0LL;
    }
  }
}

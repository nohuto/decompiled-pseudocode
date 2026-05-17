/*
 * XREFs of LZNT1CompressChunk @ 0x180118B30
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x180118FB0 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
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
  _WORD *v10; // rbx
  char v11; // r8
  _BYTE *v12; // rsi
  _WORD *v13; // r15
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(_BYTE *); // r11
  _DWORD *v17; // rcx
  unsigned __int8 *v18; // r14
  int v19; // r9d
  unsigned __int8 v20; // r12
  unsigned int *v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  bool v28; // cf
  unsigned int v29; // edi
  int v31; // ebx
  _BYTE *v32; // [rsp+20h] [rbp-58h]
  char v34; // [rsp+88h] [rbp+10h]
  char v35; // [rsp+90h] [rbp+18h]

  v7 = a5;
  v8 = a2 + 4096;
  v10 = (_WORD *)((char *)a4 + 3);
  v11 = 0;
  v12 = a2;
  v28 = (unsigned __int64)(a2 + 4096) < a3;
  v34 = 0;
  v13 = a4;
  v15 = a7;
  if ( v28 )
    a3 = (unsigned __int64)v8;
  v16 = a1;
  v17 = &LZNT1Formats;
  v32 = &LZNT1Formats;
  v18 = (unsigned __int8 *)(a4 + 1);
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v7 = (unsigned __int64)a4 + 4095;
  *(_QWORD *)a7 = v12;
  LOBYTE(v19) = 0;
  *(_QWORD *)(a7 + 8) = a3;
  v20 = 0;
  v35 = 0;
  *(_DWORD *)(a7 + 16) = 4098;
  if ( (unsigned __int64)v12 >= a3 )
    goto LABEL_27;
  v18 = (unsigned __int8 *)(v13 + 1);
  v21 = (unsigned int *)&unk_18014FABC;
  do
  {
    if ( &a2[*v21] < v12 )
    {
      do
      {
        v22 = v17[7];
        v17 += 5;
        *(_DWORD *)(v15 + 16) = v22;
      }
      while ( &a2[v17[3]] < v12 );
      v11 = v34;
      v21 = v17 + 3;
      v32 = v17;
    }
    if ( (unsigned __int64)(v12 + 3) <= a3 )
    {
      v23 = v16(v12);
      v24 = v23;
      if ( v23 )
      {
        if ( (unsigned __int64)v10 + 1 >= v7 )
          break;
        LOBYTE(v19) = v35;
        v25 = 2LL;
        *v10 = (v23 - 3) | (((_WORD)v12 - *(_WORD *)(a7 + 24) - 1) << v32[16]);
        v26 = v20 | (1 << v35);
        v27 = v24;
        v11 = v34;
        goto LABEL_17;
      }
      v11 = v34;
      LOBYTE(v19) = v35;
    }
    if ( (unsigned __int64)v10 >= v7 )
      break;
    v25 = 1LL;
    v11 |= *v12;
    *(_BYTE *)v10 = *v12;
    v27 = 1LL;
    v26 = v20 & ~(1 << v19);
    v34 = v11;
LABEL_17:
    v12 += v27;
    v10 = (_WORD *)((char *)v10 + v25);
    v20 = v26;
    v19 = ((_BYTE)v19 + 1) & 7;
    v35 = v19;
    if ( !v19 )
    {
      v28 = (unsigned __int64)v12 < a3;
      if ( (unsigned __int64)v12 >= a3 )
        goto LABEL_21;
      *v18 = v26;
      v20 = 0;
      v18 = (unsigned __int8 *)v10;
      v10 = (_WORD *)((char *)v10 + 1);
    }
    v28 = (unsigned __int64)v12 < a3;
LABEL_21:
    v17 = v32;
    v15 = a7;
    v16 = a1;
  }
  while ( v28 );
  v13 = a4;
  if ( (unsigned __int64)v12 < a3 )
  {
    v29 = a3 - (_DWORD)a2;
    if ( (unsigned __int64)a4 + v29 + 2 > a5 )
      return 3221225507LL;
    memmove(a4 + 1, a2, v29);
    *a6 = v29 + 2;
    *a4 = (v29 - 1) & 0xFFF | 0x3000;
    return 0LL;
  }
  v11 = v34;
LABEL_27:
  if ( (unsigned __int64)v18 >= v7 )
    LODWORD(v10) = (_DWORD)v10 - 1;
  else
    *v18 = v20;
  v31 = (_DWORD)v10 - (_DWORD)v13;
  *a6 = v31;
  *v13 = (v31 - 3) & 0xFFF | 0xB000;
  return v11 == 0 ? 0x117 : 0;
}

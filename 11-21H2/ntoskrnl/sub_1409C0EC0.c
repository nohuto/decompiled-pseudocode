/*
 * XREFs of sub_1409C0EC0 @ 0x1409C0EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtractBitMap @ 0x1405E5500 (RtlExtractBitMap.c)
 *     sub_1409C2AF0 @ 0x1409C2AF0 (sub_1409C2AF0.c)
 *     sub_1409C4F84 @ 0x1409C4F84 (sub_1409C4F84.c)
 *     sub_1409C505C @ 0x1409C505C (sub_1409C505C.c)
 *     sub_1409C52E0 @ 0x1409C52E0 (sub_1409C52E0.c)
 */

__int64 __fastcall sub_1409C0EC0(__int64 a1, ULONG a2, __int64 a3, int a4, int a5, unsigned int *a6, __int64 a7)
{
  ULONG *v7; // rsi
  unsigned int v10; // edi
  __int64 result; // rax
  int v12; // r11d
  unsigned int v13; // r13d
  unsigned int v14; // r14d
  ULONG v15; // r10d
  unsigned __int8 *v16; // r9
  unsigned int v17; // r11d
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned __int8 *v20; // r9
  int v21; // ebx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // ecx
  ULONG v26; // r9d
  ULONG v27; // r12d
  _OWORD *v28; // [rsp+20h] [rbp-50h] BYREF
  int v29; // [rsp+28h] [rbp-48h] BYREF
  __int16 v30; // [rsp+2Ch] [rbp-44h]
  ULONG *v31; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-38h]
  unsigned int v33; // [rsp+3Ch] [rbp-34h]
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-28h]
  unsigned int v36; // [rsp+4Ch] [rbp-24h]
  _RTL_BITMAP Destination; // [rsp+50h] [rbp-20h] BYREF
  _RTL_BITMAP Source; // [rsp+60h] [rbp-10h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+30h]

  v39 = a1;
  *(_QWORD *)&Destination.SizeOfBitMap = 0LL;
  v7 = (ULONG *)a3;
  LODWORD(Destination.Buffer) = 0;
  *(_QWORD *)&Source.SizeOfBitMap = 0LL;
  LODWORD(Source.Buffer) = 0;
  v29 = 0;
  v30 = 0;
  if ( (unsigned int)(a4 - 6) <= 0x1FFFFFF9 )
  {
    LODWORD(v28) = *(_DWORD *)a3;
    v10 = 48;
    WORD2(v28) = *(_WORD *)(a3 + 4);
    v31 = (ULONG *)a3;
    result = sub_1409C52E0(&v28, &v29);
    if ( (int)result < 0 )
      return result;
    v34 = a1;
    v13 = 8 * v12;
    v36 = a2;
    *(_QWORD *)a7 = &v29;
    v14 = 0;
    v28 = (_OWORD *)(a7 + 8);
    v35 = 0;
    *(_OWORD *)(a7 + 8) = 0LL;
    while ( 1 )
    {
      v15 = v10 + 32;
      if ( v10 + 32 > v13 )
        break;
      v16 = (unsigned __int8 *)v7 + ((unsigned __int64)v10 >> 3);
      v17 = 8 - (v10 & 7);
      v18 = v17;
      if ( v17 >= 0x20 )
        v18 = 32LL;
      v19 = *v16;
      v20 = v16 + 1;
      v21 = *(_DWORD *)&byte_14001BB70[4 * v18] & (v19 >> (8 - v17));
      v22 = (unsigned int)(32 - v18);
      if ( (unsigned int)v22 >= 8 )
      {
        v23 = (unsigned __int64)(unsigned int)v22 >> 3;
        do
        {
          v24 = *v20 << v17;
          LOBYTE(v17) = v17 + 8;
          v21 |= v24;
          v22 = (unsigned int)(v22 - 8);
          ++v20;
          --v23;
        }
        while ( v23 );
      }
      if ( (_DWORD)v22 )
        v21 |= (*v20 & *(_DWORD *)&byte_14001BB70[4 * v22]) << v17;
      v32 = v10 + 32;
      v25 = v21 & 0xFFFFFFF;
      if ( (v21 & 0xFFFFFFFu) < 0x20 || v10 + v25 > v13 || (v21 & 0x10000000) != 0 )
        break;
      v26 = v25 - 32;
      v10 += v25;
      v33 = v15 + v25 - 32;
      if ( (v21 & 0x20000000) != 0 )
      {
        if ( (v21 & 0x40000000) != 0 )
        {
          result = sub_1409C505C(&v29, v28, &v31);
          if ( (int)result < 0 )
            return result;
        }
        result = sub_1409C2AF0(a7, &v31, &v34);
        if ( (int)result < 0 )
          return result;
        v10 = v32;
        v7 = v31;
        a2 = v36;
        v14 = v35;
        v39 = v34;
      }
      else
      {
        if ( (v26 & 7) != 0 )
          return 3221226050LL;
        v27 = v14 + (v26 >> 3);
        if ( v27 > a2 )
          return 3221226050LL;
        Source.SizeOfBitMap = v15 + v26;
        Source.Buffer = v7;
        Destination.SizeOfBitMap = 8 * (a2 - v14);
        Destination.Buffer = (PULONG)(v39 + v14);
        RtlExtractBitMap(&Source, &Destination, v15, v26);
        v14 = v27;
        v35 = v27;
        v32 = v10;
        *v28 = 0LL;
      }
      if ( v21 < 0 )
      {
        v33 = v13;
        result = sub_1409C4F84(&v29, &v34, &v31);
        *a6 = v35;
        return result;
      }
    }
  }
  return 3221226050LL;
}

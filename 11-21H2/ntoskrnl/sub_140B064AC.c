/*
 * XREFs of sub_140B064AC @ 0x140B064AC
 * Callers:
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14082BB8C @ 0x14082BB8C (sub_14082BB8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall sub_140B064AC(_DWORD *a1, int *a2)
{
  unsigned __int16 v2; // ax
  int *v3; // r13
  int v4; // r12d
  int v5; // esi
  unsigned __int16 v6; // bx
  _WORD *v7; // rdi
  _DWORD *v8; // r14
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // di
  __int64 i; // r14
  unsigned __int16 v13; // bx
  int v14; // eax
  unsigned int v15; // r8d
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // al
  PVOID v20; // rcx
  __int64 *v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  _DWORD *result; // rax
  __int16 v25; // ax
  PVOID P; // [rsp+38h] [rbp-20h] BYREF
  size_t v27[3]; // [rsp+40h] [rbp-18h] BYREF
  int v30; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+60h]

  v2 = word_140D05000;
  v31 = 0;
  v3 = a2;
  v4 = 0;
  v27[0] = 0LL;
  v5 = 0;
  v30 = 0;
  LODWORD(P) = 0;
  v6 = 0;
  if ( word_140D05000 )
  {
    do
    {
      v7 = (_WORD *)qword_140D31700[v6];
      sub_14042A5E0(v6, &v30);
      v8 = v7 + 2;
      v7[4] = v30;
      v4 += v30;
      if ( qword_140C2B108 )
      {
        sub_14042A5E0(v6, v7 + 2);
        sub_14042A5E0(v31, v7 + 1);
        if ( *v8 == v31 )
          ++v5;
      }
      else
      {
        v25 = *v7;
        v5 = 1;
        *v8 = 0;
        v7[1] = v25;
      }
      v2 = word_140D05000;
      ++v6;
    }
    while ( v6 < (unsigned __int16)word_140D05000 );
    v3 = a2;
    LODWORD(P) = v4;
  }
  if ( v2 > 1u )
  {
    off_140D05088 = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2 * (unsigned int)v2, 0x2020654Bu);
    if ( !off_140D05088 )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v9 = word_140D05000;
  v10 = 0;
  if ( word_140D05000 )
  {
    do
    {
      v11 = 0;
      for ( i = qword_140D31700[v10]; v11 < v9; ++v11 )
      {
        sub_14042A5E0(v10, v11);
        v9 = word_140D05000;
        *((_DWORD *)off_140D05088 + v11 + v10 * (unsigned __int16)word_140D05000) = 0;
        if ( v10 != v11 )
          *(_BYTE *)(i + 10) |= 4u;
      }
      ++v10;
    }
    while ( v10 < v9 );
    v4 = (int)P;
    v3 = a2;
  }
  P = 0LL;
  v13 = 0;
  if ( v9 )
  {
    do
    {
      if ( *(_WORD *)qword_140D31700[v13] == *(_WORD *)(qword_140D31700[v13] + 2) )
      {
        v14 = sub_14082BB8C(0, v13, &P, v27);
        if ( v14 < 0 )
          KeBugCheckEx(0x32u, v14, 0LL, 0LL, 0LL);
        v15 = 0;
        v16 = 1;
        if ( v27[0] / 0x28 )
        {
          v17 = 0LL;
          while ( !*((_QWORD *)P + 5 * v17 + 1) )
          {
            v17 = ++v15;
            if ( v15 >= v27[0] / 0x28 )
              goto LABEL_22;
          }
          v16 = 0;
        }
LABEL_22:
        v18 = qword_140D31700[v13];
        v19 = v16 | *(_BYTE *)(v18 + 10) & 0xFE;
        v20 = P;
        *(_BYTE *)(v18 + 10) = v19;
        ExFreePoolWithTag(v20, 0);
        P = 0LL;
      }
      ++v13;
    }
    while ( v13 < (unsigned __int16)word_140D05000 );
    if ( word_140D05000 )
    {
      v21 = qword_140D31700;
      v22 = (unsigned __int16)word_140D05000;
      do
      {
        v23 = *(unsigned __int16 *)(*v21 + 2);
        if ( *(_WORD *)*v21 != (_WORD)v23 )
          *(_BYTE *)(*v21 + 10) ^= (*(_BYTE *)(*v21 + 10) ^ *(_BYTE *)(qword_140D31700[v23] + 10)) & 1;
        ++v21;
        --v22;
      }
      while ( v22 );
    }
  }
  result = a1;
  *v3 = v5;
  *a1 = v4;
  return result;
}

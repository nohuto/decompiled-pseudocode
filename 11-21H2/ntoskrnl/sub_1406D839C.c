/*
 * XREFs of sub_1406D839C @ 0x1406D839C
 * Callers:
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DDEC0 @ 0x1402DDEC0 (sub_1402DDEC0.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall sub_1406D839C(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int v5; // r13d
  unsigned int v6; // r10d
  int v7; // ebp
  unsigned int v8; // ebp
  void *v9; // r12
  void *v10; // r15
  _WORD *v11; // rdi
  unsigned int *v12; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // eax
  void *v15; // r11
  unsigned int v16; // r9d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // r12
  _DWORD *v23; // r14
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  wchar_t *v26; // rdx
  char *v27; // rbx
  wchar_t *v28; // rdx
  __int64 result; // rax
  __int64 v30; // rax
  unsigned int *v31; // rcx
  unsigned int Length; // ecx
  unsigned int v33; // r14d
  wchar_t *Buffer; // rdx
  __int64 v35; // rbx
  char v36; // [rsp+20h] [rbp-88h]
  char v37; // [rsp+21h] [rbp-87h]
  int v38; // [rsp+24h] [rbp-84h]
  unsigned int v39; // [rsp+28h] [rbp-80h]
  unsigned int v40; // [rsp+2Ch] [rbp-7Ch]
  unsigned int *v41; // [rsp+30h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-70h] BYREF
  void *v43; // [rsp+50h] [rbp-58h]

  v4 = *(unsigned int **)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 56) + 1;
  v36 = 0;
  v41 = v4;
  UnicodeString = 0LL;
  v38 = 0;
  v8 = v7 & 0xFFFFFFFE;
  v37 = 1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v4;
  v13 = 0;
  v39 = 0;
  do
  {
    v14 = 0;
    v40 = 0;
    if ( v12[4] )
    {
      v15 = 0LL;
      v43 = 0LL;
      while ( 1 )
      {
        v16 = v13;
        v17 = 8LL * v14;
        v18 = *(_QWORD *)&v12[v17 + 6] - 0x11D1AADBC7BF35D2LL;
        if ( *(_QWORD *)&v12[v17 + 6] == 0x11D1AADBC7BF35D2LL )
          v18 = *(_QWORD *)&v12[v17 + 8] - 0x102906C9A0004ABFLL;
        if ( !v18 )
          goto LABEL_43;
        v19 = *(_QWORD *)&v12[v17 + 6] - 0x11D1AADBC7BF35D3LL;
        if ( *(_QWORD *)&v12[v17 + 6] == 0x11D1AADBC7BF35D3LL )
          v19 = *(_QWORD *)&v12[v17 + 8] - 0x102906C9A0004ABFLL;
        if ( !v19 )
        {
LABEL_43:
          v37 = 0;
          if ( v10 )
          {
            ObfDereferenceObject(v10);
            v4 = v41;
            v10 = 0LL;
            v6 = v38;
            v16 = v13;
            v15 = v43;
          }
        }
        v20 = v12[v17 + 10];
        if ( (v20 & 0x20) == 0 )
          goto LABEL_11;
        if ( !v11 )
        {
          v30 = v4[1];
          v31 = v4;
          while ( (_DWORD)v30 )
          {
            v31 = (unsigned int *)((char *)v31 + v30);
            v30 = v31[1];
          }
          v11 = (_WORD *)((char *)v31 + ((*v31 + 1) & 0xFFFFFFFE));
          v5 = a3 + (_DWORD)v4 - (_DWORD)v11;
        }
        v13 = v12[v17 + 11];
        v9 = *(void **)&v12[v17 + 12];
        if ( v16 >= v13 )
          v13 = v16;
        v39 = v13;
        if ( v9 == v15 )
        {
          v12[v17 + 12] = v6;
          v12[v17 + 10] = v20 | 8;
          goto LABEL_30;
        }
        if ( (int)sub_1402DDEC0((ULONG_PTR)v9, &UnicodeString) >= 0 )
          break;
LABEL_30:
        if ( a2 == 11 )
        {
          ObfDereferenceObject(v9);
          v39 = v13;
        }
LABEL_11:
        v4 = v41;
        v14 = v40 + 1;
        v6 = v38;
        v15 = v43;
        v40 = v14;
        if ( v14 >= v12[4] )
          goto LABEL_12;
      }
      if ( v37 )
      {
        if ( !v10 )
        {
          v10 = v9;
          ObfReferenceObject(v9);
          goto LABEL_39;
        }
        if ( v10 == v9 )
        {
LABEL_39:
          Length = UnicodeString.Length;
          v33 = UnicodeString.Length + 4;
          v8 += v33;
          if ( v36 || v33 > v5 )
          {
            v36 = 1;
          }
          else
          {
            v12[v17 + 10] |= 8u;
            Buffer = UnicodeString.Buffer;
            v12[v17 + 12] = (_DWORD)v11 - (_DWORD)v12;
            v38 = (_DWORD)v11 - (_DWORD)v12;
            v35 = Length;
            v43 = v9;
            *v11 = Length + 2;
            memmove(v11 + 1, Buffer, Length);
            *(_WORD *)((char *)v11 + v35 + 2) = 95;
            v11 = (_WORD *)((char *)v11 + v35 + 4);
            v5 -= v33;
          }
          RtlFreeUnicodeString(&UnicodeString);
          v13 = v39;
          goto LABEL_30;
        }
      }
      v37 = 0;
      if ( v10 )
      {
        ObfDereferenceObject(v10);
        v10 = 0LL;
      }
      goto LABEL_39;
    }
LABEL_12:
    v21 = v12[1];
    v12 = (unsigned int *)((char *)v12 + v21);
  }
  while ( (_DWORD)v21 );
  if ( v37 && v10 )
  {
    if ( (int)sub_1402DDEC0((ULONG_PTR)v9, &UnicodeString) >= 0 )
    {
      v22 = UnicodeString.Length;
      v23 = (_DWORD *)(((unsigned __int64)v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v24 = (((_DWORD)v11 + 7) & 0xFFFFFFF8) - (_DWORD)v11;
      v25 = 2 * UnicodeString.Length + 96;
      v8 += v24 + v25;
      if ( v36 || v25 > v5 - v24 )
      {
        v36 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        ObfReferenceObject(v10);
        *(_QWORD *)(a4 + 24) = v10;
        *(_DWORD *)(a4 + 52) = v39;
        v12[1] = (_DWORD)v23 - (_DWORD)v12;
        memset(v23, 0, 0x58uLL);
        v26 = UnicodeString.Buffer;
        v23[4] = 2;
        *v23 = v25;
        v23[10] = 40;
        v27 = (char *)v23 + 90;
        v23[11] = v39;
        v23[12] = 88;
        *(_OWORD *)(v23 + 6) = xmmword_140010B40;
        *((_WORD *)v23 + 44) = v22 + 2;
        memmove((char *)v23 + 90, v26, (unsigned int)v22);
        v28 = UnicodeString.Buffer;
        *(_WORD *)&v27[v22] = 95;
        v23[18] = 4;
        v23[19] = 1;
        v23[20] = v22 + 92;
        *(_OWORD *)(v23 + 14) = xmmword_140010B30;
        *(_WORD *)&v27[v22 + 2] = v22;
        memmove((char *)v23 + v22 + 94, v28, (unsigned int)v22);
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    ObfDereferenceObject(v10);
  }
  *v41 = v8;
  result = 4LL;
  if ( !v36 )
    result = v8;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}

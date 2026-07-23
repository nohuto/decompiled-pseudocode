/*
 * XREFs of ExRaiseHardError @ 0x140A02230
 * Callers:
 *     sub_1406CDD90 @ 0x1406CDD90 (sub_1406CDD90.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_140911AE0 @ 0x140911AE0 (sub_140911AE0.c)
 *     sub_14091D6C0 @ 0x14091D6C0 (sub_14091D6C0.c)
 *     sub_1409345F0 @ 0x1409345F0 (sub_1409345F0.c)
 *     sub_140934B80 @ 0x140934B80 (sub_140934B80.c)
 *     sub_140934E20 @ 0x140934E20 (sub_140934E20.c)
 *     sub_1409F7CD0 @ 0x1409F7CD0 (sub_1409F7CD0.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041AC58 @ 0x14041AC58 (sub_14041AC58.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406CDFAC @ 0x1406CDFAC (sub_1406CDFAC.c)
 */

int __fastcall ExRaiseHardError(unsigned int a1, unsigned int a2, unsigned int a3, char *a4, int a5, unsigned int *a6)
{
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int *v10; // r15
  unsigned int v11; // r13d
  int result; // eax
  ULONG_PTR v13; // rdx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // r8
  _OWORD **v16; // r9
  char *v17; // r13
  char *v18; // rcx
  wchar_t *v19; // r8
  __int64 j; // r15
  __int64 v21; // rax
  UNICODE_STRING *v22; // rcx
  __int64 v23; // rbx
  int v24; // ebx
  ULONG_PTR v25; // r15
  unsigned int v26; // edx
  char *v27; // r8
  _QWORD *v28; // r15
  char *v29; // r13
  __int64 i; // rbx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-188h] BYREF
  int v35; // [rsp+48h] [rbp-180h]
  unsigned int v36; // [rsp+4Ch] [rbp-17Ch] BYREF
  unsigned int v37; // [rsp+50h] [rbp-178h]
  PVOID BaseAddress; // [rsp+58h] [rbp-170h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-168h]
  unsigned int v40; // [rsp+68h] [rbp-160h]
  unsigned int v41; // [rsp+70h] [rbp-158h]
  wchar_t *v42; // [rsp+78h] [rbp-150h]
  unsigned int *v43; // [rsp+80h] [rbp-148h]
  PVOID v44[3]; // [rsp+88h] [rbp-140h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-128h]
  wchar_t *v46; // [rsp+A8h] [rbp-120h]
  _OWORD v47[2]; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-F8h]
  _OWORD v49[2]; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+100h] [rbp-C8h]
  void *Src[10]; // [rsp+130h] [rbp-98h] BYREF

  v8 = a2;
  v9 = a1;
  v37 = a1;
  v39 = a1;
  v40 = a2;
  v41 = a3;
  v44[1] = a4;
  v10 = a6;
  v43 = a6;
  v11 = 0;
  v36 = 0;
  RegionSize = 0LL;
  v44[0] = 0LL;
  BaseAddress = 0LL;
  result = sub_14041AC58();
  if ( result )
  {
    memset(v49, 0, sizeof(v49));
    v50 = 0LL;
    memset(v47, 0, sizeof(v47));
    v48 = 0LL;
    v25 = 80LL;
    memset(Src, 0, sizeof(Src));
    if ( byte_140D01198 )
    {
      v24 = 0;
      v11 = 1;
    }
    else if ( (unsigned int)v8 <= 5 )
    {
      if ( a4 )
      {
        memmove(v49, a4, 8 * v8);
        memmove(v47, a4, 8 * v8);
        if ( a3 )
        {
          RegionSize = 80LL;
          v26 = 0;
          if ( (_DWORD)v8 )
          {
            v27 = a4;
            do
            {
              if ( _bittest((const int *)&a3, v26) )
              {
                v25 += *(unsigned __int16 *)(*(_QWORD *)v27 + 2LL);
                RegionSize = v25;
              }
              ++v26;
              v27 += 8;
            }
            while ( v26 < (unsigned int)v8 );
          }
          v24 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v44, 0LL, &RegionSize, 0x1000u, 4u);
          if ( v24 < 0 )
            goto LABEL_44;
          v28 = v44[0];
          v44[2] = v44[0];
          v29 = (char *)v44[0] + 80;
          v42 = (wchar_t *)((char *)v44[0] + 80);
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v35 = i;
            if ( (unsigned int)i >= (unsigned int)v8 )
              break;
            if ( _bittest((const int *)&a3, i) )
            {
              v45 = (unsigned int)i;
              *(_OWORD *)&Src[2 * (unsigned int)i] = *(_OWORD *)*(_QWORD *)&a4[8 * i];
              v28[2 * (unsigned int)i + 1] = v29;
              WORD1(v28[2 * (unsigned int)i]) = WORD1(Src[2 * (unsigned int)i]);
              LOWORD(v28[2 * (unsigned int)i]) = Src[2 * (unsigned int)i];
              memmove(v29, Src[2 * (unsigned int)i + 1], WORD1(Src[2 * (unsigned int)i]));
              v31 = v45;
              v32 = 2 * v45;
              Src[v32 + 1] = v29;
              v29 += WORD1(Src[v32]);
              v42 = (wchar_t *)v29;
              v33 = 2LL * (unsigned int)i;
              *((_QWORD *)v49 + v31) = &v28[v33];
              *((_QWORD *)v47 + v31) = &Src[v33];
            }
          }
        }
      }
      v24 = sub_1406CDFAC(v37, v8, a3, v49, (__int64)v47, a5, &v36);
      v11 = v36;
    }
    else
    {
      v24 = -1073741584;
    }
LABEL_44:
    *v43 = v11;
    if ( v44[0] )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v44, &RegionSize, 0x8000u);
    }
    return v24;
  }
  if ( byte_140D01198 )
  {
    *a6 = 1;
    return result;
  }
  *a6 = 0;
  if ( (unsigned int)v8 > 5 )
    return -1073741584;
  if ( !a4 )
    goto LABEL_22;
  if ( !a3 )
  {
    BaseAddress = a4;
LABEL_22:
    v24 = sub_1406CDFAC(v9, v8, a3, BaseAddress, (__int64)BaseAddress, a5, &v36);
    if ( BaseAddress && BaseAddress != a4 )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    *v10 = v36;
    return v24;
  }
  v13 = 136LL;
  RegionSize = 136LL;
  v14 = 0;
  if ( (_DWORD)v8 )
  {
    v15 = (unsigned __int16 *)v49 + 1;
    v16 = (_OWORD **)a4;
    do
    {
      if ( _bittest((const int *)&a3, v14) )
      {
        *(_OWORD *)(v15 - 1) = **v16;
        v13 += *v15;
        RegionSize = v13;
      }
      ++v14;
      ++v16;
      v15 += 8;
    }
    while ( v14 < (unsigned int)v8 );
  }
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( result >= 0 )
  {
    v17 = (char *)BaseAddress;
    v18 = (char *)BaseAddress + 40;
    v19 = (wchar_t *)((char *)BaseAddress + 120);
    v42 = (wchar_t *)((char *)BaseAddress + 120);
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v35 = j;
      if ( (unsigned int)j >= (unsigned int)v8 )
        break;
      if ( _bittest((const int *)&a3, j) )
      {
        *(_QWORD *)&v17[8 * j] = &v18[16 * (unsigned int)j];
        v21 = (unsigned int)j;
        v22 = (UNICODE_STRING *)&v18[v21 * 16];
        v22->Buffer = v19;
        v23 = WORD1(v49[v21]);
        v22->MaximumLength = v23;
        RtlCopyUnicodeString(v22, (PCUNICODE_STRING)&v49[v21]);
        v19 = (wchar_t *)((char *)v42 + v23);
        v42 = v19;
        v46 = v19;
        v18 = v17 + 40;
      }
      else
      {
        *(_QWORD *)&v17[8 * j] = *(_QWORD *)&a4[8 * j];
      }
    }
    v10 = v43;
    v9 = v37;
    goto LABEL_22;
  }
  return result;
}

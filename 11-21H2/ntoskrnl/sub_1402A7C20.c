/*
 * XREFs of sub_1402A7C20 @ 0x1402A7C20
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1403954A0 @ 0x1403954A0 (sub_1403954A0.c)
 * Callees:
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402A7C20(__int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int v5; // r15d
  unsigned int v6; // r12d
  bool v9; // si
  __int64 result; // rax
  __int64 v11; // rbx
  _DWORD *v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // ebx
  unsigned __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // ebx
  ULONG_PTR v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  ULONG_PTR v25; // r14
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // r8d
  unsigned __int64 v32; // rdx
  bool v33; // [rsp+30h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-89h] BYREF
  int v35; // [rsp+48h] [rbp-81h] BYREF
  unsigned int BugCheckParameter3; // [rsp+4Ch] [rbp-7Dh]
  unsigned int BugCheckParameter3_4; // [rsp+50h] [rbp-79h]
  unsigned int v38; // [rsp+54h] [rbp-75h]
  __int64 v39; // [rsp+58h] [rbp-71h] BYREF
  __int64 v40; // [rsp+60h] [rbp-69h]
  __int64 v41; // [rsp+68h] [rbp-61h] BYREF
  __int128 v42; // [rsp+70h] [rbp-59h]
  __int128 v43; // [rsp+80h] [rbp-49h]
  _QWORD v44[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-19h]
  _QWORD v47[4]; // [rsp+C0h] [rbp-9h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = BYTE4(xmmword_140D06900) & 0x80;
  BugCheckParameter2 = 0LL;
  v6 = 0;
  v38 = a4;
  v45 = 0LL;
  v41 = a3;
  v46 = 0LL;
  v40 = v4;
  v42 = 0LL;
  v43 = 0LL;
  BugCheckParameter3 = *(_DWORD *)(v4 + 484);
  v9 = (DWORD2(xmmword_140D06900) & 0x20000) != 0;
  v33 = v9;
  while ( 1 )
  {
    result = v6++;
    BugCheckParameter3_4 = v6;
    v11 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * result), 0LL);
    if ( v11 )
    {
      v35 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
      {
        do
          sub_1402F32E0(&v35);
        while ( (*(_DWORD *)v11 & 0x80u) != 0 );
      }
      v12 = a2 + 2;
      if ( v9 )
      {
        *(_QWORD *)&v45 = *(_QWORD *)(v11 + 24);
        v32 = qword_140D06E28 ^ _byteswap_uint64(v11 ^ __ROL8__(
                                                         qword_140D06CC8 ^ *(_QWORD *)(v11 + 48),
                                                         qword_140D06CC8));
        *(_QWORD *)&v46 = v32 ? *(_QWORD *)(v32 + 24) : 0LL;
        v13 = sub_1402A7FE0(a1, v11, v12);
        *((_QWORD *)&v45 + 1) = v11;
        BYTE8(v46) = *(_BYTE *)(v11 + 1) >> 2;
        v44[1] = 32LL;
        v44[0] = &v45;
        result = sub_14035EDE4((unsigned int)v44, 1, 1073872896, 3921, 1538);
      }
      else
      {
        result = sub_1402A7FE0(a1, v11, v12);
        v13 = result;
      }
      if ( v13 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          sub_140340390(a1, 1LL, 0LL, 2LL);
        if ( !v5 )
          goto LABEL_26;
        v14 = 0LL;
        v15 = 0;
        if ( qword_140D328E0 )
        {
          v16 = *(unsigned int *)(qword_140D328E0 + 4248);
          v17 = !_BitScanForward((unsigned int *)&v18, v16);
          if ( !v17 )
          {
            do
            {
              v16 = ((_DWORD)v16 - 1) & (unsigned int)v16;
              v19 = 32LL * (unsigned int)v18 + qword_140D328E0 + 4284;
              if ( v19 && (*(_DWORD *)(v19 + 4) & 0x80u) != 0 )
                v15 |= 1 << *(_BYTE *)(qword_140D328E0 + 2 * v18 + 4233);
              v17 = !_BitScanForward((unsigned int *)&v18, v16);
            }
            while ( !v17 );
            v14 = 0LL;
          }
          if ( (v15 & 2) == 0 )
          {
            *(_QWORD *)&v42 = 0LL;
LABEL_19:
            if ( (v15 & 4) != 0 )
            {
              *((_QWORD *)&v42 + 1) = sub_14022DB00();
              v14 = 0LL;
            }
            else
            {
              *((_QWORD *)&v42 + 1) = 0LL;
            }
            if ( (v15 & 8) != 0 )
            {
              v20 = __rdtsc();
              v16 = (unsigned __int64)HIDWORD(v20) << 32;
              *(_QWORD *)&v43 = v20;
              v14 = 0LL;
            }
            else
            {
              *(_QWORD *)&v43 = 0LL;
            }
            if ( (v15 & 0x10) != 0 )
            {
              v39 = 0LL;
              sub_14042A5E0(&v39, v16);
              v14 = v39;
            }
            *((_QWORD *)&v43 + 1) = v14;
LABEL_26:
            v21 = *a2;
            BugCheckParameter2 = *(_QWORD *)(v13 + 24);
            v22 = BugCheckParameter2;
            *a2 = v21 + 1;
            v23 = 2 * ((v21 & 0xF) + 1LL);
            *(_QWORD *)&a2[2 * v23] = v22;
            a2[2 * v23 + 2] = MEMORY[0xFFFFF78000000320];
            v24 = *(_QWORD *)(a1 + 34984);
            *(_DWORD *)(a1 + 33116) = 0;
            if ( v24 && *(_QWORD *)(a1 + 34992) != v24 && *(_DWORD *)(a1 + 32428) < *(_DWORD *)(a1 + 32436) )
              *(_QWORD *)(a1 + 34992) = v24;
            *(_BYTE *)(a1 + 13242) = 1;
            sub_14042A5E0(v13, *(_QWORD *)(v13 + 32));
            v25 = BugCheckParameter3;
            *(_BYTE *)(a1 + 13242) = 0;
            a2[2 * v23 + 3] = MEMORY[0xFFFFF78000000320];
            result = *(unsigned int *)(v40 + 484);
            if ( (_DWORD)v25 != (_DWORD)result )
              KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v25, *(unsigned int *)(v40 + 484));
            if ( v5 )
            {
              v47[3] = 8LL;
              v47[2] = &BugCheckParameter2;
              result = qword_140D05008;
              v26 = *(_DWORD *)(qword_140D05008 + 4248);
              v17 = !_BitScanForward(&v27, v26);
              if ( !v17 )
              {
                do
                {
                  v26 &= v26 - 1;
                  v28 = v27;
                  result = 32LL * v27;
                  v29 = result + qword_140D05008 + 4284;
                  if ( v29 )
                  {
                    result = *(unsigned int *)(v29 + 4);
                    if ( (result & 0x80u) != 0LL )
                    {
                      v30 = *(unsigned __int8 *)(qword_140D05008 + 2 * v28 + 4233);
                      v31 = *(unsigned __int8 *)(qword_140D05008 + 2 * v28 + 4232);
                      v47[1] = 8LL;
                      v47[0] = &v41 + v30;
                      result = sub_1402AB170((unsigned int)v47, qword_140D05008, v31, 2, 3909, 4196866);
                    }
                  }
                  v17 = !_BitScanForward(&v27, v26);
                }
                while ( !v17 );
                v6 = BugCheckParameter3_4;
              }
            }
            goto LABEL_36;
          }
        }
        else
        {
          LOBYTE(v15) = 30;
        }
        *(LARGE_INTEGER *)&v42 = KeQueryPerformanceCounter(0LL);
        v14 = 0LL;
        goto LABEL_19;
      }
    }
LABEL_36:
    if ( v6 >= v38 )
      break;
    v9 = v33;
    a3 = v41;
  }
  if ( *(_QWORD *)(a1 + 11528) )
    return sub_140340390(a1, 1LL, 0LL, 2LL);
  return result;
}

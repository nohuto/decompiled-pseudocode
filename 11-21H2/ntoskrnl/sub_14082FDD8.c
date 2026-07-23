/*
 * XREFs of sub_14082FDD8 @ 0x14082FDD8
 * Callers:
 *     sub_140830634 @ 0x140830634 (sub_140830634.c)
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     sub_140654FBC @ 0x140654FBC (sub_140654FBC.c)
 *     sub_14082FF7C @ 0x14082FF7C (sub_14082FF7C.c)
 *     sub_140A34F34 @ 0x140A34F34 (sub_140A34F34.c)
 *     sub_140A356D0 @ 0x140A356D0 (sub_140A356D0.c)
 */

__int64 __fastcall sub_14082FDD8(void *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  ULONG v5; // eax
  __int64 v6; // r15
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  __int16 v16; // r12
  int v17; // eax
  int v18; // r9d
  __int16 v19; // ax
  __int16 v20; // r13
  __int16 v21; // r13
  __int64 v22; // rax
  unsigned __int8 *v23; // rsi
  int v24; // r15d
  int v25; // r15d
  unsigned __int16 v26; // r12
  __int16 v27; // ax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  char v32; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  v5 = 0;
  *((_QWORD *)v3 + 6) = a1;
  *((_WORD *)v3 + 2) = 0;
  LODWORD(v6) = a3;
  *v3 = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_QWORD *)v3 + 7) = 0LL;
  v8 = 0LL;
  *((_DWORD *)v3 + 16) = 0;
  if ( a1 && a2 && a3 )
  {
    v8 = *a2;
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
    while ( 1 )
    {
      v9 = ZwEnumerateValueKey(a1, v5, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
      v4 = 0;
      v11 = v9;
      if ( v9 < 0 )
        break;
      if ( *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
      {
        v14 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        if ( v14 + 24 <= 0x200 )
        {
          v15 = (unsigned __int64)v14 >> 1;
          v16 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15);
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = 0;
          v17 = sub_140A356D0(v6, (int)v3 + 116, (unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL, v10, (__int64)(v3 + 4));
          v4 = 0;
          v11 = v17;
          if ( v17 >= 0 )
          {
            v19 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
            v20 = *v3;
            *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = v16;
            v21 = v20 << 14;
            *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v19;
            v22 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
            *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
            *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v21;
            *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
            *(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
            *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
            v23 = &v3[v22 + 96];
            if ( v23 )
            {
              v24 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
              if ( v24 )
              {
                v25 = 2 * v24;
                v26 = 0;
                do
                {
                  if ( *(_WORD *)v23 == (_WORD)v4 || v25 <= 0 || v26 >= 3u )
                    break;
                  if ( (int)sub_140A356D0(
                              *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                              (_DWORD)v23,
                              (int)v3 + 1,
                              v18,
                              (__int64)(v3 + 8)) >= 0 )
                  {
                    v27 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                    *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 1) & 3) << (2 * v26)) | v21 & ~(3 << (2 * v26));
                    *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v26) = v27;
                    v21 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
                  }
                  v11 = sub_1402DCD64(v23, v25, (_QWORD *)v3 + 5);
                  if ( v11 < 0 )
                  {
                    v6 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                    goto LABEL_7;
                  }
                  v28 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
                  v25 += -2 - v28;
                  ++v26;
                  v23 += v28 + 2;
                }
                while ( v23 );
                v6 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                v29 = sub_140654FBC(v6, (unsigned __int16 *)v3 + 28);
                v4 = 0;
                v11 = v29;
                if ( v29 < 0 )
                  goto LABEL_7;
                if ( !v8 )
                {
                  v30 = sub_14082FF7C(0xFFFFFFFFLL);
                  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v30;
                  if ( !v30 )
                  {
                    v11 = -1073741801;
                    goto LABEL_12;
                  }
                  *a2 = v30;
                }
                v31 = sub_140A34F34(v3 + 16, v3 + 56);
                v8 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                v4 = 0;
                v11 = v31;
                if ( v31 >= 0 )
                  *a2 = v8;
                goto LABEL_7;
              }
              v6 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            }
            v11 = -1073741811;
          }
LABEL_7:
          v5 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) + 1;
          *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v5;
          goto LABEL_8;
        }
      }
      v5 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
LABEL_8:
      if ( v11 == -2147483622 )
      {
        v11 = v4;
        goto LABEL_10;
      }
      a1 = *(void **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    }
    if ( v9 != -2147483622 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v11 = -1073741811;
LABEL_10:
  if ( !v8 && v11 != -1073741811 )
  {
LABEL_12:
    v12 = sub_14082FF7C(1LL);
    LOWORD(v4) = 0;
    *a2 = v12;
    v8 = v12;
    if ( !v12 )
      v11 = -1073741801;
  }
  if ( v11 < 0 && v8 )
    *(_WORD *)(v8 + 4) = v4;
  return (unsigned int)v11;
}

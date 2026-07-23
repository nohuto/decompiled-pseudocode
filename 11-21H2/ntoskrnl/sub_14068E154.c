/*
 * XREFs of sub_14068E154 @ 0x14068E154
 * Callers:
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_1408410FC @ 0x1408410FC (sub_1408410FC.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068F548 @ 0x14068F548 (sub_14068F548.c)
 *     sub_1406DEA6C @ 0x1406DEA6C (sub_1406DEA6C.c)
 */

__int64 __fastcall sub_14068E154(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r15
  void *v4; // r13
  void *v5; // rbp
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // esi
  void *v12; // rax
  void *v13; // rbx
  void *v14; // rsi
  __int64 result; // rax
  void *v16; // rax
  unsigned int v17; // ebx
  unsigned int v18; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v7 & 0xFFF) != 0 )
  {
    v17 = -1073741492;
    sub_14020A890(v3, 0, 5, 0xC000014C, 0);
  }
  else
  {
    v8 = v7 >> 12;
    if ( v7 >> 12 )
      v9 = (v8 - 1) >> 9;
    else
      v9 = 0;
    *(_DWORD *)(a1 + 280) = v7;
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_10;
    v2 = (v8 + 3) & 0xFFFFFFFC;
    LOBYTE(a2) = 1;
    if ( !v2 )
      v2 = 4;
    v4 = (void *)sub_14042A5E0(v2, a2);
    if ( v4 )
    {
      LOBYTE(v10) = 1;
      v5 = (void *)sub_14042A5E0(v2, v10);
      if ( !v5 )
      {
        v17 = -1073741801;
        sub_14020A890(v3, 0, 5, 0xC0000017, 0x20u);
        goto LABEL_27;
      }
      memset(v4, 0, v2);
      memset(v5, 0, v2);
      *(_QWORD *)(a1 + 96) = v4;
      v11 = v7 >> 9;
      *(_DWORD *)(a1 + 88) = v11;
      *(_DWORD *)(a1 + 112) = v11;
      *(_QWORD *)(a1 + 120) = v5;
      *(_DWORD *)(a1 + 108) = v2;
LABEL_10:
      if ( v9 )
      {
        v16 = (void *)sub_14042A5E0(0x2000LL, 0LL);
        v14 = v16;
        if ( v16 )
        {
          memset(v16, 0, 0x2000uLL);
          if ( (unsigned __int8)sub_14068F548(a1, v14, 0LL, v9) )
          {
            v13 = 0LL;
            goto LABEL_13;
          }
          v17 = -1073741670;
          sub_14020A890(v3, 0, 5, 0xC000009A, 0x40u);
          sub_1406DEA6C(a1, v14, 0LL, v9);
          sub_14042A5E0(v14, 0x2000LL);
LABEL_26:
          if ( !v4 )
          {
LABEL_30:
            if ( v5 )
            {
              if ( *(void **)(a1 + 120) == v5 )
                *(_QWORD *)(a1 + 120) = 0LL;
              sub_14042A5E0(v5, v2);
            }
            return v17;
          }
LABEL_27:
          if ( *(void **)(a1 + 96) == v4 )
            *(_QWORD *)(a1 + 96) = 0LL;
          sub_14042A5E0(v4, v2);
          goto LABEL_30;
        }
        v18 = 48;
      }
      else
      {
        v12 = (void *)sub_14042A5E0(12288LL, 0LL);
        v13 = v12;
        if ( v12 )
        {
          memset(v12, 0, 0x3000uLL);
          v14 = (void *)(a1 + 296);
LABEL_13:
          *(_QWORD *)(a1 + 288) = v14;
          result = 0LL;
          *(_QWORD *)(a1 + 296) = v13;
          return result;
        }
        v18 = 32;
      }
      v17 = -1073741670;
      sub_14020A890(v3, 0, 5, 0xC000009A, v18);
      goto LABEL_26;
    }
    v17 = -1073741801;
    sub_14020A890(v3, 0, 5, 0xC0000017, 0x10u);
  }
  return v17;
}

/*
 * XREFs of sub_1C005C694 @ 0x1C005C694
 * Callers:
 *     sub_1C0049B10 @ 0x1C0049B10 (sub_1C0049B10.c)
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003DE0C @ 0x1C003DE0C (sub_1C003DE0C.c)
 *     sub_1C003DE44 @ 0x1C003DE44 (sub_1C003DE44.c)
 *     sub_1C005B360 @ 0x1C005B360 (sub_1C005B360.c)
 */

__int64 __fastcall sub_1C005C694(PVOID IoObject, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  __int64 v13; // r12
  int v14; // r11d
  char *ErrorLogEntry; // rax
  char *v16; // rbx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ebp
  char *i; // rsi
  _WORD *v22; // r14
  __int64 v23; // r11
  unsigned int v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a2 + 40);
  v25 = 0LL;
  if ( v3 <= 0xF0 )
  {
    v7 = *(_DWORD *)(a2 + 56);
    v8 = v3 + 32;
    v9 = 0;
    v10 = (v8 + 3) & 0xFFFFFFFC;
    v11 = v10 - v8;
    v24 = v10 + 40;
    v12 = v10 + 40;
    if ( v7 )
    {
      v13 = *(_QWORD *)(a2 + 64);
      while ( (int)sub_1C003DE44(*(_WORD **)(v13 + 8LL * v9), 240LL, &v25) >= 0 )
      {
        v12 = v14 + 2 * v25 + 2;
        if ( v12 > 0xF0 )
          break;
        if ( ++v9 >= v7 )
          goto LABEL_9;
      }
    }
    else if ( v12 <= 0xF0 )
    {
LABEL_9:
      if ( v12 - 72 <= 0x96 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(IoObject, v12);
        v16 = ErrorLogEntry;
        if ( !ErrorLogEntry )
          return 3238002691LL;
        *(_OWORD *)ErrorLogEntry = 0LL;
        *((_OWORD *)ErrorLogEntry + 1) = 0LL;
        *((_QWORD *)ErrorLogEntry + 4) = 0LL;
        *ErrorLogEntry = 15;
        *((_WORD *)ErrorLogEntry + 1) = v10;
        *((_WORD *)ErrorLogEntry + 2) = *(_WORD *)(a2 + 56);
        *((_WORD *)ErrorLogEntry + 3) = *(_DWORD *)(a2 + 56) != 0 ? v10 + 40 : 0;
        v18 = *(_DWORD *)(a2 + 32);
        if ( *(_BYTE *)(a2 + 28) )
          v18 = sub_1C005B360(v18);
        *((_DWORD *)v16 + 3) = v18;
        *((_DWORD *)v16 + 4) = *(_DWORD *)(a2 + 36);
        *((_WORD *)v16 + 20) = 1;
        *((_WORD *)v16 + 22) = 32;
        *((_WORD *)v16 + 23) = *(_WORD *)(a2 + 40);
        *((_DWORD *)v16 + 12) = *((_DWORD *)v16 + 3);
        *((_DWORD *)v16 + 13) = *(_DWORD *)(a2 + 36);
        *((_DWORD *)v16 + 14) = *(unsigned __int16 *)(a2 + 16);
        *((_DWORD *)v16 + 15) = *(unsigned __int16 *)(a2 + 20);
        *((_DWORD *)v16 + 16) = *(unsigned __int16 *)(a2 + 24);
        v16[68] = *(_BYTE *)(a2 + 12);
        *(_WORD *)(v16 + 69) = 0;
        v16[71] = 0;
        v19 = *(_DWORD *)(a2 + 40);
        if ( v19 )
        {
          memmove(v16 + 72, *(const void **)(a2 + 48), v19);
          if ( v11 )
            memset_0(&v16[*(unsigned int *)(a2 + 40) + 72], 45, v11);
        }
        v20 = 0;
        for ( i = &v16[v24]; v20 < *(_DWORD *)(a2 + 56); i += 2 )
        {
          v22 = *(_WORD **)(*(_QWORD *)(a2 + 64) + 8LL * v20);
          if ( (int)sub_1C003DE44(v22, 240LL, &v25) < 0 )
          {
            *(_WORD *)i = 0;
          }
          else
          {
            sub_1C003DE0C(i, v25 + 1, (__int64)v22);
            i += 2 * v23;
          }
          ++v20;
        }
        IoWriteErrorLogEntry(v16);
        return 0LL;
      }
    }
  }
  if ( a3 )
    *a3 = 150;
  return 3238002698LL;
}

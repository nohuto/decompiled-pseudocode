/*
 * XREFs of StorCreateSystemLogEntry @ 0x1C004FB2C
 * Callers:
 *     StorpLogSystemEvent @ 0x1C0046524 (StorpLogSystemEvent.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C000F904 (RtlStringCchCopyW.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RtlStringCchLengthW @ 0x1C003BAD0 (RtlStringCchLengthW.c)
 *     RaidScsiErrorToIoError @ 0x1C004F47C (RaidScsiErrorToIoError.c)
 */

__int64 __fastcall StorCreateSystemLogEntry(PVOID IoObject, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  __int16 v12; // r12
  unsigned int v13; // r11d
  __int64 v14; // r12
  int v15; // r11d
  char *ErrorLogEntry; // rax
  char *v17; // rbx
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ebp
  wchar_t *i; // rsi
  const wchar_t *v23; // r14
  __int64 v24; // r11
  unsigned int v25; // [rsp+68h] [rbp+10h]
  size_t pcchLength; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a2 + 40);
  pcchLength = 0LL;
  if ( v3 <= 0xF0 )
  {
    v7 = *(_DWORD *)(a2 + 56);
    v8 = v3 + 32;
    v9 = 0;
    v10 = (v8 + 3) & 0xFFFFFFFC;
    v11 = v10 - v8;
    v12 = v10 + 40;
    v25 = v10 + 40;
    v13 = v10 + 40;
    if ( v7 )
    {
      v14 = *(_QWORD *)(a2 + 64);
      while ( RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(v14 + 8LL * v9), 0xF0uLL, &pcchLength) >= 0 )
      {
        v13 = v15 + 2 * pcchLength + 2;
        if ( v13 > 0xF0 )
          break;
        if ( ++v9 >= v7 )
        {
          v12 = v10 + 40;
          goto LABEL_9;
        }
      }
    }
    else if ( v10 + 40 <= 0xF0 )
    {
LABEL_9:
      if ( v13 - 72 <= 0x96 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(IoObject, v13);
        v17 = ErrorLogEntry;
        if ( !ErrorLogEntry )
          return 3238002691LL;
        *(_OWORD *)ErrorLogEntry = 0LL;
        *((_OWORD *)ErrorLogEntry + 1) = 0LL;
        *((_QWORD *)ErrorLogEntry + 4) = 0LL;
        *ErrorLogEntry = 15;
        *((_WORD *)ErrorLogEntry + 1) = v10;
        *((_WORD *)ErrorLogEntry + 2) = *(_WORD *)(a2 + 56);
        *((_WORD *)ErrorLogEntry + 3) = *(_DWORD *)(a2 + 56) != 0 ? v12 : 0;
        v19 = *(_DWORD *)(a2 + 32);
        if ( *(_BYTE *)(a2 + 28) )
          v19 = RaidScsiErrorToIoError(v19);
        *((_DWORD *)v17 + 3) = v19;
        *((_DWORD *)v17 + 4) = *(_DWORD *)(a2 + 36);
        *((_WORD *)v17 + 20) = 1;
        *((_WORD *)v17 + 22) = 32;
        *((_WORD *)v17 + 23) = *(_WORD *)(a2 + 40);
        *((_DWORD *)v17 + 12) = *((_DWORD *)v17 + 3);
        *((_DWORD *)v17 + 13) = *(_DWORD *)(a2 + 36);
        *((_DWORD *)v17 + 14) = *(unsigned __int16 *)(a2 + 16);
        *((_DWORD *)v17 + 15) = *(unsigned __int16 *)(a2 + 20);
        *((_DWORD *)v17 + 16) = *(unsigned __int16 *)(a2 + 24);
        v17[68] = *(_BYTE *)(a2 + 12);
        *(_WORD *)(v17 + 69) = 0;
        v17[71] = 0;
        v20 = *(_DWORD *)(a2 + 40);
        if ( v20 )
        {
          memmove(v17 + 72, *(const void **)(a2 + 48), v20);
          if ( v11 )
            memset(&v17[*(unsigned int *)(a2 + 40) + 72], 45, v11);
        }
        v21 = 0;
        for ( i = (wchar_t *)&v17[v25]; v21 < *(_DWORD *)(a2 + 56); ++i )
        {
          v23 = *(const wchar_t **)(*(_QWORD *)(a2 + 64) + 8LL * v21);
          if ( RtlStringCchLengthW(v23, 0xF0uLL, &pcchLength) < 0 )
          {
            *i = 0;
          }
          else
          {
            RtlStringCchCopyW(i, pcchLength + 1, v23);
            i += v24;
          }
          ++v21;
        }
        IoWriteErrorLogEntry(v17);
        return 0LL;
      }
    }
  }
  if ( a3 )
    *a3 = 150;
  return 3238002698LL;
}

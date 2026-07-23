/*
 * XREFs of EtwpFlushBuffer @ 0x180004614
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1800043B8 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x180122230 (EtwpBufferingModeFlush.c)
 * Callees:
 *     NtWriteFile @ 0x1800A4170 (NtWriteFile.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     EtwpWriteBufferCompressed @ 0x18012380C (EtwpWriteBufferCompressed.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, __int16 a3)
{
  NTSTATUS v3; // r9d
  int v4; // r10d
  int v7; // eax
  int v8; // esi
  unsigned int v9; // edx
  __int64 v10; // r11
  __int64 Length; // rbp
  unsigned __int64 v12; // r9
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  int v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v19 = 0;
  v18 = 0;
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v4 = v18;
  }
  *(_DWORD *)(a2 + 48) = v7;
  v8 = 1;
  if ( v7 == 72 && a3 != 1 )
    return (unsigned int)-2147483614;
  if ( *(_QWORD *)(a1 + 128) )
  {
    v9 = *(_DWORD *)(a1 + 308);
    v10 = *(unsigned int *)(a1 + 304);
    Length = *(unsigned int *)(a1 + 192);
    if ( (_DWORD)v10 )
    {
      v12 = (v9 & 0x4000000) != 0 ? *(_QWORD *)(a1 + 344) : Length * (((v9 >> 2) & 2) + *(_DWORD *)(a1 + 320));
      if ( v12 >= v10 * ((-(__int64)((v9 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
        v14 = (v9 & 0xB) - 1;
        if ( !v14 )
        {
          v3 = -1073741432;
LABEL_31:
          *(_DWORD *)(a1 + 372) += v4;
          if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12LL * *(unsigned __int16 *)(a2 + 42) + 8) += v4;
          return (unsigned int)v3;
        }
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 6 )
            *(_DWORD *)(a1 + 316) |= 1u;
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 336);
          *(_QWORD *)(a1 + 344) = v16;
          *(_DWORD *)(a1 + 320) = v16 / Length;
        }
      }
    }
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    *(_QWORD *)(a2 + 16) = MEMORY[0x7FFE0014];
    if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
    {
      v3 = EtwpWriteBufferCompressed(a1, a2, &v19, &v18);
      if ( v3 >= 0 )
      {
        v8 = v19;
LABEL_14:
        *(_DWORD *)(a1 + 376) += v8;
        *(_DWORD *)(a1 + 320) += v8;
        if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
          *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12LL * *(unsigned __int16 *)(a2 + 42)) += v8;
        return (unsigned int)v3;
      }
      v4 = v18;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 48) < (unsigned int)Length )
        memset((void *)(a2 + *(unsigned int *)(a2 + 48)), 255, (unsigned int)(Length - *(_DWORD *)(a2 + 48)));
      v3 = NtWriteFile(
             *(HANDLE *)(a1 + 128),
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             (PVOID)a2,
             Length,
             (PLARGE_INTEGER)(a1 + 344),
             0LL);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 344) += Length;
        goto LABEL_14;
      }
      v4 = 1;
    }
    if ( v3 == -2147483614 )
      return (unsigned int)v3;
    goto LABEL_31;
  }
  return (unsigned int)v3;
}

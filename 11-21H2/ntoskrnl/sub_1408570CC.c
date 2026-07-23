/*
 * XREFs of sub_1408570CC @ 0x1408570CC
 * Callers:
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 * Callees:
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14041B820 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409E0968 @ 0x1409E0968 (sub_1409E0968.c)
 */

NTSTATUS __fastcall sub_1408570CC(__int64 a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm0
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-31h] BYREF
  _OWORD Buffer[5]; // [rsp+70h] [rbp-19h] BYREF
  __int128 FileInformation; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+47h]

  v18 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  memset(Buffer, 0, 0x48uLL);
  result = ZwQueryInformationFile(
             *(HANDLE *)(a1 + 360),
             &IoStatusBlock,
             &FileInformation,
             0x18u,
             FileStandardInformation);
  if ( result >= 0 )
  {
    if ( !*((_QWORD *)&FileInformation + 1) )
      return 0;
    if ( *((__int64 *)&FileInformation + 1) < 72 )
      return -1073741566;
    v3 = *(void **)(a1 + 360);
    ByteOffset.QuadPart = 0LL;
    result = ZwReadFile(v3, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
    if ( result >= 0 )
    {
      result = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
      {
        if ( IoStatusBlock.Information != 72 )
          return -1073741807;
        if ( LODWORD(Buffer[0]) == 1933995090 && DWORD2(Buffer[0]) == 1 )
        {
          v4 = sub_1402E1C80(a1);
          if ( HIDWORD(Buffer[0]) == v4 )
          {
            if ( LODWORD(Buffer[2]) )
            {
              if ( *((__int64 *)&Buffer[2] + 1) <= *((__int64 *)&Buffer[3] + 1)
                && *(__int64 *)&Buffer[3] <= *((__int64 *)&Buffer[3] + 1)
                && *(_QWORD *)&Buffer[3] != *((_QWORD *)&Buffer[2] + 1)
                && *((_QWORD *)&Buffer[3] + 1) >= 0x48uLL )
              {
                v5 = *(_QWORD *)(a1 + 416);
                if ( *((__int64 *)&Buffer[3] + 1) <= v5
                  && *(_QWORD *)&Buffer[4] <= (unsigned __int64)v5
                  && *((__int64 *)&FileInformation + 1) >= *((__int64 *)&Buffer[3] + 1) )
                {
                  v6 = *(void **)(a1 + 360);
                  LODWORD(Buffer[0]) = 0;
                  result = ZwWriteFile(v6, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
                  if ( result < 0 )
                    return result;
                  v7 = *(_QWORD *)&Buffer[4];
                  v8 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 236));
                  v9 = Buffer[1];
                  *(_DWORD *)(a1 + 424) = Buffer[2];
                  *(_QWORD *)(a1 + 392) = *((_QWORD *)&Buffer[2] + 1);
                  *(_QWORD *)(a1 + 384) = *(_QWORD *)&Buffer[3];
                  *(_QWORD *)(a1 + 400) = *((_QWORD *)&Buffer[3] + 1);
                  v10 = *(_QWORD *)(a1 + 416) - v7;
                  *(_QWORD *)(a1 + 408) = v7;
                  *(_OWORD *)(a1 + 432) = v9;
                  if ( v10 <= v8 && *(int *)(a1 + 16) >= 0 )
                  {
                    _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
                    if ( EtwEventEnabled(qword_140C15FA8, &stru_140039130) )
                      sub_1409E0968(v12, v11, v13, a1 + 136);
                  }
                  return 0;
                }
              }
            }
          }
        }
        return -1073741566;
      }
    }
  }
  return result;
}

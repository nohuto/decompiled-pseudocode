/*
 * XREFs of ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8
 * Callers:
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 * Callees:
 *     sub_1402619C4 @ 0x1402619C4 (sub_1402619C4.c)
 *     sub_1402E1C2C @ 0x1402E1C2C (sub_1402E1C2C.c)
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14041B820 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_1406F175C @ 0x1406F175C (sub_1406F175C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CEnumMediaTypes::Next(CEnumMediaTypes *this, char a2, struct _AMMediaType **a3, unsigned int *a4)
{
  int v4; // r13d
  ULONG Length; // r12d
  _DWORD *Pool2; // rax
  __int64 Buffer; // rsi
  NTSTATUS v10; // ebx
  LARGE_INTEGER v11; // rcx
  void *v13; // rcx
  char v14; // dl
  __int64 v15; // r15
  __int64 v16; // r14
  signed __int64 v17; // rcx
  LARGE_INTEGER FileInformation; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+68h] [rbp-11h] BYREF
  __int128 v21; // [rsp+78h] [rbp-1h] BYREF
  __int64 v22; // [rsp+88h] [rbp+Fh]

  v22 = 0LL;
  v4 = (int)a3;
  v21 = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 )
    Length = -(int)a3 & ((_DWORD)a3 + 383);
  else
    Length = *((_DWORD *)this + 1);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 1350005829LL);
  Buffer = (__int64)Pool2;
  if ( Pool2 )
  {
    if ( !a2 )
    {
      sub_1402619C4((__int16 *)this, Pool2);
      sub_1402E1C2C(Buffer, 4);
      sub_1406F120C(this, Buffer);
      v10 = ZwWriteFile(*((HANDLE *)this + 100), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v10 >= 0 )
      {
        if ( (*((_DWORD *)this + 3) & 0x20) == 0
          || (v11.QuadPart = *((unsigned int *)this + 73)
                           * ((-(__int64)((*((_DWORD *)this + 3) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              v20 = 0LL,
              FileInformation = v11,
              v10 = ZwSetInformationFile(*((HANDLE *)this + 100), &v20, &FileInformation, 8u, FileEndOfFileInformation),
              v10 >= 0) )
        {
          *((_DWORD *)this + 62) = 1;
          *((_DWORD *)this + 51) = 1;
          *((_QWORD *)this + 27) = Length;
        }
      }
      goto LABEL_9;
    }
    v13 = (void *)*((_QWORD *)this + 100);
    FileInformation.QuadPart = 0LL;
    v10 = ZwReadFile(v13, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Length, &FileInformation, 0LL);
    if ( v10 >= 0 )
    {
      if ( (*(_DWORD *)(Buffer + 136) & 0x4000402) != 0 )
      {
        v10 = -1073741811;
        *((_DWORD *)this + 11) = 1;
      }
      else
      {
        if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
        {
          v10 = -1073741811;
          *((_DWORD *)this + 11) = 2;
          goto LABEL_9;
        }
        if ( *(_DWORD *)(Buffer + 148) == ((unsigned __int8)sub_1406F175C(this) != 0 ? 4 : 8) )
        {
          v15 = *(unsigned int *)(Buffer + 104);
          LODWORD(v16) = *(_DWORD *)(Buffer + 140);
          if ( ((v4 - 1) & (unsigned int)v15) != 0 )
          {
            v10 = -1073741306;
          }
          else
          {
            if ( (unsigned int)(v15 - 1024) > 0xFFFC00 )
            {
              v10 = -1073741811;
              *((_DWORD *)this + 11) = 4;
              goto LABEL_9;
            }
            if ( (*((_DWORD *)this + 204) & 2) == 0 || *((_DWORD *)this + 1) == (_DWORD)v15 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v14 & 0x20) != 0 )
                {
                  v10 = -1073741811;
                  *((_DWORD *)this + 11) = 6;
                  goto LABEL_9;
                }
                v10 = ZwQueryInformationFile(
                        *((HANDLE *)this + 100),
                        &IoStatusBlock,
                        &v21,
                        0x18u,
                        FileStandardInformation);
                if ( v10 < 0 )
                {
                  *((_DWORD *)this + 11) = 7;
                  goto LABEL_9;
                }
                v17 = *((unsigned int *)this + 73)
                    * ((-(__int64)((*((_DWORD *)this + 3) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
                if ( v17 && *((__int64 *)&v21 + 1) >= v17 )
                {
                  v10 = -1073741432;
                  *((_DWORD *)this + 11) = 8;
                  goto LABEL_9;
                }
                v16 = *((_QWORD *)&v21 + 1) / v15;
              }
              if ( (_DWORD)v16 )
              {
                if ( *(_DWORD *)(Buffer + 116) == (unsigned int)sub_1402E1C80((__int64)this) )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v10 = ZwWriteFile(
                          *((HANDLE *)this + 100),
                          0LL,
                          0LL,
                          0LL,
                          &IoStatusBlock,
                          (PVOID)Buffer,
                          Length,
                          &FileInformation,
                          0LL);
                  if ( v10 >= 0 )
                  {
                    *((_DWORD *)this + 62) = v16;
                    *((_DWORD *)this + 51) = v16;
                    *((_DWORD *)this + 1) = v15;
                    *((_QWORD *)this + 27) = (unsigned int)(v15 * v16);
                  }
                }
                else
                {
                  v10 = -1073741811;
                  *((_DWORD *)this + 11) = 10;
                }
              }
              else
              {
                v10 = -1073741811;
                *((_DWORD *)this + 11) = 9;
              }
              goto LABEL_9;
            }
            v10 = -1073741306;
            *((_DWORD *)this + 11) = 5;
          }
        }
        else
        {
          v10 = -1073741811;
          *((_DWORD *)this + 11) = 3;
        }
      }
    }
LABEL_9:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return (unsigned int)v10;
  }
  return 3221225495LL;
}

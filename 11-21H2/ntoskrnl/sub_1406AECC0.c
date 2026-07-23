/*
 * XREFs of sub_1406AECC0 @ 0x1406AECC0
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 * Callees:
 *     sub_140236694 @ 0x140236694 (sub_140236694.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     sub_1407DFC68 @ 0x1407DFC68 (sub_1407DFC68.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 *     NtCreateFile @ 0x1407E0BC0 (NtCreateFile.c)
 *     sub_140997410 @ 0x140997410 (sub_140997410.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406AECC0(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  void *Pool2; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _WORD v19[2]; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+84h] [rbp-7Ch]
  void *Src; // [rsp+88h] [rbp-78h]
  __m256i v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 FsInformation; // [rsp+B0h] [rbp-50h] BYREF
  __m256i v24; // [rsp+B8h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v27; // [rsp+118h] [rbp+18h] BYREF
  __int64 v28; // [rsp+128h] [rbp+28h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v28 = 0LL;
  Src = *(void **)(a3 + 32);
  v19[0] = 2 * *(_WORD *)(a3 + 24);
  v19[1] = v19[0] + 2;
  v6 = 0x200000000LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
  FsInformation = 0LL;
  v27 = 0LL;
  v20 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  v17 = 0LL;
  v16 = 0;
  memset(&v22, 0, 24);
  v22.m256i_i64[3] = 0x200000000LL;
  memset(&v24, 0, 24);
  v24.m256i_i64[3] = 0x200000000LL;
  P = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v7 == 259 )
      KeBugCheckEx(0x191u, 0x132AuLL, 0LL, 0LL, 0LL);
    v8 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
    if ( (v8 & 0xC0000000) != 0xC0000000 )
    {
      if ( v8 == 259 )
        KeBugCheckEx(0x191u, 0x133AuLL, 0LL, 0LL, 0LL);
      if ( (unsigned int)sub_140236694(&FsInformation) )
      {
        v8 = -1073741637;
        goto LABEL_16;
      }
      if ( (*(_DWORD *)(a3 + 12) & 1) == 0 )
        goto LABEL_7;
      v8 = sub_140997410(FileHandle, &v16);
      if ( v8 < 0 )
        goto LABEL_16;
      if ( v16 > 1 )
      {
        v8 = -2147483633;
      }
      else
      {
LABEL_7:
        NtClose(FileHandle);
        FileHandle = 0LL;
        v8 = sub_1407DFC68((unsigned int)&v22, a1, (unsigned int)v19, 0, 1048960, 32, 0, 0LL);
        if ( v8 < 0 )
          goto LABEL_16;
        if ( !*(_QWORD *)a3 && !*(_DWORD *)(a3 + 8) )
          goto LABEL_13;
        v8 = NtQueryVolumeInformationFile(
               (HANDLE)v22.m256i_i64[0],
               &IoStatusBlock,
               &v27,
               0x18u,
               FileFsVolumeInformation);
        if ( (v8 & 0xC0000000) == 0xC0000000 )
          goto LABEL_16;
        if ( v8 == 259 )
          KeBugCheckEx(0x191u, 0x1383uLL, 0LL, 0LL, 0LL);
        if ( (_QWORD)v27 != *(_QWORD *)a3 || DWORD2(v27) != *(_DWORD *)(a3 + 8) )
        {
          v8 = -1073741735;
        }
        else
        {
LABEL_13:
          LOWORD(v17) = v19[0] + 2;
          WORD1(v17) = v19[0] + 4;
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned __int16)(v19[0] + 4), 1146250832LL);
          P = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, Src, v19[0]);
            *((_WORD *)P + ((unsigned __int64)v19[0] >> 1)) = 92;
            *((_WORD *)P + ((unsigned __int64)(unsigned __int16)v17 >> 1)) = 0;
            v8 = sub_1407DFC68((unsigned int)&v24, a1, (unsigned int)&v17, 0, 1179785, 33, 128, (__int64)&v22);
            if ( v8 < 0 )
            {
              v6 = v24.m256i_i64[3];
            }
            else
            {
              v10 = *(_OWORD *)v22.m256i_i8;
              v22.m256i_i64[0] = 0LL;
              v8 = 0;
              v11 = *(_OWORD *)&v22.m256i_u64[2];
              v22.m256i_i64[3] = 0x200000000LL;
              *a2 = v10;
              *(_OWORD *)&v22.m256i_u64[1] = 0LL;
              v12 = *(_OWORD *)v24.m256i_i8;
              v24.m256i_i64[0] = 0LL;
              a2[1] = v11;
              v13 = *(_OWORD *)&v24.m256i_u64[2];
              v24.m256i_i64[3] = 0x200000000LL;
              a2[2] = v12;
              *(_OWORD *)&v24.m256i_u64[1] = 0LL;
              a2[3] = v13;
            }
          }
          else
          {
            v8 = -1073741670;
          }
        }
      }
    }
  }
LABEL_16:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( (v6 & 0x400000000LL) != 0 )
    sub_1407DFFD8(&v24, a1);
  if ( (v22.m256i_i64[3] & 0x400000000LL) != 0 )
    sub_1407DFFD8(&v22, a1);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}

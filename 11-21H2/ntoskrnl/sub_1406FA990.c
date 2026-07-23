/*
 * XREFs of sub_1406FA990 @ 0x1406FA990
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 * Callees:
 *     sub_140281F60 @ 0x140281F60 (sub_140281F60.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1406A443C @ 0x1406A443C (sub_1406A443C.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     sub_14096FF98 @ 0x14096FF98 (sub_14096FF98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall sub_1406FA990(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        LARGE_INTEGER **a3,
        LARGE_INTEGER a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  LARGE_INTEGER v11; // rbp
  unsigned __int64 v12; // r15
  LARGE_INTEGER *v13; // rdi
  LARGE_INTEGER *v14; // rsi
  __int64 v15; // rcx
  int v16; // ebx
  unsigned int v17; // r13d
  int v18; // eax
  LARGE_INTEGER *v19; // rdx
  unsigned __int64 v20; // r12
  unsigned int v21; // r14d
  __int16 v22; // cx
  ULONG LowPart; // ecx
  __int16 v24; // r14
  __int64 v25; // rdx
  char v26; // cl
  __int64 v27; // rbx
  __int16 v28; // ax
  __int16 v29; // r14
  __int64 *v30; // rdi
  __int64 v31; // r8
  __int16 v32; // ax
  bool v33; // zf
  int v34; // eax
  int result; // eax
  LARGE_INTEGER *v36; // rcx
  _QWORD *QuadPart; // rcx
  _QWORD *v38; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  int v42; // [rsp+A8h] [rbp+40h]

  FileSize.QuadPart = 0LL;
  v42 = a8 & 1;
  if ( v42 )
  {
    v11 = a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    v11 = FileSize;
    if ( !FileSize.QuadPart && !a4.QuadPart )
      return -1073741538;
    if ( a4.QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = a4;
      v11 = a4;
      result = sub_1406A443C(FileObject, (__int64 *)&FileSize);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( v11.QuadPart <= 0x3FFFFFFFFFF000uLL )
    {
      v12 = (unsigned __int64)(v11.QuadPart + 4095) >> 12;
      v13 = (LARGE_INTEGER *)sub_1402828F0(256, 0x30uLL, 0x6D536D4Du);
      if ( !v13 )
        return -1073741670;
      v14 = (LARGE_INTEGER *)sub_1402828F0(64, 0x130uLL, 0x61436D4Du);
      if ( !v14 )
      {
        v36 = v13;
        goto LABEL_53;
      }
      v15 = 0LL;
      v16 = a8 & 0x10000;
      if ( v16 )
      {
        if ( v12 > 0x200 )
          v15 = 8 * sub_14096FF98(FileObject);
        v18 = 0x200000;
        v17 = 0x200000;
      }
      else
      {
        v17 = 0x100000;
        v18 = 0x100000;
      }
      v19 = 0LL;
      v20 = 8 * v12;
      FileSize.QuadPart = 0LL;
      if ( !v15 )
        LODWORD(v15) = v18;
      while ( 1 )
      {
        v21 = v20;
        if ( v20 >= (unsigned int)v15 )
          v21 = v15;
        if ( v19 )
        {
          v19 = (LARGE_INTEGER *)sub_1402828F0(64, 0x98uLL, 0x63536D4Du);
          if ( !v19 )
          {
            ExFreePoolWithTag(v13, 0);
            QuadPart = (_QWORD *)v14[18].QuadPart;
            if ( QuadPart )
            {
              do
              {
                v38 = (_QWORD *)QuadPart[2];
                ExFreePoolWithTag(QuadPart, 0);
                QuadPart = v38;
              }
              while ( v38 );
            }
            v36 = v14;
LABEL_53:
            ExFreePoolWithTag(v36, 0);
            return -1073741670;
          }
          *(_QWORD *)(FileSize.QuadPart + 16) = v19;
        }
        else
        {
          v19 = v14 + 16;
        }
        FileSize.QuadPart = (LONGLONG)v19;
        v19[5].HighPart = v21 >> 3;
        v20 -= v21;
        if ( v21 < v17 )
          v21 = v17;
        LODWORD(v15) = v21;
        if ( !v20 )
        {
          *(_OWORD *)&v13->LowPart = 0LL;
          *(_OWORD *)&v13[2].LowPart = 0LL;
          *a3 = v13;
          *(_OWORD *)&v13[4].LowPart = 0LL;
          v14[2].QuadPart = (LONGLONG)&v14[1];
          v14[1].QuadPart = (LONGLONG)&v14[1];
          v14[3].QuadPart = 1LL;
          v14->QuadPart = (LONGLONG)v13;
          v14[14].QuadPart = 1LL;
          v22 = WORD2(v14[7].QuadPart) ^ *a2;
          v14[13].QuadPart = 0LL;
          WORD2(v14[7].QuadPart) ^= v22 & 0x3FF;
          LowPart = v14[7].LowPart;
          if ( v42 )
            LowPart |= 0x8000u;
          else
            v14[6].QuadPart = 1LL;
          v24 = 6;
          v14[7].LowPart = LowPart ^ (LowPart ^ (a7 << 20)) & 0x7F00000 | 0x82;
          if ( v16 )
          {
            BYTE6(v14[7].QuadPart) = BYTE6(v14[7].QuadPart) & 0xF3 | 4;
          }
          else if ( (a6 & 0x10000000) != 0 )
          {
            WORD2(v13[1].QuadPart) |= 0x8000u;
            v24 = 14;
          }
          else if ( (a6 & 0x40000000) != 0 )
          {
            v24 = 30;
            WORD2(v13[1].QuadPart) |= 0x4000u;
          }
          v25 = (__int64)&v14[16];
          v26 = BYTE6(v13[1].QuadPart) & 0xC1;
          v13->QuadPart = (LONGLONG)v14;
          v13[3] = v11;
          v27 = 0LL;
          v28 = (WORD2(v13[1].QuadPart) ^ WORD2(v12)) & 0x3FF;
          v13[1].LowPart = v12;
          WORD2(v13[1].QuadPart) ^= v28;
          BYTE6(v13[1].QuadPart) = (2 * v24) | v26;
          v29 = 2 * v24;
          do
          {
            v30 = (__int64 *)(v25 + 16);
            v31 = *(unsigned int *)(v25 + 44);
            v32 = *(_WORD *)(v25 + 32) & 1;
            *(_QWORD *)v25 = v14;
            *(_DWORD *)(v25 + 36) = v27;
            v33 = *(_QWORD *)(v25 + 16) == 0LL;
            *(_WORD *)(v25 + 32) = v29 | v32 & 0xFFC1 | (WORD2(v27) << 6);
            if ( v33 )
            {
              *(_WORD *)(v25 + 34) = (16 * LOWORD(v11.LowPart)) | *(_WORD *)(v25 + 34) & 0xF;
              *(_DWORD *)(v25 + 52) ^= (*(_DWORD *)(v25 + 52) ^ (v27 + v31 - v12)) & 0x3FFFFFFF;
              v34 = ((unsigned __int64)v11.QuadPart >> 12) - v27;
            }
            else
            {
              v34 = v31;
            }
            *(_DWORD *)(v25 + 40) = v34;
            v27 += v31;
            *(_QWORD *)(v25 + 88) = v25 + 80;
            *(_QWORD *)(v25 + 80) = v25 + 80;
            sub_140281F60((__int64)v14, v25, 0LL);
            v25 = *v30;
          }
          while ( *v30 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}

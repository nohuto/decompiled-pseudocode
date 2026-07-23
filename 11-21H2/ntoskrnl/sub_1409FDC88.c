/*
 * XREFs of sub_1409FDC88 @ 0x1409FDC88
 * Callers:
 *     sub_1409FF360 @ 0x1409FF360 (sub_1409FF360.c)
 *     sub_140A004C0 @ 0x140A004C0 (sub_140A004C0.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x14041F160 (ZwTranslateFilePath.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 *     sub_1409FD474 @ 0x1409FD474 (sub_1409FD474.c)
 *     sub_1409FF178 @ 0x1409FF178 (sub_1409FF178.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FDC88(int a1, const void *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int i; // r14d
  _FILE_PATH *v6; // r15
  _FILE_PATH *v7; // r13
  KPROCESSOR_MODE v8; // dl
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  SIZE_T v13; // rbx
  unsigned __int64 v14; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  int v17; // ebx
  __int64 v18; // rax
  char *v19; // rsi
  int v20; // eax
  __int64 v21; // r8
  size_t v22; // r13
  _FILE_PATH *v23; // rax
  _FILE_PATH *v24; // rbx
  ULONG Length; // eax
  size_t v26; // rbx
  PVOID v27; // rax
  size_t v28; // r8
  _WORD *v29; // rbx
  struct _KTHREAD *v30; // rax
  _DWORD *v31; // r12
  ULONG v32; // [rsp+34h] [rbp-A4h] BYREF
  ULONG OutputFilePathLength; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD *v34; // [rsp+40h] [rbp-98h]
  size_t Size; // [rsp+48h] [rbp-90h]
  _FILE_PATH *v36; // [rsp+50h] [rbp-88h]
  int v38; // [rsp+5Ch] [rbp-7Ch]
  PVOID P; // [rsp+60h] [rbp-78h]
  PVOID v40; // [rsp+68h] [rbp-70h]
  unsigned int v41; // [rsp+70h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  wchar_t Dst[12]; // [rsp+90h] [rbp-48h] BYREF

  v3 = (_DWORD *)a3;
  v34 = (_DWORD *)a3;
  v38 = a1;
  v40 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v32 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = *((_BYTE *)CurrentThread + 562);
  v9 = (unsigned __int64)a2 + 4;
  v10 = 0x7FFFFFFF0000LL;
  if ( v8 )
  {
    if ( v9 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)v9;
    v41 = v11;
  }
  else
  {
    v11 = *(_DWORD *)v9;
    v41 = v11;
  }
  if ( v11 < 0x14 )
    return 3221225485LL;
  if ( v8 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = v11;
    v14 = (unsigned __int64)a2 + v11;
    if ( v14 > 0x7FFFFFFF0000LL || v14 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v10 = a3;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, v8) )
      return 3221225569LL;
  }
  else
  {
    v13 = v11;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x72766E45u);
  v16 = PoolWithTag;
  v40 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v13);
  if ( *v16 == 1 )
  {
    if ( !v38 && v16[2] > 0xFFFFu
      || (v18 = (unsigned int)v16[3], (v18 & 1) != 0)
      || (v16[4] & 3) != 0
      || (v19 = (char *)v16 + v18,
          v20 = sub_1409FD474((_DWORD *)((char *)v16 + v18), (unsigned __int64)v16 + v13),
          v20 == -1) )
    {
      v17 = -1073741811;
    }
    else
    {
      LODWORD(Size) = 2 * v20 + 2;
      v6 = (_FILE_PATH *)((char *)v16 + v21);
      v17 = sub_1409FF178((char *)v16 + v21);
      if ( v17 >= 0 )
      {
        v22 = (unsigned int)Size;
        if ( &v19[(unsigned int)Size] > (char *)v6 )
        {
          v17 = -1073741811;
LABEL_61:
          v7 = v36;
          goto LABEL_62;
        }
        if ( v6->Type == 4 )
        {
          Length = v6->Length;
          v36 = v6;
        }
        else
        {
          v17 = ZwTranslateFilePath(v6, 4u, 0LL, &OutputFilePathLength);
          if ( v17 != -1073741789 )
            goto LABEL_61;
          v23 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
          v24 = v23;
          v36 = v23;
          if ( !v23 )
          {
            v17 = -1073741670;
            v7 = 0LL;
            goto LABEL_62;
          }
          memset(v23, 0, OutputFilePathLength);
          v32 = OutputFilePathLength;
          v17 = ZwTranslateFilePath(v6, 4u, v24, &v32);
          if ( v17 < 0 )
            goto LABEL_61;
          Length = OutputFilePathLength;
        }
        OutputFilePathLength = Length - 12;
        LODWORD(Size) = Size + 6 + Length - 12;
        v26 = (unsigned int)Size;
        v27 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72766E45u);
        P = v27;
        if ( !v27 )
        {
          v17 = -1073741670;
          goto LABEL_61;
        }
        v28 = v26;
        v29 = v27;
        memset(v27, 0, v28);
        v29[2] = OutputFilePathLength;
        memmove(v29 + 3, v19, v22);
        memmove((char *)v29 + v22 + 6, v36->FilePath, OutputFilePathLength);
        v30 = KeGetCurrentThread();
        --*((_WORD *)v30 + 242);
        ExAcquireFastMutexUnsafe(&stru_140C11680);
        if ( v38 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x", i);
            v32 = 0;
            v17 = sub_14093E520(Dst, (__int64)&qword_140042080, 0LL, (int *)&v32, 0LL);
            if ( v17 == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
              v32 = 0;
              v17 = sub_14093E520(Dst, (__int64)&qword_140042080, 0LL, (int *)&v32, 0LL);
            }
            if ( v17 == -1073741568 )
              break;
            if ( v17 && v17 != -1073741789 )
              goto LABEL_59;
          }
          if ( i > 0xFFFF )
          {
            v17 = -1073741670;
LABEL_59:
            ExReleaseFastMutexUnsafe(&stru_140C11680);
            sub_1402F9540((__int64)KeGetCurrentThread());
            v16 = v40;
            goto LABEL_61;
          }
        }
        else
        {
          v31 = v40;
          i = *((_DWORD *)v40 + 2);
          swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
          v32 = 0;
          v17 = sub_14093E520(Dst, (__int64)&qword_140042080, 0LL, (int *)&v32, 0LL);
          if ( v17 == -1073741568 && ((2 * ((v31[2] | (2 * v31[2])) & 0xC4444444)) & v31[2]) != 0 )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x");
            v32 = 0;
            v17 = sub_14093E520(Dst, (__int64)&qword_140042080, 0LL, (int *)&v32, 0LL);
          }
          if ( v17 && v17 != -1073741789 )
            goto LABEL_59;
        }
        v17 = sub_14093E830(Dst, (__int64)&qword_140042080, (__int64)P, Size, 1);
        goto LABEL_59;
      }
    }
LABEL_62:
    v3 = v34;
    goto LABEL_63;
  }
  v17 = -1073741811;
LABEL_63:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v16, 0);
  if ( v38 && v3 && v17 >= 0 )
    *v3 = i;
  return (unsigned int)v17;
}

/*
 * XREFs of sub_1409FFD10 @ 0x1409FFD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14093E3C0 @ 0x14093E3C0 (sub_14093E3C0.c)
 *     sub_1409FD474 @ 0x1409FD474 (sub_1409FD474.c)
 *     sub_1409FE4F8 @ 0x1409FE4F8 (sub_1409FE4F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FFD10(unsigned __int64 Address, _DWORD *a2)
{
  _DWORD *v2; // r14
  unsigned int *v4; // r15
  __int64 result; // rax
  KPROCESSOR_MODE v6; // si
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  unsigned int v10; // ebx
  _DWORD *v11; // r13
  struct _KTHREAD *v12; // rax
  int v13; // r12d
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r14
  __int64 v16; // rax
  char *v17; // r8
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  BOOL v24; // r8d
  unsigned int v25; // edx
  BOOL v26; // eax
  BOOL v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  _DWORD *v30; // rcx
  size_t v31; // r8
  __int64 v32; // rax
  BOOL v33; // [rsp+38h] [rbp-A0h]
  int v34; // [rsp+3Ch] [rbp-9Ch] BYREF
  unsigned int v35; // [rsp+40h] [rbp-98h]
  unsigned int v36; // [rsp+44h] [rbp-94h]
  unsigned int v37; // [rsp+48h] [rbp-90h]
  unsigned int v38; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v39; // [rsp+50h] [rbp-88h]
  _DWORD *v40; // [rsp+58h] [rbp-80h] BYREF
  PVOID P; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-70h]
  size_t Size; // [rsp+70h] [rbp-68h]
  void *Src; // [rsp+78h] [rbp-60h]
  void *v45; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+F8h] [rbp+20h] BYREF

  v2 = a2;
  v40 = 0LL;
  P = 0LL;
  v4 = 0LL;
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( (Address & 0xFFFFFFFFFFFFFFFCuLL) != Address )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_BYTE *)CurrentThread + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a2;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    v8 = Address != 0 ? *a2 : 0;
    if ( v8 )
      ProbeForWrite((volatile void *)Address, v8, 4u);
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, v6) )
      return 3221225569LL;
  }
  else
  {
    v8 = Address != 0 ? *a2 : 0;
  }
  if ( !v8 || (result = sub_1406A904C(Address, v8, v6, IoWriteAccess, &v40, (struct _MDL **)&P), (int)result >= 0) )
  {
    v9 = v40;
    v10 = 0;
    v33 = v8 != 0;
    v11 = 0LL;
    v12 = KeGetCurrentThread();
    --*((_WORD *)v12 + 242);
    ExAcquireFastMutexUnsafe(&stru_140C11680);
    LODWORD(NumberOfBytes) = 0;
    v13 = sub_14093E3C0(2, (__int64)sub_1409FCDB0, 0LL, &NumberOfBytes);
    if ( v13 == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
        v13 = sub_14093E3C0(2, (__int64)sub_1409FCDB0, (__int64)PoolWithTag, &NumberOfBytes);
      else
        v13 = -1073741670;
    }
    else
    {
      LODWORD(NumberOfBytes) = 0;
    }
    ExReleaseFastMutexUnsafe(&stru_140C11680);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v13 || !(_DWORD)NumberOfBytes )
      goto LABEL_53;
    v15 = v4;
    v42 = (unsigned __int64)v4 + 2 * (unsigned int)NumberOfBytes;
    while ( 1 )
    {
      v34 = 0;
      v16 = *((_QWORD *)v15 + 2) - 0x11D293CA8BE4DF61LL;
      if ( *((_QWORD *)v15 + 2) == 0x11D293CA8BE4DF61LL )
        v16 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v16 && (unsigned int)sub_1409FE4F8((wint_t *)v15 + 16, &v34) && v15[2] >= 8 )
      {
        v17 = (char *)v15 + v15[1];
        v37 = *((unsigned __int16 *)v17 + 2);
        Src = v17 + 6;
        v18 = sub_1409FD474((_WORD *)v17 + 3, v42);
        if ( v18 != -1 )
          v18 = 2 * v18 + 2;
        if ( v18 != -1 && v21 < v20 && v20 >= v21 + v18 + 6 )
          break;
      }
LABEL_49:
      v32 = *v15;
      if ( !(_DWORD)v32 )
      {
        v2 = a2;
        if ( v11 )
          *v11 = 0;
LABEL_53:
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        if ( P )
          sub_140231450((struct _MDL *)P);
        if ( v13 < 0 )
          v10 = v13;
        *v2 = (_DWORD)v9 - (_DWORD)v40;
        return v10;
      }
      v15 = (unsigned int *)((char *)v15 + v32);
    }
    Size = v18;
    v45 = (void *)(v19 + v18 + 6LL);
    v22 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_DWORD *)v22 != v9 )
    {
      v23 = v22 - (_DWORD)v9;
      v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v8 < v23 )
      {
        v24 = 0;
        v8 = 0;
        v10 = -1073741789;
LABEL_38:
        v35 = (v18 + 23) & 0xFFFFFFFC;
        v36 = v21 + v35 + 12;
        v25 = v36 + 4;
        v39 = v36 + 4;
        if ( v8 < v36 + 4 )
          v10 = -1073741789;
        v38 = v10;
        v26 = 0;
        if ( v8 >= v25 )
          v26 = v24;
        v27 = v26;
        v33 = v26;
        v28 = v8;
        v29 = v8 - v25;
        v8 = 0;
        if ( v28 >= v25 )
          v8 = v29;
        if ( v27 )
        {
          memset(v9, 0, v25);
          v9[1] = 1;
          v9[2] = v36;
          v9[3] = v34;
          v9[4] = 20;
          v9[5] = v35;
          memmove(v9 + 6, Src, Size);
          v30 = (_DWORD *)((char *)v9 + v35 + 4);
          *v30 = 1;
          v31 = v37;
          v30[1] = v37 + 12;
          v30[2] = 4;
          memmove(v30 + 3, v45, v31);
          if ( v11 )
            *v11 = (_DWORD)v9 - (_DWORD)v11;
          v11 = v9;
          v10 = v38;
          v25 = v39;
        }
        v9 = (_DWORD *)((char *)v9 + v25);
        goto LABEL_49;
      }
      v8 -= v23;
    }
    v24 = v33;
    goto LABEL_38;
  }
  return result;
}

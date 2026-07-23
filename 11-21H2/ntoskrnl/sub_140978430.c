/*
 * XREFs of sub_140978430 @ 0x140978430
 * Callers:
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     sub_14023A8F8 @ 0x14023A8F8 (sub_14023A8F8.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405A645C @ 0x1405A645C (sub_1405A645C.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140978430(ULONG_PTR a1, volatile void **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  struct _MDL *v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned int v10; // eax
  char v11; // dl
  __int64 v12; // rcx
  char v13; // r10
  __int64 v14; // r9
  __int64 *v15; // rdx
  SIZE_T v16; // r13
  _BYTE *v17; // rbx
  SIZE_T v18; // rax
  struct _MDL *v19; // rax
  __int16 v20; // dx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r13
  int v24; // eax
  struct _KTHREAD *v25; // rcx
  int v28; // [rsp+34h] [rbp-104h]
  int v29; // [rsp+40h] [rbp-F8h]
  unsigned int v30; // [rsp+44h] [rbp-F4h] BYREF
  struct _MDL *v31; // [rsp+48h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-E8h]
  int v33; // [rsp+58h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-D8h]
  __int128 v35; // [rsp+68h] [rbp-D0h]
  __int128 v36; // [rsp+78h] [rbp-C0h]
  volatile void *Address; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+90h] [rbp-A8h]
  SIZE_T v39; // [rsp+98h] [rbp-A0h]
  _OWORD v40[3]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE Src[32]; // [rsp+D0h] [rbp-68h] BYREF

  BugCheckParameter1 = a1;
  v30 = 0;
  memset(v40, 0, sizeof(v40));
  v5 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 != 40 )
  {
    v7 = -1073741820;
    goto LABEL_52;
  }
  if ( a4 )
    ProbeForWrite(a2, 0x28uLL, 8u);
  v35 = *(_OWORD *)a2;
  v36 = *((_OWORD *)a2 + 1);
  Address = a2[4];
  if ( (DWORD2(v36) & 0xFFFFFFFE) != 0 )
    goto LABEL_51;
  v8 = v35;
  if ( (unsigned __int64)v35 > 0x7FFFFFFEFFFFLL )
    goto LABEL_51;
  v9 = v36;
  if ( !(_QWORD)v36 || (((_QWORD)v36 - 1LL) & (unsigned __int64)v36) != 0 || (unsigned __int64)v36 <= 0x1000 )
    goto LABEL_51;
  v10 = sub_14023A8F8();
  v14 = v10;
  v29 = v10;
  if ( v10 < 3 )
  {
    v15 = &qword_14001C780[v10];
    do
    {
      if ( *v15 == (unsigned __int64)v36 >> 12 )
        break;
      v14 = (unsigned int)(v14 + 1);
      v29 = v14;
      ++v15;
    }
    while ( (unsigned int)v14 < 3 );
    v11 = BYTE8(v36);
  }
  if ( (_DWORD)v14 == 3 )
  {
LABEL_16:
    v7 = -1073741637;
    goto LABEL_52;
  }
  if ( (v12 & *((_QWORD *)&v35 + 1)) != 0 || ((unsigned __int64)v35 & ~v12) != (_QWORD)v35 )
    goto LABEL_51;
  v33 = 2 * (v11 & 1);
  v38 = *((_QWORD *)&v35 + 1) / (unsigned __int64)v36;
  v16 = 4 * (*((_QWORD *)&v35 + 1) / (unsigned __int64)v36);
  v39 = v16;
  if ( v16 > 0x20 )
  {
    if ( v16 <= 0xFFFFF000 )
    {
      v18 = MmSizeOfMdl((PVOID)Address, v16);
      v19 = (struct _MDL *)sub_1402828F0(64, v18, 0x20206D4Du);
      v5 = v19;
      v31 = v19;
      if ( !v19 )
        goto LABEL_24;
      v19->Next = 0LL;
      v20 = (__int16)Address;
      v19->Size = 8 * (((v16 + ((unsigned __int16)Address & 0xFFF) + 4095LL) >> 12) + 6);
      v19->MdlFlags = 0;
      v19->StartVa = (PVOID)((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL);
      v19->ByteOffset = v20 & 0xFFF;
      v19->ByteCount = v16;
      MmProbeAndLockPages(v19, a4, IoWriteAccess);
      v17 = (v5->MdlFlags & 5) != 0
          ? v5->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( !v17 )
      {
LABEL_24:
        v7 = -1073741670;
        goto LABEL_52;
      }
      goto LABEL_29;
    }
LABEL_51:
    v7 = -1073741811;
    goto LABEL_52;
  }
  v17 = Src;
  if ( v13 )
    ProbeForWrite(Address, 4 * (*((_QWORD *)&v35 + 1) / (unsigned __int64)v36), 4u);
LABEL_29:
  if ( *((_QWORD *)CurrentThread + 23) != BugCheckParameter1 )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v40, v14);
    v28 = 1;
  }
  v21 = v8 >> 12;
  v22 = v9 >> 12;
  CurrentThread = 0LL;
  if ( v38 )
  {
    while ( 1 )
    {
      if ( v6
        && (v21 < (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
         || v21 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32))) )
      {
        sub_14030EA70((char *)v6);
        v6 = 0LL;
      }
      v23 = v21 << 12;
      if ( !v6 )
      {
        v6 = sub_14030E7C0(v21 << 12, 2, (int *)&v30);
        if ( !v6 )
        {
          v7 = v30;
          goto LABEL_54;
        }
      }
      v21 += v22;
      if ( v21 - 1 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
        break;
      if ( (*(_DWORD *)(v6 + 48) & 0x70) != 0 || (*(_DWORD *)(v6 + 48) & 0x200000) == 0 )
        goto LABEL_16;
      *(_DWORD *)&v17[4 * (_QWORD)CurrentThread] = 0;
      v24 = sub_1405A645C(BugCheckParameter1 + 1664, v23, v29, v33);
      v25 = CurrentThread;
      *(_DWORD *)&v17[4 * (_QWORD)CurrentThread] ^= (*(_DWORD *)&v17[4 * (_QWORD)CurrentThread] ^ v24) & 3;
      CurrentThread = (struct _KTHREAD *)((char *)v25 + 1);
      if ( (unsigned __int64)v25 + 1 >= v38 )
      {
        v16 = v39;
        goto LABEL_44;
      }
    }
    v7 = -1073741800;
  }
  else
  {
LABEL_44:
    if ( v6 )
    {
      sub_14030EA70((char *)v6);
      v6 = 0LL;
    }
    if ( v28 )
    {
      sub_1402D0930((__int64)v40, 0LL);
      v28 = 0;
    }
    if ( v17 == Src )
      memmove((void *)Address, v17, v16);
    v7 = 0;
  }
LABEL_52:
  if ( v6 )
    sub_14030EA70((char *)v6);
LABEL_54:
  if ( v28 )
    sub_1402D0930((__int64)v40, 0LL);
  if ( v5 )
  {
    if ( (v5->MdlFlags & 2) != 0 )
      MmUnlockPages(v5);
    ExFreePoolWithTag(v5, 0);
  }
  return v7;
}

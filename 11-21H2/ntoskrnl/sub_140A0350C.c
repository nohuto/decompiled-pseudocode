/*
 * XREFs of sub_140A0350C @ 0x140A0350C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x14029F100 (ExfAcquirePushLockExclusive.c)
 *     ExfAcquirePushLockShared @ 0x14029F330 (ExfAcquirePushLockShared.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     sub_140A030B0 @ 0x140A030B0 (sub_140A030B0.c)
 *     sub_140A0326C @ 0x140A0326C (sub_140A0326C.c)
 *     sub_140A032A0 @ 0x140A032A0 (sub_140A032A0.c)
 *     sub_140A03C14 @ 0x140A03C14 (sub_140A03C14.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A0350C(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v3; // r15
  SIZE_T v4; // rdi
  unsigned int *PoolWithTag; // rsi
  __int64 v8; // rax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Buffer; // r13d
  unsigned int *v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // r14
  void *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // ecx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  void *v21; // rax
  int v22; // [rsp+20h] [rbp-128h] BYREF
  int v23; // [rsp+24h] [rbp-124h]
  unsigned __int64 v24; // [rsp+28h] [rbp-120h]
  unsigned int *v25; // [rsp+30h] [rbp-118h]
  unsigned int *v26; // [rsp+38h] [rbp-110h]
  unsigned int v27; // [rsp+40h] [rbp-108h]
  void *v28; // [rsp+48h] [rbp-100h]
  UNICODE_STRING StringIn; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v30; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v31; // [rsp+68h] [rbp-E0h]
  UNICODE_STRING v32[4]; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v33[4]; // [rsp+B0h] [rbp-98h] BYREF
  UNICODE_STRING v34; // [rsp+F0h] [rbp-58h] BYREF

  v3 = a3;
  v26 = a3;
  v4 = a2;
  v27 = a2;
  v31 = a1;
  memset(v32, 0, sizeof(v32));
  StringIn = 0LL;
  v22 = 0;
  v24 = 0LL;
  PoolWithTag = 0LL;
  v25 = 0LL;
  LODWORD(v32[3].Buffer) = 64;
  LODWORD(v32[0].Buffer) = v4;
  if ( !dword_140C0C660 )
    return 3221225506LL;
  if ( v3 )
    *v3 = 64;
  if ( (unsigned int)v4 < 0x40 )
    return 3221225476LL;
  v24 = a1 + 32;
  v8 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v8 = a1;
  v33[0] = *(_OWORD *)v8;
  v33[1] = *(_OWORD *)(v8 + 16);
  v33[2] = *(_OWORD *)(v8 + 32);
  v33[3] = *(_OWORD *)(v8 + 48);
  BYTE4(v32[0].Buffer) = LODWORD(v33[0]) == 1;
  v9 = sub_140A03C14((char *)v33 + 8, &StringIn, &v34, &v22);
  if ( v9 >= 0 )
  {
    *(_DWORD *)&v32[3].Length = v22;
    v32[2] = v34;
    if ( !StringIn.Buffer || (v9 = RtlDuplicateUnicodeString(1u, &StringIn, &v32[1]), v9 >= 0) )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x72766F43u);
      v25 = PoolWithTag;
      *(_QWORD *)&v32[0].Length = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_52;
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v9 = sub_140814DC0((__int64)sub_140A03480, (__int64)v32);
      if ( v9 < 0 )
      {
        sub_1402F9540((__int64)KeGetCurrentThread());
        goto LABEL_52;
      }
      sub_140A032A0((__int64 *)v32);
      Buffer = (unsigned int)v32[3].Buffer;
      v23 = *(_DWORD *)(&v32[3].MaximumLength + 1);
      if ( (unsigned int)v4 >= LODWORD(v32[3].Buffer)
        && (unsigned int)((__int64)(*(_QWORD *)&v32[0].Length - (_QWORD)PoolWithTag) >> 5) )
      {
        v12 = PoolWithTag;
        v13 = *(_DWORD *)(&v32[3].MaximumLength + 1);
        v14 = v24;
        while ( v13 )
        {
          v15 = (void *)(v12[6] + v14 + 32);
          *(_DWORD *)v14 = *v12;
          *(_DWORD *)(v14 + 4) = v12[1];
          *(_DWORD *)(v14 + 24) = v12[6];
          memmove((void *)(v14 + 28), v12 + 7, v12[6]);
          *(_WORD *)(v14 + 8) = *((_WORD *)v12 + 4);
          *(_WORD *)(v14 + 10) = *((_WORD *)v12 + 5);
          *(_QWORD *)(v14 + 16) = v15;
          memmove(v15, *((const void **)v12 + 2), *((unsigned __int16 *)v12 + 4));
          v16 = *v12;
          v14 += v16;
          v24 = v14;
          v12 = (unsigned int *)((char *)v12 + v16);
          v13 = --*(_DWORD *)(&v32[3].MaximumLength + 1);
        }
      }
      else
      {
        if ( (unsigned int)v4 < LODWORD(v32[3].Buffer) )
          v9 = -1073741820;
        v14 = v24;
      }
      if ( LODWORD(v33[0]) == 1 )
        ExfAcquirePushLockExclusive((__int64)&qword_140C10E30);
      else
        ExfAcquirePushLockShared((__int64)&qword_140C10E30);
      v17 = qword_140C10E20;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (__int64 *)v17 == &qword_140C10E20 )
          {
            ExfReleasePushLock(&qword_140C10E30);
            sub_1402F9540((__int64)KeGetCurrentThread());
            if ( v3 )
              *v3 = Buffer;
            *(_DWORD *)(v31 + 4) = v23;
            goto LABEL_52;
          }
          v30 = (_QWORD *)v17;
          v28 = *(void **)(v17 + 56);
          if ( v28 )
          {
            if ( sub_140A0326C(v17, v22, &StringIn, &v34) )
              break;
          }
LABEL_31:
          v17 = *(_QWORD *)v17;
        }
        v18 = *(_DWORD *)(v17 + 48);
        if ( LODWORD(v33[0]) != 1 )
          v18 -= *((_DWORD *)v28 + 7);
        if ( v18 < 0xFFFFFFE0 )
        {
          v19 = *(unsigned __int16 *)(v17 + 32) + v18 + 32;
          if ( v19 < 0x20 )
            v19 = -1;
        }
        else
        {
          v19 = -1;
        }
        v20 = v19 + Buffer;
        if ( v19 + Buffer >= Buffer )
        {
          Buffer += v19;
          if ( v27 >= v20 )
          {
            v28 = (void *)(v18 + v14 + 32);
            *(_DWORD *)v14 = v19;
            *(_DWORD *)(v14 + 4) = 0;
            *(_DWORD *)(v14 + 24) = v18;
            memmove((void *)(v14 + 28), *(const void **)(v17 + 56), v18);
            *(_WORD *)(v14 + 8) = *(_WORD *)(v17 + 32);
            *(_WORD *)(v14 + 10) = *(_WORD *)(v17 + 32);
            v21 = v28;
            *(_QWORD *)(v14 + 16) = v28;
            memmove(v21, *(const void **)(v17 + 40), *(unsigned __int16 *)(v17 + 32));
            v14 += v19;
            v24 = v14;
            if ( LODWORD(v33[0]) == 1 )
            {
              v17 = *(_QWORD *)(v17 + 8);
              sub_140A030B0(v30);
            }
            v3 = v26;
          }
          else
          {
            v3 = v26;
            if ( v26 )
              *v26 = v20;
            v9 = -1073741820;
          }
          ++v23;
          goto LABEL_31;
        }
        DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", v17 + 32);
        v17 = *(_QWORD *)v17;
        v3 = v26;
      }
    }
  }
LABEL_52:
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
  if ( v32[1].Buffer )
    RtlFreeUnicodeString(&v32[1]);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v9;
}

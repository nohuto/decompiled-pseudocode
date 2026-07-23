/*
 * XREFs of sub_1407DF200 @ 0x1407DF200
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     PsSetCurrentThreadPrefetching @ 0x1407DF730 (PsSetCurrentThreadPrefetching.c)
 *     sub_1407DF794 @ 0x1407DF794 (sub_1407DF794.c)
 *     sub_1407DFBDC @ 0x1407DFBDC (sub_1407DFBDC.c)
 *     sub_1407DFF0C @ 0x1407DFF0C (sub_1407DFF0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1407DF200(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  _QWORD *Pool2; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  ULONG_PTR v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // eax
  __int64 v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // r9
  char *v15; // rcx
  char *v16; // rdi
  char *v17; // r10
  __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // ebx
  __int64 v21; // rax
  char *v22; // rsi
  unsigned int v23; // edx
  int v24; // r13d
  int v25; // r13d
  bool v26; // zf
  wchar_t *v27; // r14
  __int64 v28; // r15
  int v29; // r14d
  bool v30; // r11
  unsigned int v31; // r9d
  BOOL v32; // r15d
  int v33; // r10d
  __int64 v34; // rax
  int v35; // ecx
  int v36; // r10d
  unsigned int v37; // edx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // eax
  char v41; // [rsp+58h] [rbp-B0h] BYREF
  bool v42; // [rsp+59h] [rbp-AFh]
  int v43; // [rsp+5Ch] [rbp-ACh]
  __int64 v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  __int64 v47; // [rsp+78h] [rbp-90h]
  int v48; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+88h] [rbp-80h] BYREF
  HANDLE EventHandle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v51; // [rsp+98h] [rbp-70h]
  __int64 v52; // [rsp+A0h] [rbp-68h]
  char *v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  char *v55; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v58[3]; // [rsp+100h] [rbp-8h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  LODWORD(v5) = 0;
  memset(v58, 0, sizeof(v58));
  Pool2 = 0LL;
  v7 = a1;
  v54 = a1;
  DestinationString = 0LL;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(_QWORD *)(v4 + 16);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v47 = v4;
  v44 = v8;
  v41 = 0;
  EventHandle = 0LL;
  sub_14030D5C0(v9, 0LL, (__int64)v58, a4);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v11 < 0 )
    goto LABEL_56;
  v13 = *(unsigned int **)v8;
  v14 = v8;
  v12 = *(unsigned int *)(v7 + 40);
  v49 = 0LL;
  LODWORD(v45) = v12;
  v15 = (char *)v13 + v13[21];
  v16 = (char *)v13 + v13[23];
  v17 = (char *)v13 + v13[25];
  v53 = v15;
  v52 = *(_QWORD *)(v8 + 64);
  v18 = *(_QWORD *)(v8 + 72);
  v19 = *(_DWORD *)(v8 + 100) & 7;
  v51 = v18;
  v20 = *(_DWORD *)(v14 + 96) & 7 | (8 * (v19 | 8));
  v55 = v17;
  v5 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
  v43 = v5;
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 32) )
    goto LABEL_3;
  while ( 1 )
  {
    v21 = (unsigned int)v5;
    v22 = &v15[32 * v5];
    v46 = v21;
    v23 = *((_DWORD *)v22 + 5);
    if ( (v23 & 1) == 0 )
      break;
LABEL_36:
    if ( v41 )
    {
      LOBYTE(v12) = 1;
      sub_1407DFF0C(*(_QWORD *)(v14 + 56) + 56 * v21, v14, v12);
      v41 = 0;
    }
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
LABEL_40:
    v5 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
    v43 = v5;
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 32) )
    {
      v8 = v44;
      goto LABEL_51;
    }
    v12 = (unsigned int)v45;
    v14 = v44;
    v15 = v53;
    v7 = v54;
    v17 = v55;
  }
  v24 = *(_DWORD *)(v7 + 44);
  v42 = 0;
  v25 = v24 & 1;
  if ( v25 )
  {
    v26 = ((unsigned __int8)v12 & BYTE1(v23) & 0x7F) == 0;
  }
  else
  {
    v48 = 0;
    v26 = !_BitScanForward((unsigned int *)&v39, (v23 >> 8) & 0x7F);
    if ( v26 )
      v39 = 7;
    v40 = v12 & (1 << v39);
    v48 = v39;
    v42 = v40 != 0;
    if ( ((unsigned __int8)v12 & (unsigned __int8)(v23 >> 1) & 0x7F) != 0 )
      goto LABEL_10;
    v42 = v40 != 0;
    v26 = v40 == 0;
  }
  if ( v26 )
  {
LABEL_35:
    v21 = v46;
    goto LABEL_36;
  }
LABEL_10:
  v27 = (wchar_t *)&v17[*((unsigned int *)v22 + 3)];
  v28 = sub_1407DFBDC(v27);
  if ( !v28 )
  {
LABEL_34:
    v14 = v44;
    v4 = v47;
    goto LABEL_35;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(8 * *((_DWORD *)v22 + 2) + 24), 1280336707LL);
  if ( Pool2 )
  {
    *((_DWORD *)Pool2 + 3) = v25;
    *Pool2 = 0LL;
    *((_DWORD *)Pool2 + 2) = 0;
    RtlInitUnicodeString(&DestinationString, &v27[*(unsigned int *)(v28 + 24) + 1]);
    v29 = v43;
    if ( (int)sub_1407DF794(
                v44,
                v28,
                (unsigned int)&DestinationString,
                (_DWORD)v22,
                v45,
                v43,
                v25,
                (__int64)EventHandle,
                (__int64)&v49,
                (__int64)&v41) >= 0 )
    {
      v30 = v42;
      v31 = 0;
      v32 = 1;
      if ( v42 )
      {
        Pool2[*((unsigned int *)Pool2 + 2) + 2] = 0LL;
        v31 = 1;
        ++*((_DWORD *)Pool2 + 2);
        v32 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 16LL) != 0LL;
      }
      v33 = 0;
      v34 = *(int *)v22;
      v35 = v34 + *((_DWORD *)v22 + 1);
      v43 = 0;
      v12 = v35;
      if ( v34 < v35 )
      {
        v36 = v45;
        while ( 1 )
        {
          v37 = *(_DWORD *)&v16[8 * v34 + 4];
          if ( (v37 & 1) == 0 )
          {
            if ( (v37 & 8) != 0 && !v32 )
            {
LABEL_22:
              if ( *(_DWORD *)&v16[8 * v34] || !v30 )
              {
                Pool2[(unsigned int)(*((_DWORD *)Pool2 + 2))++ + 2] = (unsigned __int64)*(unsigned int *)&v16[8 * v34] << 9;
                ++v31;
              }
              else
              {
                v43 = 1;
              }
              goto LABEL_24;
            }
            if ( _bittest(&v36, (v37 >> 4) & 7) )
            {
              if ( v25 )
              {
                if ( (v37 & 2) != 0 )
                  goto LABEL_22;
              }
              else if ( (v37 & 4) != 0 )
              {
                goto LABEL_22;
              }
            }
          }
LABEL_24:
          if ( ++v34 >= v35 )
          {
            v33 = v43;
            break;
          }
        }
      }
      if ( *((_DWORD *)Pool2 + 2) != 1 || !v30 || !v32 || v33 )
      {
        v4 = v47;
        Pool2[2] |= v20;
        *Pool2 = v49;
        v38 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
        *(_QWORD *)(v52 + 8 * v38) = Pool2;
        Pool2 = 0LL;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 36), v31);
        if ( v41 )
        {
          *(_DWORD *)(v51 + 4 * v38) = v29;
          v41 = 0;
        }
        else
        {
          *(_DWORD *)(v51 + 4 * v38) = -1;
        }
        goto LABEL_40;
      }
    }
    goto LABEL_34;
  }
  LODWORD(v5) = v43;
  v11 = -1073741670;
  v4 = v47;
  v8 = v44;
LABEL_56:
  *(_DWORD *)(v4 + 40) = v11;
LABEL_51:
  if ( v41 )
  {
    LOBYTE(v12) = 1;
    sub_1407DFF0C(*(_QWORD *)(v8 + 56) + 56LL * (unsigned int)v5, v8, v12);
  }
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  sub_1402F9540((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  sub_1402D0930((__int64)v58, 0LL);
  sub_1402AD030((struct _EX_RUNDOWN_REF *)v4);
}

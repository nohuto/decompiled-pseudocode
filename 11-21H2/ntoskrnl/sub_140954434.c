/*
 * XREFs of sub_140954434 @ 0x140954434
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_1406CFCA4 @ 0x1406CFCA4 (sub_1406CFCA4.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 *     sub_14076B1A8 @ 0x14076B1A8 (sub_14076B1A8.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_1409483EC @ 0x1409483EC (sub_1409483EC.c)
 *     sub_140953D38 @ 0x140953D38 (sub_140953D38.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140954434(unsigned __int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  WCHAR *v7; // rsi
  char v8; // di
  int v9; // r14d
  int v10; // r15d
  signed int inited; // ebx
  WCHAR *v12; // r12
  char v13; // r13
  unsigned int v14; // r8d
  int v15; // eax
  struct _KTHREAD *v16; // rax
  char v17; // bl
  int v19; // r15d
  __int64 Pool2; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r13d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v25; // rax
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // eax
  char v34; // dl
  int v35; // eax
  _WORD *v36; // r12
  __int64 v37; // rdx
  int v38; // [rsp+58h] [rbp-89h] BYREF
  __int64 v39; // [rsp+5Ch] [rbp-85h] BYREF
  int v40; // [rsp+64h] [rbp-7Dh] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-79h] BYREF
  __int64 v42; // [rsp+70h] [rbp-71h] BYREF
  int v43; // [rsp+78h] [rbp-69h] BYREF
  int v44; // [rsp+7Ch] [rbp-65h] BYREF
  int v45; // [rsp+80h] [rbp-61h] BYREF
  HANDLE KeyHandle[2]; // [rsp+88h] [rbp-59h] BYREF
  PVOID P; // [rsp+98h] [rbp-49h]
  PVOID Object; // [rsp+A0h] [rbp-41h]
  PVOID v49; // [rsp+A8h] [rbp-39h] BYREF
  UNICODE_STRING v50; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+D0h] [rbp-11h]
  __int64 v53; // [rsp+E0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+7h] BYREF

  v39 = 0LL;
  v53 = 0LL;
  KeyHandle[0] = 0LL;
  v50 = 0LL;
  *a6 = 0;
  v7 = 0LL;
  v51 = 0LL;
  v45 = 0;
  v8 = 0;
  *(_OWORD *)SourceString = 0LL;
  v43 = 0;
  v9 = 0;
  DestinationString = 0LL;
  v40 = 0;
  v44 = 0;
  Object = 0LL;
  Handle = 0LL;
  v49 = 0LL;
  v42 = 0LL;
  P = 0LL;
  v10 = sub_140953D38(a1, a2, a5, (__int64)&v51);
  if ( v10 < 0 )
    goto LABEL_24;
  if ( !sub_14078A600(2u) )
  {
    inited = -1073741790;
    goto LABEL_12;
  }
  v12 = (WCHAR *)*((_QWORD *)&v51 + 1);
  if ( !*((_QWORD *)&v51 + 1)
    || LODWORD(SourceString[0]) < 2
    || !SourceString[1]
    || (unsigned int)v53 < 2
    || !a3
    || a4 < 0x14 )
  {
    inited = -1073741811;
    goto LABEL_12;
  }
  v13 = BYTE4(v51);
  if ( (DWORD1(v51) & 0xFFFFFFF0) != 0 || (v19 = BYTE4(v51) & 2, !sub_140789040(SourceString[1])) )
  {
    inited = -1073741811;
    goto LABEL_12;
  }
  inited = sub_140779DC4((__int64 **)&v49);
  if ( inited < 0 )
    goto LABEL_12;
  Pool2 = ExAllocatePool2(256LL, 400LL, 879783504LL);
  v7 = (WCHAR *)Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_12;
  }
  v23 = v13 & 4;
  if ( v23 )
  {
    LOBYTE(v21) = v19 != 0;
    inited = sub_140955848(v12, v21, Pool2);
    if ( v19 )
      goto LABEL_37;
  }
  else
  {
    inited = sub_14077FAC0(v22, v12);
  }
  if ( inited < 0 )
    goto LABEL_12;
  if ( !v23 )
  {
    inited = sub_1402E0340(v7, 0xC8uLL, v12, 0LL, 0LL, 2048);
    if ( inited < 0 )
      goto LABEL_12;
  }
  inited = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, (__int64)v7, 16, 0, 131103, 0, (__int64)&Handle, 0LL);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
    goto LABEL_12;
  if ( v19 )
  {
    if ( Handle )
    {
LABEL_51:
      inited = -1073741771;
      goto LABEL_12;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
    LOBYTE(v38) = 0;
    v8 = 1;
    inited = sub_140768AF8(*(__int64 *)&qword_140D00AC0, (__int64)v7, 131078, KeyHandle, &v38, 0);
    if ( inited >= 0 )
    {
      if ( (_BYTE)v38 )
      {
        v43 = 1;
        inited = sub_1406D5A30(KeyHandle[0], L"Phantom", 4u, &v43, 4u);
        ZwClose(KeyHandle[0]);
        if ( inited >= 0 )
        {
          ExReleaseResourceLite(&stru_140C462A0);
          sub_1402F9540((__int64)KeGetCurrentThread());
          goto LABEL_38;
        }
      }
      else
      {
        inited = -1073741771;
        ZwClose(KeyHandle[0]);
      }
    }
LABEL_55:
    v9 = v42;
    goto LABEL_12;
  }
  if ( Handle )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, v7) >= 0 )
    {
      sub_14077572C(0);
      v25 = sub_140779C10((__int64)&DestinationString, 0x746C6644u);
      Object = v25;
      v26 = (__int64)v25;
      if ( v25 )
        v27 = *(_QWORD *)(v25[39] + 40LL);
      else
        v27 = 0LL;
      sub_140775698(0);
      if ( v27 )
      {
        if ( sub_1406CFCA4(v26) )
          goto LABEL_51;
      }
      else
      {
        sub_1409483EC(v28, (__int64)v7);
      }
    }
  }
  else
  {
    v29 = KeGetCurrentThread();
    --*((_WORD *)v29 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
    LOBYTE(v38) = 0;
    v8 = 1;
    inited = sub_140768AF8(*(__int64 *)&qword_140D00AC0, (__int64)v7, 131103, &Handle, &v38, 0);
    if ( inited < 0 )
      goto LABEL_55;
    ExReleaseResourceLite(&stru_140C462A0);
    sub_1402F9540((__int64)KeGetCurrentThread());
    v8 = 0;
    v9 = v42;
    if ( !(_BYTE)v38 )
      goto LABEL_51;
  }
  inited = RtlInitUnicodeStringEx(&v50, v7);
  v8 = 0;
  if ( inited < 0 )
    goto LABEL_12;
  LODWORD(v39) = 4;
  v30 = sub_14077CD90(
          *(__int64 *)&qword_140D00AC0,
          (__int64)v7,
          (__int64)Handle,
          11,
          (__int64)&v39 + 4,
          (__int64)&v40,
          (__int64)&v39,
          0);
  v32 = v40;
  if ( v30 < 0 )
    v32 = 0;
  v40 = v32;
  v33 = sub_14076B1A8((__int64)&v50, v31, &v44);
  v34 = v44;
  if ( v33 < 0 )
    v34 = 0;
  if ( (v40 & 0x12) != 0 || (v34 & 2) != 0 )
  {
    inited = -1073741808;
    goto LABEL_12;
  }
  inited = sub_14095975C(&v50);
  if ( inited < 0 )
  {
LABEL_12:
    v14 = a4;
    goto LABEL_13;
  }
  LODWORD(v39) = 4;
  if ( (int)sub_14077FC64(Handle, L"Phantom", (_DWORD *)&v39 + 1, &v45, (unsigned int *)&v39) < 0
    || HIDWORD(v39) != 4
    || (v35 = v45, (_DWORD)v39 != 4) )
  {
    v35 = 0;
  }
  if ( v35 )
  {
    *(_OWORD *)KeyHandle = 0LL;
    if ( RtlInitUnicodeStringEx((PUNICODE_STRING)KeyHandle, L"Phantom") >= 0 )
      ZwDeleteValueKey(Handle, (PUNICODE_STRING)KeyHandle);
  }
  if ( (BYTE4(v51) & 8) != 0 )
  {
    LODWORD(v39) = 512;
    P = (PVOID)ExAllocatePool2(256LL, 512LL, 879783504LL);
    v36 = P;
    if ( !P )
    {
      inited = -1073741670;
      goto LABEL_12;
    }
    if ( (int)sub_14077CD90(
                *(__int64 *)&qword_140D00AC0,
                (__int64)v7,
                (__int64)Handle,
                5,
                (__int64)&v39 + 4,
                (__int64)P,
                (__int64)&v39,
                0) >= 0
      && HIDWORD(v39) == 1
      && (unsigned int)v39 <= 0x200
      && *v36 )
    {
      inited = RtlInitUnicodeStringEx(&v50, v7);
      if ( inited >= 0 )
      {
        LOBYTE(v37) = 1;
        inited = sub_14076B554((__int64)&v50, v37, 0LL, 0);
      }
      if ( inited < 0 )
        goto LABEL_12;
LABEL_37:
      v8 = 0;
      if ( inited < 0 )
        goto LABEL_12;
    }
  }
LABEL_38:
  inited = sub_1402E0AC4(v7, 0xC8uLL, &v42);
  v8 = 0;
  if ( inited < 0 )
  {
    v9 = 0;
    goto LABEL_12;
  }
  v14 = a4;
  v9 = v42 + 1;
  if ( (unsigned __int64)a4 - 20 < 2 * (v42 + 1) )
    inited = -1073741789;
  if ( inited >= 0 )
  {
    v15 = sub_14077C780(inited, 2 * v9, 0, v7, 2 * v9, SHIDWORD(v53), a3, a4, a6);
    goto LABEL_14;
  }
LABEL_13:
  v15 = sub_14077C780(inited, 2 * v9, 0, 0LL, 0, SHIDWORD(v53), a3, v14, a6);
LABEL_14:
  v10 = v15;
  if ( Handle )
    ZwClose(Handle);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x34706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0x34706E50u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
  {
    ExReleaseResourceLite(&stru_140C462A0);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
LABEL_24:
  v16 = KeGetCurrentThread();
  v17 = *((_BYTE *)v16 + 562);
  if ( *((_QWORD *)&v51 + 1) )
    sub_1402DF554(*((_BYTE *)v16 + 562), *((void **)&v51 + 1));
  if ( SourceString[1] )
    sub_1402DF554(v17, (void *)SourceString[1]);
  if ( v49 )
    sub_140779A50((PVOID **)v49);
  return (unsigned int)v10;
}

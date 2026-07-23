/*
 * XREFs of sub_140769C24 @ 0x140769C24
 * Callers:
 *     sub_140697BE0 @ 0x140697BE0 (sub_140697BE0.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     sub_140955EF8 @ 0x140955EF8 (sub_140955EF8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14076A134 @ 0x14076A134 (sub_14076A134.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_14076A520 @ 0x14076A520 (sub_14076A520.c)
 *     sub_14076A680 @ 0x14076A680 (sub_14076A680.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_140776274 @ 0x140776274 (sub_140776274.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140788E8C @ 0x140788E8C (sub_140788E8C.c)
 *     sub_140789718 @ 0x140789718 (sub_140789718.c)
 *     sub_140A237D0 @ 0x140A237D0 (sub_140A237D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140769C24(__int64 a1, __int64 a2, __int64 a3, char a4, PVOID *a5, __int64 a6)
{
  _QWORD *v6; // rdi
  HANDLE v7; // r12
  _QWORD *v8; // rsi
  _DWORD *v9; // r14
  _QWORD *v10; // r13
  int v11; // ebx
  __int64 Pool2; // rax
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdi
  char v16; // si
  int v17; // eax
  __int64 v18; // r12
  int v19; // eax
  int v20; // eax
  char v21; // si
  __int64 v22; // r8
  struct _KTHREAD *v24; // rax
  int v25; // esi
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // [rsp+38h] [rbp-C8h]
  char v29; // [rsp+60h] [rbp-A0h] BYREF
  char v30; // [rsp+61h] [rbp-9Fh]
  unsigned int v31; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v33; // [rsp+70h] [rbp-90h] BYREF
  PVOID v34; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h] BYREF
  int v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  PVOID v41; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int128 Source2; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Str2[40]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[80]; // [rsp+120h] [rbp+20h] BYREF

  v39 = a1;
  v43 = a6;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  LOBYTE(v36) = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v29 = 0;
  BugCheckParameter2 = 0LL;
  v41 = 0LL;
  v38 = 0;
  v37 = 0;
  *a5 = 0LL;
  v30 = a4;
  v40 = a3;
  Source2 = 0LL;
  v11 = sub_140773030(a2, Str2);
  if ( v11 < 0 )
    goto LABEL_44;
  v31 = 512;
  Pool2 = ExAllocatePool2(256LL, 1024LL, 538996816LL);
  *a5 = (PVOID)Pool2;
  if ( !Pool2 )
    goto LABEL_43;
  v11 = sub_140789718((unsigned int)&v31, (unsigned int)Str2, v39, v40, 0, Pool2, 512, (__int64)&v31);
  if ( v11 != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v26 = v31;
  v27 = ExAllocatePool2(256LL, 2LL * v31, 538996816LL);
  *a5 = (PVOID)v27;
  if ( !v27 )
  {
LABEL_43:
    v11 = -1073741670;
    goto LABEL_44;
  }
  v11 = sub_140789718((unsigned int)&v31, (unsigned int)Str2, v39, v40, 0, v27, v26, (__int64)&v31);
LABEL_4:
  if ( v11 < 0 )
    goto LABEL_44;
  v13 = (_DWORD *)v43;
  if ( v43 )
    *v13 = (unsigned __int8)sub_14076A520(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v15 = -1LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  if ( (int)sub_14077B0A4(3LL, *a5, &BugCheckParameter2) >= 0 )
  {
    v24 = KeGetCurrentThread();
    --*((_WORD *)v24 + 242);
    v9 = (_DWORD *)BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v25 = v9[8];
    ExReleasePushLockEx((ULONG_PTR)v9, 0LL);
    KeLeaveCriticalRegion();
    v16 = v25 & 1;
  }
  else
  {
    v9 = (_DWORD *)BugCheckParameter2;
    v16 = v36;
  }
  v17 = sub_14076A3C4(4LL, Str2, &v41);
  v10 = v41;
  v11 = v17;
  if ( v17 < 0 )
    goto LABEL_51;
  v18 = v39;
  v11 = sub_14076A3C4(1LL, v39, &v34);
  if ( v11 < 0 )
    goto LABEL_51;
  v19 = sub_14077DA5C(
          qword_140D00AC0,
          v18,
          1,
          0,
          0LL,
          (__int64)&qword_140010A78,
          (__int64)&v38,
          (__int64)&Source2,
          16,
          (__int64)&v37,
          0);
  v11 = v19;
  if ( v19 == -1073741275 )
  {
    Source2 = 0LL;
  }
  else if ( v19 < 0 )
  {
LABEL_51:
    v7 = Handle;
LABEL_52:
    v8 = v34;
    v6 = v33;
    goto LABEL_26;
  }
  if ( !(unsigned __int8)sub_140776274(&Source2) )
  {
    v11 = sub_140773030(&Source2, v46);
    if ( v11 < 0 )
      goto LABEL_51;
    v11 = sub_14076A3C4(5LL, v46, &v33);
    if ( v11 < 0 )
      goto LABEL_51;
  }
  if ( !v16 )
  {
    v11 = sub_140779DC4(&P);
    if ( v11 < 0 )
      goto LABEL_51;
    v11 = sub_14076A680(qword_140D00AC0, (unsigned int)*a5, 2, (unsigned int)&Handle, (__int64)&v29, 0);
    if ( v11 < 0 )
      goto LABEL_51;
  }
  if ( !v9 )
  {
    v20 = sub_14077B0A4(3LL, *a5, &BugCheckParameter2);
    v9 = (_DWORD *)BugCheckParameter2;
    v11 = v20;
    if ( v20 < 0 )
      goto LABEL_51;
  }
  sub_14076A134(0LL, v10, v9, 0LL);
  v21 = v29;
  do
    ++v15;
  while ( *(_WORD *)(v18 + 2 * v15) );
  v28 = v18;
  v7 = Handle;
  v11 = sub_14077198C(
          qword_140D00AC0,
          (unsigned int)*a5,
          3,
          0LL,
          (__int64)&qword_140010AD8,
          18,
          v28,
          2 * (int)v15 + 2,
          v29 != 0 ? 0x20000 : 0);
  if ( v11 < 0 )
  {
    if ( v21 )
      sub_140A237D0(*(_QWORD *)&qword_140D00AC0, *a5, 0LL);
    goto LABEL_52;
  }
  v8 = v34;
  sub_14076A134(1LL, v34, v9, 0LL);
  v6 = v33;
  if ( v33 )
    sub_14076A134(2LL, v33, v9, 0LL);
LABEL_26:
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  if ( v11 >= 0 )
  {
    if ( !v30 )
    {
      LOBYTE(v22) = 1;
      v11 = sub_140788E8C(0LL, *a5, v22);
    }
    goto LABEL_29;
  }
LABEL_44:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_29:
  if ( v7 )
    ZwClose(v7);
  if ( P )
    sub_140779A50(P);
  if ( v9 )
    sub_14077B394(v9);
  if ( v10 )
  {
    sub_14076A0A8(*((unsigned int *)v10 + 7), v10[2]);
    sub_14077B394(v10);
  }
  if ( v8 )
  {
    sub_14076A0A8(*((unsigned int *)v8 + 7), v8[2]);
    sub_14077B394(v8);
  }
  if ( v6 )
  {
    sub_14076A0A8(*((unsigned int *)v6 + 7), v6[2]);
    sub_14077B394(v6);
  }
  return (unsigned int)v11;
}

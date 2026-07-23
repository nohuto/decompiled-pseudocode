/*
 * XREFs of sub_14095975C @ 0x14095975C
 * Callers:
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 * Callees:
 *     sub_14024D9D8 @ 0x14024D9D8 (sub_14024D9D8.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CFCE0 @ 0x1406CFCE0 (sub_1406CFCE0.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_1407690BC @ 0x1407690BC (sub_1407690BC.c)
 *     sub_14076ACE4 @ 0x14076ACE4 (sub_14076ACE4.c)
 *     sub_14076C288 @ 0x14076C288 (sub_14076C288.c)
 *     sub_14076C4E0 @ 0x14076C4E0 (sub_14076C4E0.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_140859598 @ 0x140859598 (sub_140859598.c)
 *     sub_14085C93C @ 0x14085C93C (sub_14085C93C.c)
 *     sub_14086358C @ 0x14086358C (sub_14086358C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095975C(PCUNICODE_STRING SourceString)
{
  WCHAR *Pool2; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v4; // rax
  int v5; // edi
  __int16 *v6; // r13
  unsigned __int16 Length; // bx
  int v8; // eax
  struct _DEVICE_OBJECT *v9; // r14
  int v10; // eax
  __int64 v11; // rsi
  __int16 v13; // ax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v22; // [rsp+50h] [rbp-30h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  int v26; // [rsp+C8h] [rbp+48h] BYREF
  int v27; // [rsp+D0h] [rbp+50h] BYREF
  int v28; // [rsp+D8h] [rbp+58h] BYREF

  v28 = 0;
  Pool2 = 0LL;
  v26 = 0;
  v27 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  P = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  sub_14077572C(1);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  v4 = (struct _DEVICE_OBJECT *)sub_140779C10((__int64)SourceString, 0x43706E50u);
  DeviceObject = v4;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x43706E50u);
    v5 = 0;
LABEL_21:
    ExReleaseResourceLite(&stru_140C462A0);
    sub_1402F9540((__int64)KeGetCurrentThread());
    goto LABEL_22;
  }
  v5 = sub_140779CA0(&v22, 0LL, &SourceString->Length);
  if ( v5 < 0 )
    goto LABEL_21;
  v5 = sub_140779DC4((__int64 **)&P);
  if ( v5 < 0 )
    goto LABEL_21;
  v6 = v22;
  v5 = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, (__int64)v22, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
  if ( v5 < 0 )
    goto LABEL_21;
  DestinationString.MaximumLength = 0;
  Length = 0;
  v26 = 512;
  DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, 512LL, 538996816LL);
  if ( !Pool2 )
  {
    v5 = -1073741670;
    goto LABEL_21;
  }
  if ( (int)sub_14077CD90(
              *(__int64 *)&qword_140D00AC0,
              (__int64)v6,
              (__int64)Handle,
              5,
              (__int64)&v27,
              (__int64)Pool2,
              (__int64)&v26,
              0) >= 0
    && v27 == 1
    && v26 )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
    {
      Length = DestinationString.Length;
    }
    else
    {
      Length = 0;
      DestinationString.MaximumLength = 0;
      DestinationString.Length = 0;
      DestinationString.Buffer = 0LL;
    }
  }
  v8 = sub_140859598(&DeviceObject);
  v9 = DeviceObject;
  v5 = v8;
  if ( v8 < 0 )
  {
LABEL_19:
    if ( v9 )
      IoDeleteDevice(v9);
    goto LABEL_21;
  }
  DeviceObject->Flags |= 0x1000u;
  v10 = sub_1406CFCE0((__int64)v9, (__int64)&v21);
  v11 = v21;
  if ( !v21 )
  {
    if ( v10 == -1073740946 )
      v10 = -1073741670;
    v5 = v10;
    if ( v10 >= 0 )
      goto LABEL_21;
    goto LABEL_19;
  }
  sub_14076FB70(v21, 17);
  sub_1402DE844(v11, 772);
  v26 = 4;
  if ( (int)sub_14077CD90(
              *(__int64 *)&qword_140D00AC0,
              (__int64)v6,
              (__int64)Handle,
              11,
              (__int64)&v27,
              (__int64)&v28,
              (__int64)&v26,
              0) >= 0 )
  {
    if ( v27 == 4 && v26 == 4 )
    {
      v13 = v28;
    }
    else
    {
      v13 = 0;
      v28 = 0;
    }
    if ( (v13 & 0x20) != 0 )
    {
      v14 = 0;
      v15 = 18;
LABEL_42:
      sub_140765114(v11, v15, v14);
      goto LABEL_43;
    }
    if ( (v13 & 0x2000) != 0 )
    {
      v14 = 0;
      v15 = 16;
      goto LABEL_42;
    }
    if ( (v13 & 0x40) != 0 )
    {
      v14 = sub_14086358C((__int64)v6, (int)Handle);
      v15 = 28;
      goto LABEL_42;
    }
  }
LABEL_43:
  v5 = sub_14085C93C(v11, (unsigned int)SourceString->Length + 2);
  if ( v5 < 0 )
    goto LABEL_19;
  RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 40), SourceString);
  if ( !Length || (int)sub_1407690BC((PUNICODE_STRING)(v11 + 56), &DestinationString) < 0 )
  {
    *(_DWORD *)(v11 + 56) = 0;
    *(_QWORD *)(v11 + 64) = 0LL;
  }
  v5 = sub_14076ACE4(*(_QWORD *)(v11 + 32), v11 + 40);
  if ( v5 < 0 )
    goto LABEL_19;
  sub_14024D9D8((__int64)qword_140C46278, v11);
  ObfReferenceObject(v9);
  ExReleaseResourceLite(&stru_140C462A0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v16 = v21;
  sub_14076C4E0(v21);
  sub_140772044(v17, *(_QWORD *)(v16 + 48), 1);
  sub_140772044(v18, *(_QWORD *)(v16 + 48), 14);
  sub_140772044(v19, *((_QWORD *)qword_140C46278 + 6), 15);
  sub_14076C288((__int128 *)&qword_140010990, *(_QWORD **)(v11 + 32));
LABEL_22:
  sub_140775698(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    sub_140779A50((PVOID **)P);
  if ( v22 )
    sub_14077BAB8(v22, (__int64)SourceString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v5;
}

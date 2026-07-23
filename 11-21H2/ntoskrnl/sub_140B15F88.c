/*
 * XREFs of sub_140B15F88 @ 0x140B15F88
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_1403DE020 @ 0x1403DE020 (sub_1403DE020.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067C560 @ 0x14067C560 (sub_14067C560.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_14067FE50 @ 0x14067FE50 (sub_14067FE50.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_1406E36C4 @ 0x1406E36C4 (sub_1406E36C4.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 *     sub_140831E08 @ 0x140831E08 (sub_140831E08.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     sub_140837E20 @ 0x140837E20 (sub_140837E20.c)
 *     sub_140844BAC @ 0x140844BAC (sub_140844BAC.c)
 *     sub_14085D190 @ 0x14085D190 (sub_14085D190.c)
 *     sub_140861E5C @ 0x140861E5C (sub_140861E5C.c)
 *     sub_140862F14 @ 0x140862F14 (sub_140862F14.c)
 *     sub_1408631AC @ 0x1408631AC (sub_1408631AC.c)
 *     sub_1408639BC @ 0x1408639BC (sub_1408639BC.c)
 *     sub_140864754 @ 0x140864754 (sub_140864754.c)
 *     RxInitializeTopLevelIrpPackage_0 @ 0x140864A98 (RxInitializeTopLevelIrpPackage_0.c)
 *     RxInitializeTopLevelIrpPackage_1 @ 0x140864B3C (RxInitializeTopLevelIrpPackage_1.c)
 *     sub_140864B64 @ 0x140864B64 (sub_140864B64.c)
 *     sub_140865334 @ 0x140865334 (sub_140865334.c)
 *     sub_140865370 @ 0x140865370 (sub_140865370.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140B152D4 @ 0x140B152D4 (sub_140B152D4.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 *     sub_140B16904 @ 0x140B16904 (sub_140B16904.c)
 *     sub_140B16EC8 @ 0x140B16EC8 (sub_140B16EC8.c)
 *     sub_140B16F3C @ 0x140B16F3C (sub_140B16F3C.c)
 *     sub_140B171AC @ 0x140B171AC (sub_140B171AC.c)
 *     sub_140B17304 @ 0x140B17304 (sub_140B17304.c)
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 *     sub_140B268C8 @ 0x140B268C8 (sub_140B268C8.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 *     sub_140B2C540 @ 0x140B2C540 (sub_140B2C540.c)
 *     sub_140B2C7E0 @ 0x140B2C7E0 (sub_140B2C7E0.c)
 *     sub_140B2DE24 @ 0x140B2DE24 (sub_140B2DE24.c)
 *     sub_140B2F008 @ 0x140B2F008 (sub_140B2F008.c)
 *     sub_140B2F824 @ 0x140B2F824 (sub_140B2F824.c)
 *     sub_140B30CA4 @ 0x140B30CA4 (sub_140B30CA4.c)
 *     sub_140B4E014 @ 0x140B4E014 (sub_140B4E014.c)
 *     sub_140B4E100 @ 0x140B4E100 (sub_140B4E100.c)
 *     sub_140B4E160 @ 0x140B4E160 (sub_140B4E160.c)
 */

char __fastcall sub_140B15F88(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rdi
  __int64 v3; // rsi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  ACL *v15; // rdi
  NTSTATUS v16; // eax
  ULONG_PTR v17; // rsi
  NTSTATUS v18; // eax
  ULONG_PTR v19; // rsi
  int v20; // eax
  ULONG_PTR v21; // rsi
  NTSTATUS v22; // eax
  ULONG_PTR v23; // rsi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  ULONG_PTR v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _LOOKASIDE_LIST_EX *v31; // r9
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  int v44[2]; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v47[3]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v48[76]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD BugCheckParameter4[27]; // [rsp+228h] [rbp+120h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v44 = 0LL;
  v46 = 0LL;
  memset(v48, 0, 0x128uLL);
  DestinationString = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(v47, 0, sizeof(v47));
  sub_140347770((__int64)&v46);
  sub_14067FE50((__int64)v48);
  qword_140C49878 = (__int64)&IoFileObjectType;
  if ( byte_140C4E508 )
  {
    byte_140D3B01B = byte_140C4E508;
    byte_140D3B018 = 1;
    byte_140D3B034 = 1;
  }
  if ( dword_140D014E8 )
    byte_140D3B018 = 1;
  sub_140B268C8();
  sub_140B2F008();
  qword_140C49860 = 0LL;
  qword_140D3CC98 = (__int64)&qword_140D3CC90;
  qword_140D3CC90 = (__int64)&qword_140D3CC90;
  qword_140C49858 = 0LL;
  ExInitializeRundownProtection(&stru_140C49420);
  ExInitializeRundownProtection(&stru_140C49430);
  qword_140C49428 = 0LL;
  qword_140C49408 = (__int64)&qword_140C49400;
  qword_140C49400 = (__int64)&qword_140C49400;
  qword_140C49418 = 0LL;
  qword_140C493F8 = 0LL;
  ExInitializeResourceLite((PERESOURCE)&stru_140D31980);
  stru_140C493C0.Count = 1;
  stru_140C493C0.Event.Header.WaitListHead.Blink = &stru_140C493C0.Event.Header.WaitListHead;
  stru_140C493C0.Event.Header.WaitListHead.Flink = &stru_140C493C0.Event.Header.WaitListHead;
  qword_140D3B690 = (__int64)&qword_140D3B688;
  qword_140D3B688 = (__int64)&qword_140D3B688;
  stru_140C493C0.Owner = 0LL;
  stru_140C493C0.Contention = 0;
  LOWORD(stru_140C493C0.Event.Header.Lock) = 1;
  stru_140C493C0.Event.Header.Size = 6;
  stru_140C493C0.Event.Header.SignalState = 0;
  sub_140844BAC();
  sub_140B4E160();
  sub_140865370();
  SecurityDescriptor = sub_140831E08();
  sub_140B2DE24();
  sub_1408631AC();
  sub_1408639BC();
  sub_14085D190();
  sub_140864B64();
  sub_140864754();
  sub_140865334();
  RxInitializeTopLevelIrpPackage_1();
  sub_140B2C7E0();
  RxInitializeTopLevelIrpPackage_0();
  v2 = dword_140C02AFC;
  v3 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v2 - 3));
    *v2 = sub_140718B68((__m128i *)&DestinationString);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  v4 = sub_140B2F824();
  if ( v4 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, v4, 0LL);
  v5 = sub_140862F14();
  if ( v5 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v5, 0LL);
  v6 = sub_140831BF4();
  if ( v6 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v6, 0LL);
  sub_140AB4550((__int64)v47, v7, v8, v9);
  sub_14071B6EC();
  sub_140B16904(BugCheckParameter3, 0LL);
  v10 = sub_14068A7FC(&qword_140D3CA28, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  if ( v10 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, v10, (ULONG_PTR)BugCheckParameter4);
  v11 = sub_14067C560(qword_140D3CA28, 0x80u);
  if ( v11 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v11, 0LL);
  if ( (int)sub_140B15C50(v13, v12) < 0 )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  v14 = sub_140861E5C(0LL);
  if ( v14 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v14, 0LL);
  v15 = sub_140834D0C();
  ObjectAttributes.ObjectName = &stru_140D3CD28;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v16 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&Class, 0, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v17, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &stru_140D3D258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v18 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&Class, 0, 0LL);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v19, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &stru_140D3D278;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v48[0] = 65;
  v20 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v48,
          (__int64)&KeyHandle);
  v21 = v20;
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    sub_14067FE98(v48, 0LL);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v21, 0LL);
  }
  sub_14067FE98(v48, 0LL);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &stru_140D3D268;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v22 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&Class, 0, 0LL);
  v23 = v22;
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v23, 0LL);
  }
  ZwClose(KeyHandle);
  byte_140D3CA8B = 1;
  sub_1403DE020(BugCheckParameter3);
  v24 = sub_140B16904(BugCheckParameter3, 1LL);
  if ( v24 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v24, 0LL);
  v25 = sub_140B2C540(L"SYSTEM", 0LL);
  if ( v25 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, v25, 0LL);
  if ( dword_140D3B120 )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( dword_140D011A8 )
    sub_140B4E100();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v26 = sub_14068A7FC((ULONG_PTR *)v44, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  v27 = v26;
  if ( v26 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v27, (ULONG_PTR)BugCheckParameter4);
  }
  v28 = sub_14067C9E8(
          (__int64)&stru_140D3D218,
          0LL,
          *(__int64 *)v44,
          1,
          dword_140C02558,
          0,
          0LL,
          (__int64)v15,
          0LL,
          0LL,
          1,
          BugCheckParameter4);
  if ( v28 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v28, 0LL);
  sub_1406E36C4(*(__int64 *)v44, v29, v30, v31);
  ExFreePoolWithTag(v15, 0);
  qword_140C02548 = *(_QWORD *)v44;
  v32 = sub_140B171AC(BugCheckParameter3);
  if ( v32 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v32, 0LL);
  v33 = sub_140B2B730(BugCheckParameter3);
  if ( v33 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v33, 0LL);
  v34 = sub_140B30CA4(BugCheckParameter3);
  if ( v34 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, v34, 0LL);
  sub_140B183B4(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  sub_140AB4260();
  sub_140837E20(v35);
  v36 = sub_140B17304(BugCheckParameter3);
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v36, 0LL);
  v37 = sub_140B16F3C(BugCheckParameter3);
  if ( v37 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v37, 0LL);
  sub_140B16EC8();
  ExFreePoolWithTag(::DestinationString.Buffer, 0);
  v38 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v38 >= 0x68u )
  {
    if ( *(_QWORD *)(v38 + 96) )
    {
      v39 = sub_140B4E014();
      if ( v39 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v39, 0LL);
    }
  }
  v40 = sub_140B152D4();
  if ( v40 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v40, 0LL);
  sub_140AB4580((__int64)v47);
  sub_14022EA30((__int64 *)&v46);
  return 1;
}

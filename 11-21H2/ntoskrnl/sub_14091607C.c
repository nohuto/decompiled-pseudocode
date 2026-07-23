/*
 * XREFs of sub_14091607C @ 0x14091607C
 * Callers:
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 * Callees:
 *     sub_14023BD7C @ 0x14023BD7C (sub_14023BD7C.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_1406B6880 @ 0x1406B6880 (sub_1406B6880.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 *     sub_140917400 @ 0x140917400 (sub_140917400.c)
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 *     sub_140918574 @ 0x140918574 (sub_140918574.c)
 *     sub_1409188E8 @ 0x1409188E8 (sub_1409188E8.c)
 *     sub_1409C6B8C @ 0x1409C6B8C (sub_1409C6B8C.c)
 *     sub_140AB4008 @ 0x140AB4008 (sub_140AB4008.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_14091607C(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r9d
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  BOOLEAN v33; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+41h] [rbp-BFh] BYREF
  char v35; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v39; // [rsp+68h] [rbp-98h]
  _LIST_ENTRY ListHead; // [rsp+70h] [rbp-90h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  __int128 v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  _OWORD v44[19]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v45[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v46[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v47[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v37 = 0LL;
  v35 = a2;
  v39 = a1;
  v33 = 0;
  v34 = 0;
  DestinationString = 0LL;
  memset(v45, 0, sizeof(v45));
  ListHead = 0LL;
  memset(v46, 0, sizeof(v46));
  memset(v47, 0, sizeof(v47));
  v41 = 0LL;
  *(_QWORD *)&v43 = 0LL;
  v7 = 0;
  v42 = 0LL;
  DWORD2(v43) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v44, 0, 0x128uLL);
  LODWORD(v44[6]) = -1;
  *((_QWORD *)&v44[9] + 1) = &v44[9];
  *(_QWORD *)&v44[9] = &v44[9];
  memset((char *)&v44[13] + 8, 0, 0x50uLL);
  v38 = 0LL;
  InitializeListHead(&ListHead);
  sub_140AB4550(v45);
  while ( 1 )
  {
    if ( v7 )
      sub_14071B6EC();
    else
      sub_140AB4370(v10, v9, v11);
    v12 = v8[1];
    sub_1407C0854(v12);
    if ( !sub_14023BD7C() )
    {
LABEL_27:
      v14 = -1073741790;
      goto LABEL_28;
    }
    v14 = sub_140AB43C0(v8, 0LL);
    if ( v14 < 0 )
      goto LABEL_28;
    if ( (unsigned __int8)sub_140917400(v12, v13, a4, &DestinationString) )
    {
      sub_140AB4300(v12);
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v12 + 184) & 0x20) != 0 )
      goto LABEL_27;
    v14 = sub_1406B6880(a3, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v12 + 88) + 32LL), a4, &v33);
    if ( v14 < 0 )
      goto LABEL_28;
    if ( !v33 )
      goto LABEL_27;
    LOBYTE(v15) = v7;
    v16 = sub_1409174A4(v12, a4, v15, &v37);
    v14 = v16;
    if ( v16 != -1073741739 )
      break;
    sub_140AB4300(v12);
    sub_140AB4260(v18, v17, v19, v20);
    v7 = 1;
  }
  if ( v16 < 0 )
    goto LABEL_28;
  v14 = sub_140918574(*(_QWORD *)(v12 + 88) + 32LL, a4, &v34);
  if ( v14 < 0 )
    goto LABEL_28;
  if ( v34 )
  {
    v14 = sub_1409188E8(v12, a4);
    if ( v14 < 0 )
      goto LABEL_28;
  }
  if ( !(unsigned __int8)sub_140917400(v12, v21, a4, &DestinationString) )
  {
    v14 = -1073741670;
LABEL_28:
    sub_140AB4300(v12);
    sub_140AB4260(v29, v28, v30, v31);
    goto LABEL_29;
  }
  sub_140AB4300(v12);
  sub_140915544((__int64)sub_1409176B0, v37, (__int64)&ListHead, 0LL, 1);
LABEL_21:
  sub_140346C60(&ListHead);
  sub_140AB4260(v23, v22, v24, v25);
  LODWORD(v44[0]) = 8;
  *((_QWORD *)&v44[4] + 1) = v8[7];
  v14 = sub_1409C6B8C(a4, (unsigned int)v46, (unsigned int)v47, a3, (__int64)CmKeyObjectType + 76);
  if ( v14 >= 0 )
  {
    *((_QWORD *)&v41 + 1) = 0LL;
    v27 = 1600;
    LODWORD(v41) = 48;
    if ( v35 != 1 )
      v27 = 576;
    DWORD2(v42) = v27;
    *(_QWORD *)&v42 = &DestinationString;
    v43 = 0LL;
    v14 = sub_140AB4008((unsigned int)&v41, (unsigned int)v46, a3, v26, 0, (__int64)v44, (__int64)&v38);
    if ( v14 >= 0 )
    {
      *v39 = v38;
      ObfDereferenceObject(v8);
      v14 = 0;
    }
    sub_1403478A0((__int64)v46);
    SeReleaseSubjectContext(&v46[1]);
  }
LABEL_29:
  sub_14067FE98(v44, 0LL);
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  sub_140AB4580(v45);
  return (unsigned int)v14;
}

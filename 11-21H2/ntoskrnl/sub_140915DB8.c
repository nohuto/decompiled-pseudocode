/*
 * XREFs of sub_140915DB8 @ 0x140915DB8
 * Callers:
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 * Callees:
 *     sub_14023BD7C @ 0x14023BD7C (sub_14023BD7C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140917400 @ 0x140917400 (sub_140917400.c)
 *     sub_1409C6B8C @ 0x1409C6B8C (sub_1409C6B8C.c)
 *     sub_140AB4008 @ 0x140AB4008 (sub_140AB4008.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_140915DB8(__int64 *a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r9d
  int v26; // eax
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+7Ch] [rbp-84h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  _OWORD v36[19]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v37[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v38[5]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v39[224]; // [rsp+290h] [rbp+190h] BYREF

  DestinationString = 0LL;
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v30[1] = 0;
  v34 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v37, 0, sizeof(v37));
  memset(v36, 0, 0x128uLL);
  LODWORD(v36[6]) = -1;
  *((_QWORD *)&v36[9] + 1) = &v36[9];
  *(_QWORD *)&v36[9] = &v36[9];
  memset((char *)&v36[13] + 8, 0, 0x50uLL);
  v8 = *a1;
  v28 = 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_WORD *)(v9 + 66)
    || (*(_DWORD *)(v8 + 48) & 0x10) != 0
    || !sub_14023BD7C()
    || (v11 = *(_DWORD *)(v9 + 184), (v11 & 0x800000) == 0)
    || (v11 & 0x20) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_12;
  }
  sub_140AB4550(v37);
  sub_140AB4370(v13, v12, v14);
  sub_140AB42D0(v9);
  v10 = sub_140AB43C0(v8, 0LL);
  if ( v10 >= 0 )
  {
    if ( (unsigned __int8)sub_140917400(v9, v15, a4, &DestinationString) )
    {
      sub_140AB4300(*(_QWORD *)(*a1 + 8));
      sub_140AB4260(v22, v21, v23, v24);
      LODWORD(v36[1]) = *a5;
      LODWORD(v36[0]) = 8;
      *((_QWORD *)&v36[4] + 1) = *(_QWORD *)(v8 + 56);
      v10 = sub_1409C6B8C(a4, (unsigned int)v38, (unsigned int)v39, a3, (__int64)CmKeyObjectType + 76);
      if ( v10 >= 0 )
      {
        v31 = 0LL;
        v26 = 1600;
        v30[0] = 48;
        if ( a2 != 1 )
          v26 = 576;
        v33 = v26;
        p_DestinationString = &DestinationString;
        v35 = 0LL;
        if ( (int)sub_140AB4008((unsigned int)v30, (unsigned int)v38, a3, v25, 0, (__int64)v36, (__int64)&v28) >= 0 )
        {
          *a1 = v28;
          ObfDereferenceObject((PVOID)v8);
          v10 = 0;
        }
        else
        {
          v10 = -1073741790;
        }
        sub_1403478A0((__int64)v38);
        SeReleaseSubjectContext(&v38[1]);
      }
      goto LABEL_11;
    }
    v10 = -1073741790;
  }
  sub_140AB4300(v9);
  sub_140AB4260(v17, v16, v18, v19);
LABEL_11:
  sub_140AB4580(v37);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  sub_14067FE98(v36, 0LL);
  return (unsigned int)v10;
}

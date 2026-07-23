/*
 * XREFs of sub_1407655BC @ 0x1407655BC
 * Callers:
 *     sub_14076C3C0 @ 0x14076C3C0 (sub_14076C3C0.c)
 *     sub_1409404FC @ 0x1409404FC (sub_1409404FC.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1402DEADC @ 0x1402DEADC (sub_1402DEADC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A55B8 @ 0x1403A55B8 (sub_1403A55B8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406602DC @ 0x1406602DC (sub_1406602DC.c)
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_1406EAC14 @ 0x1406EAC14 (sub_1406EAC14.c)
 *     sub_140762AEC @ 0x140762AEC (sub_140762AEC.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_1407654EC @ 0x1407654EC (sub_1407654EC.c)
 *     sub_14076550C @ 0x14076550C (sub_14076550C.c)
 *     sub_14076556C @ 0x14076556C (sub_14076556C.c)
 *     sub_140765A28 @ 0x140765A28 (sub_140765A28.c)
 *     sub_140765BA8 @ 0x140765BA8 (sub_140765BA8.c)
 *     sub_140765C60 @ 0x140765C60 (sub_140765C60.c)
 *     sub_140766100 @ 0x140766100 (sub_140766100.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_1407663DC @ 0x1407663DC (sub_1407663DC.c)
 *     sub_14076651C @ 0x14076651C (sub_14076651C.c)
 *     sub_140766640 @ 0x140766640 (sub_140766640.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_1407676B0 @ 0x1407676B0 (sub_1407676B0.c)
 *     sub_140767F88 @ 0x140767F88 (sub_140767F88.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_140810C28 @ 0x140810C28 (sub_140810C28.c)
 *     sub_140810F90 @ 0x140810F90 (sub_140810F90.c)
 *     sub_140811518 @ 0x140811518 (sub_140811518.c)
 *     sub_140811574 @ 0x140811574 (sub_140811574.c)
 *     sub_140945A9C @ 0x140945A9C (sub_140945A9C.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 *     sub_14094FB70 @ 0x14094FB70 (sub_14094FB70.c)
 *     sub_14094FBA0 @ 0x14094FBA0 (sub_14094FBA0.c)
 *     sub_14094FE24 @ 0x14094FE24 (sub_14094FE24.c)
 *     sub_14094FF34 @ 0x14094FF34 (sub_14094FF34.c)
 *     sub_140950530 @ 0x140950530 (sub_140950530.c)
 *     sub_140950DA4 @ 0x140950DA4 (sub_140950DA4.c)
 *     sub_1409585A4 @ 0x1409585A4 (sub_1409585A4.c)
 *     sub_1409587F0 @ 0x1409587F0 (sub_1409587F0.c)
 *     sub_14095E428 @ 0x14095E428 (sub_14095E428.c)
 *     sub_14095E4BC @ 0x14095E4BC (sub_14095E4BC.c)
 *     sub_14098943C @ 0x14098943C (sub_14098943C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407655BC(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  PVOID *v3; // r12
  struct _DEVICE_OBJECT *v4; // r14
  unsigned int v5; // esi
  __int64 DeviceNode; // r15
  unsigned int v7; // eax
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rax
  PVOID v11; // r14
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // r8
  int v20; // r9d
  PDEVICE_OBJECT v21; // rbx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  char v28; // al
  unsigned int *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rbx
  _QWORD *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  _DWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rbx
  __int64 v50; // rdx
  int v51; // eax
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  PVOID v53; // [rsp+48h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp-29h] BYREF
  PVOID v55; // [rsp+58h] [rbp-21h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-19h]
  __int64 v57; // [rsp+68h] [rbp-11h] BYREF
  __int64 v58; // [rsp+70h] [rbp-9h] BYREF
  PVOID v59; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  char v62; // [rsp+E0h] [rbp+67h]
  char v63; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG_PTR v64; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v65; // [rsp+F8h] [rbp+7Fh] BYREF
  int v66; // [rsp+FCh] [rbp+83h]

  v1 = *a1;
  SourceString = 0LL;
  v2 = 0LL;
  v57 = 0LL;
  v3 = 0LL;
  v4 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v53 = 0LL;
  v5 = 7;
  v65 = 0;
  v63 = 0;
  v58 = 0LL;
  v55 = 0LL;
  LOBYTE(v64) = 0;
  P = 0LL;
  v59 = 0LL;
  DeviceObject = v4;
  DestinationString = 0LL;
  if ( v4 )
    DeviceNode = (__int64)v4->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  sub_14077572C(1LL);
  if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 789) <= 1 )
  {
    v9 = -1073741738;
    goto LABEL_42;
  }
  v7 = sub_140765BA8(v1);
  v5 = v7;
  if ( v7 != 4 )
  {
    LOBYTE(v8) = 1;
    sub_140765A28(v1, v7, 0LL, v8);
  }
  v9 = sub_14076556C(v5, v1);
  if ( v9 < 0 )
  {
LABEL_42:
    sub_140775698(1LL);
    if ( v9 == -1073741738 )
      goto LABEL_56;
    goto LABEL_43;
  }
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(DeviceNode + 396) & 0x80000) != 0 )
    {
LABEL_41:
      v9 = 0;
      goto LABEL_42;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 568) - 3) <= 1 )
    {
      v28 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(DeviceNode + 560) & 0x10) == 0 )
      {
        v9 = -2147483608;
        v26 = DeviceNode + 40;
        v27 = 8LL;
        goto LABEL_63;
      }
      v28 = 1;
    }
    v9 = 0;
    if ( !v28 )
      goto LABEL_42;
  }
  if ( !v5 && !(unsigned int)sub_1402DEADC(DeviceNode) )
  {
    v9 = sub_1406602DC(v1);
    goto LABEL_42;
  }
  v10 = sub_1407676B0(v5);
  v3 = (PVOID *)v10;
  if ( !v10 )
    goto LABEL_69;
  if ( (int)sub_140767F88(v4, v5, v10, &v55) < 0 )
    goto LABEL_71;
  v11 = v55;
  v9 = sub_1407663DC((_DWORD)v55, v5, v1, (unsigned int)&v65, (__int64)&v53, (__int64)&v63, (__int64)&v64);
  if ( v9 < 0 )
    goto LABEL_128;
  v12 = sub_140766100(a1, v5);
  v1 = *a1;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_128;
  LOBYTE(v13) = sub_1407654EC(v5);
  v9 = sub_140766640(v14, v11, v13, &P);
  if ( v5 == 3 )
    sub_140810F90(v16, v11, &v59);
  if ( v9 < 0 )
  {
LABEL_128:
    sub_140767600(v11);
    if ( v9 == -2147483608 )
      goto LABEL_42;
    v26 = 0LL;
    v27 = 0LL;
LABEL_63:
    sub_140950530(v1, v27, v26);
    goto LABEL_42;
  }
  if ( v63 )
  {
    LOBYTE(v16) = v64;
    sub_14094FB70(v16);
    v32 = (int)(v65 - 1);
    if ( (int)(v65 - 1) >= 0 )
    {
      v33 = v53;
      do
      {
        v34 = v33[v32];
        if ( v34 )
          v35 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
        else
          v35 = 0LL;
        if ( *(_DWORD *)(v35 + 568) == 1 )
          sub_14094FE24(v35, 3LL);
        --v32;
      }
      while ( v32 >= 0 );
      v11 = v55;
    }
    if ( v5 == 4 )
    {
      if ( (int)sub_140762AEC((PVOID *)&SourceString, v3) >= 0 && *(_DWORD *)v3 )
      {
        sub_14094FBA0();
        sub_140767600(v11);
        v37 = *(_DWORD **)(v1 + 48);
        if ( v37 )
          *v37 = *(_DWORD *)v3;
        if ( *(_QWORD *)(v1 + 56) )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
        }
        ExFreePoolWithTag((PVOID)SourceString, 0);
        SourceString = 0LL;
        goto LABEL_76;
      }
      LOBYTE(v36) = v64;
      if ( (int)sub_14094FF34(v36, 0LL, v3, v3 + 1) >= 0 )
      {
LABEL_95:
        LOBYTE(v15) = 1;
        sub_140950DA4(v11, v15);
        v9 = sub_14095E4BC(v5, v1, (_DWORD)v11, v65, (__int64)v53, (__int64)v3, (__int64)&P);
        if ( v9 < 0 )
        {
          if ( v63 )
            sub_14094FBA0();
          sub_140950DA4(v11, 0LL);
          sub_140767600(v11);
          goto LABEL_42;
        }
        goto LABEL_20;
      }
      sub_14094FBA0();
      sub_140767600(v11);
LABEL_71:
      v30 = *(unsigned int *)v3;
      v29 = (unsigned int *)(v3 + 1);
      goto LABEL_72;
    }
  }
  if ( (v5 & 0xFFFFFFFB) == 0 )
    goto LABEL_95;
  if ( ((v5 - 3) & 0xFFFFFFFD) != 0 )
  {
LABEL_24:
    sub_140765C60(v1, P, &qword_140010CB8, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  sub_140811518(v1, v5, v11);
  sub_14076651C((int)DeviceObject, (int)v11, 3, 0, 0, 0, 0LL, 0LL);
LABEL_20:
  if ( v5 != 3 )
    goto LABEL_24;
  v17 = v59;
  if ( v59 )
  {
    sub_140765C60(v1, v59, qword_14000E4E0, 0LL, 0LL, 0LL);
    ExFreePoolWithTag(v17, 0x4B706E50u);
  }
  sub_140765C60(v1, P, &xmmword_140010CF8, 0LL, 0LL, 0LL);
LABEL_25:
  v18 = v53;
  sub_14076550C((_QWORD **)v53, v65);
  if ( (*(_DWORD *)(DeviceNode + 704) & 0x8000) != 0 && (*(_DWORD *)(DeviceNode + 396) & 0x10) != 0 )
    sub_140945A9C(DeviceNode, v11);
  if ( ((v5 - 2) & 0xFFFFFFFC) == 0 && v5 != 4 )
  {
    LOBYTE(v19) = 1;
    sub_14080E8D0(v11, v5, v19, 0LL);
    sub_140811574(v11);
    if ( ((v5 - 3) & 0xFFFFFFFD) == 0 )
    {
      sub_140810C28(v1, v5, &v55);
      sub_140775698(1LL);
      sub_1403A55B8(v18, v65, 0, 1u, 0LL);
      v9 = 0;
LABEL_43:
      if ( v5 != 4 )
      {
        if ( !v3 )
        {
          sub_140765A28(v1, v5, 0LL, 0LL);
          goto LABEL_48;
        }
        sub_140765A28(v1, v5, v3, 0LL);
        goto LABEL_46;
      }
LABEL_56:
      if ( !v3 )
        goto LABEL_48;
      goto LABEL_46;
    }
  }
  v21 = DeviceObject;
  if ( *(_DWORD *)(DeviceNode + 568) )
  {
    sub_1409587F0(DeviceObject, &v57);
    v2 = v57;
    if ( v57 )
      sub_14042A5E0(*(_QWORD *)(v57 + 8), 3LL);
  }
  if ( v5 )
  {
    if ( v5 != 4 )
    {
      LOBYTE(v20) = 0;
      goto LABEL_34;
    }
  }
  else
  {
    sub_14076FB70(DeviceNode, 0x2000000LL);
  }
  LOBYTE(v20) = 1;
LABEL_34:
  sub_14076651C((int)v21, (int)v11, 2, v20, *(_DWORD *)(v1 + 16), *(_DWORD *)(v1 + 20), 0LL, 0LL);
  v22 = *(_DWORD *)(DeviceNode + 560) >> 3;
  LOBYTE(v22) = (*(_DWORD *)(DeviceNode + 560) & 8) != 0;
  v23 = HIWORD(*(_DWORD *)(DeviceNode + 560)) & 1;
  LODWORD(v64) = v22;
  v62 = v23;
  if ( v5 != 4 )
  {
    sub_1406EAC14(v1, (int)v11, (__int64)v21);
    sub_140766258(v24, v11);
    if ( !v5 )
      sub_140950DA4(v11, 0LL);
    sub_140767600(v11);
    if ( v5 == 2 )
    {
      sub_140765C60(v1, P, &xmmword_140010CF8, 0LL, 0LL, 0LL);
    }
    else if ( !v5
           && (*(_DWORD *)(v1 + 144) & 2) == 0
           && (*(_DWORD *)(DeviceNode + 396) & 0x2000) != 0
           && *(_DWORD *)(DeviceNode + 404) == 18 )
    {
      sub_140764FE4(DeviceNode);
      sub_14066044C(DeviceNode);
      sub_1402DCF44(*(PVOID *)(DeviceNode + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_39;
  }
  if ( !(_BYTE)v22 && !v23 )
  {
    sub_140766258(v22, v11);
    sub_140950DA4(v11, 0LL);
    sub_140767600(v11);
LABEL_39:
    if ( v2 )
    {
      sub_14042A5E0(*(_QWORD *)(v2 + 8), 1LL);
      sub_14042A5E0(*(_QWORD *)(v2 + 8), v38);
    }
    goto LABEL_41;
  }
  v66 = 0;
  v65 = 1;
  while ( (unsigned __int8)sub_1407667B0((_DWORD)v11, (unsigned int)&v65, (unsigned int)&v58, 0, 0LL) )
  {
    if ( v58 )
    {
      v39 = *(_QWORD *)(v58 + 312);
      v40 = *(_QWORD *)(v39 + 40);
      if ( v40 )
      {
        sub_14076FB70(*(_QWORD *)(v39 + 40), 0x80000LL);
        v41 = *(_QWORD *)(v40 + 696);
        v57 = v41;
        if ( v41 )
        {
          sub_140767600(*(PVOID *)(v41 + 64));
          *(_QWORD *)(v57 + 64) = 0LL;
          *(_QWORD *)(v40 + 696) = 0LL;
        }
      }
    }
  }
  sub_140766258(v42, v11);
  LOBYTE(v43) = v63;
  v44 = sub_14095E428(v1, v11, v43, v2);
  v49 = (_QWORD *)v44;
  if ( !v44 )
  {
    if ( v2 )
    {
      sub_14042A5E0(*(_QWORD *)(v2 + 8), 1LL);
      sub_14042A5E0(*(_QWORD *)(v2 + 8), v50);
    }
    if ( v63 )
      sub_14094FBA0();
    LOBYTE(v48) = 1;
    sub_14080E8D0(v11, 4LL, 0LL, v48);
    sub_140950DA4(v11, 0LL);
    sub_140767600(v11);
LABEL_69:
    v29 = 0LL;
    v30 = 0LL;
LABEL_72:
    sub_140950530(v1, v30, v29);
LABEL_76:
    v9 = -2147483608;
    goto LABEL_42;
  }
  LOBYTE(v47) = v62;
  LOBYTE(v45) = v64;
  LOBYTE(v46) = v63;
  *(_QWORD *)(DeviceNode + 696) = v44;
  v51 = sub_14098943C(v46, v45, v47, v44 + 92);
  if ( v51 < 0 )
  {
    v31 = 0LL;
    if ( v51 == -1073741090 )
      v31 = 9LL;
    sub_140950530(v1, v31, 0LL);
    v49[6] = 0LL;
    *((_BYTE *)v49 + 89) = 0;
    v49[1] = v49;
    *v49 = v49;
    sub_140947450(v49);
    goto LABEL_76;
  }
  sub_140775698(1LL);
  sub_1409585A4(DeviceObject);
  v9 = 259;
LABEL_46:
  if ( !stru_140C46280.Header.SignalState )
  {
    ExFreePoolWithTag(v3[2], 0x4D706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
LABEL_48:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v53 )
    ExFreePoolWithTag(v53, 0);
  return (unsigned int)v9;
}

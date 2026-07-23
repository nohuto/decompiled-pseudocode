/*
 * XREFs of PoFxRegisterDevice @ 0x140823470
 * Callers:
 *     sub_1406197A0 @ 0x1406197A0 (sub_1406197A0.c)
 * Callees:
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 *     sub_1408245C4 @ 0x1408245C4 (sub_1408245C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterDevice(PDEVICE_OBJECT DeviceObject, int *a2, __int64 a3)
{
  int *v3; // r14
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdi
  void *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // r12
  int v13; // edi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp-29h]
  __int64 v19; // [rsp+58h] [rbp-21h]
  __int64 v20; // [rsp+60h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-11h]
  __int64 v22; // [rsp+70h] [rbp-9h]
  __int64 *v23; // [rsp+F0h] [rbp+77h]
  __int64 v24; // [rsp+F8h] [rbp+7Fh]

  v23 = (__int64 *)a3;
  v3 = 0LL;
  if ( !DeviceObject )
    return (unsigned int)-1073741811;
  v6 = *a2;
  v7 = 0LL;
  v8 = 0LL;
  if ( *a2 == 1 )
  {
    sub_140369B48(1LL, (__int64)"Device using PO_FX_VERSION_V1: devobj 0x%p", DeviceObject);
    sub_140369B48(1LL, (__int64)" - Driver: \"%wZ\"", &DeviceObject->DriverObject->DriverName);
    sub_140369B48(1LL, (__int64)qword_14086CCB0);
    v24 = *((_QWORD *)a2 + 7);
    v18 = *((_QWORD *)a2 + 1);
    v19 = *((_QWORD *)a2 + 2);
    v20 = *((_QWORD *)a2 + 3);
    v21 = *((_QWORD *)a2 + 4);
    v22 = *((_QWORD *)a2 + 5);
    v9 = (void *)sub_1408245C4(a2 + 16);
    v10 = 0LL;
    a3 = (__int64)v23;
    v11 = v24;
    goto LABEL_4;
  }
  if ( v6 == 2 )
  {
    v9 = a2 + 20;
    v11 = *((_QWORD *)a2 + 8);
    v18 = *((_QWORD *)a2 + 2);
    v19 = *((_QWORD *)a2 + 3);
    v20 = *((_QWORD *)a2 + 4);
    v21 = *((_QWORD *)a2 + 5);
    v22 = *((_QWORD *)a2 + 6);
    goto LABEL_15;
  }
  if ( v6 != 3 )
    return (unsigned int)-1073741811;
  v9 = a2 + 26;
  v7 = *((_QWORD *)a2 + 8);
  v3 = a2;
  v8 = *((_QWORD *)a2 + 9);
  v18 = *((_QWORD *)a2 + 2);
  v19 = *((_QWORD *)a2 + 3);
  v20 = *((_QWORD *)a2 + 4);
  v21 = *((_QWORD *)a2 + 5);
  v22 = *((_QWORD *)a2 + 6);
  v11 = *((_QWORD *)a2 + 11);
LABEL_15:
  v10 = *((_QWORD *)a2 + 1);
LABEL_4:
  v12 = 0;
  if ( v7 )
  {
    if ( v8 )
    {
      v12 = 1;
      goto LABEL_6;
    }
  }
  else if ( !v8 )
  {
LABEL_6:
    v13 = sub_1408236BC(DeviceObject, v11, v10, a3);
    if ( v13 >= 0 && v12 )
    {
      v15 = v3[20];
      v16 = *v23;
      if ( v15 == -1 )
      {
        *(_DWORD *)(v16 + 912) = 0;
      }
      else
      {
        if ( !v15 )
          v15 = dword_140C0C7F0;
        *(_DWORD *)(v16 + 912) = v15;
      }
      v17 = *((_QWORD *)v3 + 1);
      if ( (v17 & 2) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x200u);
        v17 = *((_QWORD *)v3 + 1);
      }
      if ( (v17 & 4) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x400u);
      _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x20u);
      if ( !v18 && !v19 && !v20 && !v21 && !v22 )
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 1u);
    }
    goto LABEL_8;
  }
  v13 = -1073741811;
LABEL_8:
  if ( v9 && *a2 == 1 )
    ExFreePoolWithTag(v9, 0x4D584650u);
  return (unsigned int)v13;
}

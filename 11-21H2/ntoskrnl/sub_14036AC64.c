/*
 * XREFs of sub_14036AC64 @ 0x14036AC64
 * Callers:
 *     sub_14036AAF4 @ 0x14036AAF4 (sub_14036AAF4.c)
 *     sub_14036ABA8 @ 0x14036ABA8 (sub_14036ABA8.c)
 *     sub_1407EFFBC @ 0x1407EFFBC (sub_1407EFFBC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14036BF44 @ 0x14036BF44 (sub_14036BF44.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 */

__int64 __fastcall sub_14036AC64(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v7; // rsi
  char v8; // r8
  unsigned __int16 *v9; // r12
  char *v10; // r14
  char v11; // di
  unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  char *v14; // rdx
  char *i; // rax
  char *v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int16 *DeviceNode; // rcx
  __int64 v20; // rcx
  struct _DEVICE_OBJECT *v21; // rax
  struct _DEVICE_OBJECT *v22; // rbp
  ULONG v23; // ecx
  __int64 v24; // rcx
  NTSTATUS DeviceProperty; // eax
  __int64 v26; // rdx
  char v27; // [rsp+70h] [rbp+8h]
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = *a3;
  v27 = 0;
  ResultLength = 0;
  v7 = 40LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v10 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( v11 )
    {
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1088LL);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
    }
    v12 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1472LL);
    v13 = *v12;
    v14 = (char *)*((_QWORD *)v12 + 1);
    ResultLength = *v12;
    if ( a4 )
    {
      for ( i = &v14[2 * ((unsigned __int64)(unsigned int)v13 >> 1)]; i != v14 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v14 )
      {
        v16 = i + 2;
        v13 = (unsigned int)((_DWORD)v14 - (_DWORD)v16 + v13);
        v14 = v16;
        ResultLength = v13;
      }
    }
    v17 = (unsigned int)v13;
    v7 = v13 + 42;
    if ( !v11 || v4 < v7 )
    {
      *a3 = v7;
      return 3221225507LL;
    }
    v11 = 1;
    memmove(v10, v14, (unsigned int)v13);
    *(_WORD *)&v10[2 * (v17 >> 1)] = 0;
    *(_QWORD *)(a2 + 16) = &v10[-a2];
    goto LABEL_20;
  }
  v20 = *(_QWORD *)(a1 + 8);
  if ( v20 )
  {
    v21 = (struct _DEVICE_OBJECT *)sub_14036B86C(v20, 1732538192LL);
    v22 = v21;
    if ( !v21 )
    {
LABEL_20:
      v8 = 0;
      goto LABEL_23;
    }
    if ( !v21->DeviceObjectExtension->DeviceNode )
      goto LABEL_29;
    if ( v11 )
    {
      DeviceProperty = IoGetDeviceProperty(v21, DevicePropertyDeviceDescription, v4 - 40, v10, &ResultLength);
    }
    else
    {
      DeviceProperty = IoGetDeviceProperty(v21, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
      if ( DeviceProperty == -1073741789 )
        DeviceProperty = 0;
    }
    if ( DeviceProperty < 0 )
    {
LABEL_29:
      v23 = v22->DriverObject->DriverName.Length + 2;
      ResultLength = v23;
      if ( v11 && v4 >= (unsigned __int64)v23 + 40 )
      {
        v11 = 1;
        sub_14036BF44(v10, v23);
      }
      else
      {
        v11 = 0;
      }
    }
    v24 = ResultLength;
    v7 = ResultLength + 40LL;
    if ( v11 )
    {
      v27 = 1;
      *(_QWORD *)(a2 + 16) = &v10[-a2];
      v10 += v24;
    }
    DeviceNode = (unsigned __int16 *)v22->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      v9 = DeviceNode + 20;
      v26 = (unsigned int)DeviceNode[20] + 2;
      v7 += v26;
      ResultLength = DeviceNode[20] + 2;
      if ( v11 && v4 >= v7 )
      {
        v11 = 1;
        sub_14036BF44(v10, v26);
        *(_QWORD *)(a2 + 24) = &v10[-a2];
      }
      else
      {
        v11 = 0;
      }
    }
    ObfDereferenceObjectWithTag(v22, 0x67446F50u);
    v8 = v27;
  }
LABEL_23:
  *a3 = v7;
  if ( !v11 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v8 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v9 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}

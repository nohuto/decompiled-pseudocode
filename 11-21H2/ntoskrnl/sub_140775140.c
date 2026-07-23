/*
 * XREFs of sub_140775140 @ 0x140775140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402DE7E4 @ 0x1402DE7E4 (sub_1402DE7E4.c)
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_140773B90 @ 0x140773B90 (sub_140773B90.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_1407F1CDC @ 0x1407F1CDC (sub_1407F1CDC.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 *     sub_1409590D0 @ 0x1409590D0 (sub_1409590D0.c)
 */

__int64 __fastcall sub_140775140(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  struct _DEVICE_OBJECT *v8; // r13
  __int64 DeviceNode; // rsi
  unsigned int *v10; // rdi
  unsigned int v11; // r14d
  unsigned __int16 *v12; // r15
  __int64 v13; // rdx
  int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  DEVICE_REGISTRY_PROPERTY v22; // edx
  NTSTATUS DeviceProperty; // eax
  char v24; // di
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // edx
  unsigned int v33; // edx
  int ResultLength; // [rsp+20h] [rbp-40h]
  PVOID PropertyBuffer; // [rsp+40h] [rbp-20h] BYREF
  __int128 v36; // [rsp+48h] [rbp-18h] BYREF
  int v37; // [rsp+A8h] [rbp+48h] BYREF
  char v38; // [rsp+B8h] [rbp+58h]

  v38 = a4;
  v4 = *a2;
  v37 = 0;
  PropertyBuffer = 0LL;
  v36 = 0LL;
  WORD1(v36) = v4;
  LOWORD(v36) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = sub_14077C610((char *)&v36 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    sub_14077572C(0LL);
    v8 = (struct _DEVICE_OBJECT *)sub_140779C10(&v36, 1131441744LL);
    sub_1402DF554(a4, *((void **)&v36 + 1));
    if ( !v8 || (DeviceNode = (__int64)v8->DeviceObjectExtension->DeviceNode) == 0 )
    {
      v14 = -1073741810;
      goto LABEL_33;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 789) <= 1 )
    {
      v14 = -1073741738;
      goto LABEL_33;
    }
    v10 = (unsigned int *)(a2 + 16);
    v11 = *((_DWORD *)a2 + 8);
    v12 = a2 + 12;
    v14 = sub_1402DE7E4((__int64 *)&PropertyBuffer, v11, a4, *((_QWORD *)a2 + 3));
    if ( v14 < 0 )
    {
LABEL_33:
      v24 = v38;
LABEL_23:
      sub_140775698(0LL);
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x43706E50u);
      sub_1402DF554(v24, PropertyBuffer);
      return (unsigned int)v14;
    }
    v15 = *((_DWORD *)a2 + 4);
    if ( v15 > 8 )
    {
      v26 = v15 - 10;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
          v22 = DevicePropertyInstallState;
          goto LABEL_17;
        }
        v28 = v27 - 2;
        if ( !v28 )
        {
          *v10 = 4;
          if ( v11 >= 4 )
          {
            v14 = 0;
            *(_DWORD *)PropertyBuffer = *(_DWORD *)(DeviceNode + 684);
LABEL_21:
            v24 = v38;
            LOBYTE(ResultLength) = v38;
            v25 = sub_14077C610(v12, PropertyBuffer, v11, 1LL, ResultLength, 0);
            if ( v25 < 0 )
              v14 = v25;
            goto LABEL_23;
          }
          v14 = -1073741789;
          goto LABEL_33;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          DeviceProperty = sub_1407F1CDC(DeviceNode, v11, PropertyBuffer, a2 + 16);
          goto LABEL_18;
        }
        v31 = v29 - 1;
        if ( v31 )
        {
          if ( v31 != 1 )
            goto LABEL_54;
          v32 = 1;
        }
        else
        {
          v32 = 0;
        }
        v14 = sub_140942E94(DeviceNode, v32, (_DWORD)PropertyBuffer, v11 >> 1, (__int64)(a2 + 16));
        v33 = 2 * *v10;
        *v10 = v33;
        if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
          goto LABEL_33;
        if ( v33 <= 2 )
        {
          *v10 = 0;
          v14 = -1073741772;
        }
        goto LABEL_19;
      }
      if ( v11 < 4 )
      {
        v14 = -1073741789;
      }
      else
      {
        sub_140773B90(DeviceNode, 0, (unsigned int *)PropertyBuffer);
        v14 = 0;
      }
      *v10 = 4;
    }
    else
    {
      if ( v15 == 8 )
      {
        v22 = DevicePropertyAddress;
        goto LABEL_17;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v22 = DevicePropertyPhysicalDeviceObjectName;
        goto LABEL_17;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v22 = DevicePropertyBusTypeGuid;
        goto LABEL_17;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v22 = DevicePropertyLegacyBusType;
        goto LABEL_17;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v22 = DevicePropertyBusNumber;
        goto LABEL_17;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          v22 = DevicePropertyRemovalPolicy;
LABEL_17:
          DeviceProperty = IoGetDeviceProperty(v8, v22, v11, PropertyBuffer, (PULONG)a2 + 8);
LABEL_18:
          v14 = DeviceProperty;
          goto LABEL_19;
        }
        if ( v21 == 1 )
        {
          v30 = sub_14077CD90(
                  qword_140D00AC0,
                  *(_QWORD *)(DeviceNode + 48),
                  0,
                  34,
                  (__int64)&v37,
                  (__int64)PropertyBuffer,
                  (__int64)(a2 + 16),
                  0);
          v14 = v30;
          if ( v30 >= 0 )
          {
            if ( v37 == 4 )
              goto LABEL_20;
            v14 = -1073741584;
            goto LABEL_33;
          }
          if ( v30 != -1073741275 )
            goto LABEL_33;
          v14 = -1073741772;
          goto LABEL_19;
        }
LABEL_54:
        v14 = -1073741811;
        goto LABEL_33;
      }
      v14 = sub_1409590D0(DeviceNode, v13, v11, PropertyBuffer, a2 + 16);
      if ( v14 == -2147483643 )
        v14 = -1073741789;
    }
LABEL_19:
    if ( v14 >= 0 )
    {
LABEL_20:
      v12 = a2 + 12;
      goto LABEL_21;
    }
    goto LABEL_33;
  }
  return result;
}

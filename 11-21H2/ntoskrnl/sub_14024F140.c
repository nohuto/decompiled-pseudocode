/*
 * XREFs of sub_14024F140 @ 0x14024F140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall sub_14024F140(void *a1, void *a2, BOOLEAN a3, unsigned __int64 a4)
{
  KPROCESSOR_MODE v6; // r14
  LARGE_INTEGER *v7; // r15
  __int64 v8; // rax
  NTSTATUS v9; // ebx
  PVOID v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rsi
  POBJECT_TYPE *v13; // rcx
  PVOID SystemArgument1; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-30h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h] BYREF

  HandleInformation = 0LL;
  SystemArgument1 = 0LL;
  v18 = 0LL;
  Object = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  v7 = (LARGE_INTEGER *)a4;
  if ( a4 && v6 )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v8 = a4;
    v18 = *(_QWORD *)v8;
    v7 = (LARGE_INTEGER *)&v18;
  }
  v9 = ObReferenceObjectByHandleWithTag(a1, 0, 0LL, v6, 0x7457624Fu, &SystemArgument1, &HandleInformation);
  if ( v9 >= 0 )
  {
    v9 = ObReferenceObjectByHandleWithTag(a2, 0x100000u, 0LL, v6, 0x7457624Fu, &Object, 0LL);
    if ( v9 < 0 )
    {
LABEL_18:
      ObfDereferenceObjectWithTag(SystemArgument1, 0x7457624Fu);
      return (unsigned int)v9;
    }
    v10 = Object;
    v11 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v12 = *(_QWORD *)(v11 + 32);
    if ( (v12 & 1) == 0 )
    {
      if ( v12 < 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( (v12 & 2) != 0 )
    {
      if ( (*(_DWORD *)((_BYTE *)Object + *(unsigned __int16 *)(v11 + 180)) & *(_DWORD *)(v11 + 176)) != *(_DWORD *)(v11 + 176) )
      {
        v12 -= 3LL;
LABEL_10:
        v12 += (__int64)Object;
        goto LABEL_11;
      }
      v12 = *(_QWORD *)((char *)Object + *(unsigned __int16 *)(v11 + 182));
    }
    else
    {
      v12 = *(_QWORD *)((char *)Object + v12 - 1);
    }
LABEL_11:
    if ( qword_140C10D30 != (POBJECT_TYPE)v11 )
    {
      v13 = (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)SystemArgument1
                                                                                                - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)SystemArgument1 - 48) >> 8)];
      v9 = -1073741790;
      if ( v13 == ExEventObjectType )
      {
        if ( v6 && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
          goto LABEL_17;
        KeSetEvent((PRKEVENT)SystemArgument1, 1, 1u);
        goto LABEL_16;
      }
      if ( v13 == (POBJECT_TYPE *)qword_140D05288 )
      {
        KeReleaseMutant((PRKMUTANT)SystemArgument1, 1, 0, 1u);
LABEL_16:
        v9 = KeWaitForSingleObject((PVOID)v12, UserRequest, v6, a3, v7);
LABEL_17:
        ObfDereferenceObjectWithTag(v10, 0x7457624Fu);
        goto LABEL_18;
      }
      if ( v13 == ExSemaphoreObjectType )
      {
        if ( v6 && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
          goto LABEL_17;
        sub_14035AD70(SystemArgument1, 1);
        goto LABEL_16;
      }
    }
    v9 = -1073741788;
    goto LABEL_17;
  }
  return (unsigned int)v9;
}

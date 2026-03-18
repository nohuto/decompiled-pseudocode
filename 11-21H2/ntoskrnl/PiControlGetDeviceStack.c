/*
 * XREFs of PiControlGetDeviceStack @ 0x1407F1CDC
 * Callers:
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14036CCBC (IoGetLowerDeviceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, _WORD *a3, unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // r12d
  _WORD *v6; // r13
  int v7; // ebx
  UNICODE_STRING *v8; // rsi
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  void *AttachedDeviceReferenceWithTag; // rax
  int v11; // r14d
  void *v12; // rdi
  PVOID *Pool2; // rax
  PVOID *v14; // rcx
  PVOID *v15; // rax
  unsigned int v16; // edx
  _WORD *v17; // r15
  __int64 v18; // r12
  unsigned __int16 Length; // di
  _WORD *v20; // r15
  unsigned int v21; // r14d
  PVOID *v22; // rdi
  __int64 v23; // rax
  unsigned int v25; // r8d
  unsigned int v26; // [rsp+30h] [rbp-48h]
  PVOID *v27; // [rsp+38h] [rbp-40h]
  struct _DEVICE_OBJECT *Object; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-28h]
  UNICODE_STRING Src; // [rsp+58h] [rbp-20h] BYREF
  int v32; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+50h]
  _WORD *v34; // [rsp+D0h] [rbp+58h]
  unsigned int *v35; // [rsp+D8h] [rbp+60h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  p_P = &P;
  v32 = 0;
  v5 = a2;
  P = &P;
  v6 = a3;
  v7 = 0;
  Src = 0LL;
  v8 = 0LL;
  DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v4, 0x43706E50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v7 = -1073741808;
    goto LABEL_27;
  }
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceAttachmentBaseRefWithTag, 0x43706E50u);
  v11 = 0;
  while ( 1 )
  {
    v12 = AttachedDeviceReferenceWithTag;
    if ( !AttachedDeviceReferenceWithTag )
      break;
    Pool2 = (PVOID *)ExAllocatePool2(256LL, 24LL, 1198550608LL);
    if ( !Pool2 )
    {
      ObfDereferenceObjectWithTag(v12, 0x43706E50u);
      v7 = -1073741670;
      goto LABEL_27;
    }
    Pool2[2] = v12;
    v14 = p_P;
    if ( *p_P != &P )
LABEL_34:
      __fastfail(3u);
    Pool2[1] = p_P;
    *Pool2 = &P;
    *v14 = Pool2;
    p_P = Pool2;
    AttachedDeviceReferenceWithTag = IoGetLowerDeviceObjectWithTag((__int64)v12, 0x43706E50u);
  }
  v15 = (PVOID *)P;
  v27 = (PVOID *)P;
  v16 = v5;
  v17 = v6;
  v26 = v5;
  if ( P == &P )
  {
LABEL_20:
    if ( v17 && v16 >= 2 )
      *v17 = 0;
    v21 = v11 + 2;
    *v35 = v21;
    if ( !v6 || v21 > v5 )
      v7 = -1073741789;
    goto LABEL_25;
  }
  do
  {
    v18 = *((_QWORD *)v15[2] + 1);
    if ( !v18 )
    {
      RtlInitUnicodeString(&Src, L"?");
LABEL_49:
      Length = Src.Length;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(v18 + 64) && *(_WORD *)(v18 + 56) >= 2u )
    {
      Length = _mm_cvtsi128_si32(*(__m128i *)(v18 + 56));
      Src = *(UNICODE_STRING *)(v18 + 56);
      for ( Src.Length = Length; Length >= 2u; Src.Length = Length )
      {
        if ( Src.Buffer[((unsigned __int64)Length >> 1) - 1] )
          break;
        Length -= 2;
      }
    }
    else
    {
      RtlInitUnicodeString(&Src, 0LL);
      Length = Src.Length;
    }
    if ( !Length )
    {
      v25 = 272;
      v32 = 272;
      if ( !v8 )
      {
        v8 = (UNICODE_STRING *)ExAllocatePool2(256LL, 272LL, 1198550608LL);
        if ( !v8 )
        {
          v7 = -1073741670;
          goto LABEL_27;
        }
        v25 = v32;
      }
      v7 = ObQueryNameStringMode((char *)v18, (__int64)v8, v25, &v32, 0);
      if ( v7 >= 0 && v32 && v8->Length >= 2u )
      {
        Src = *v8;
      }
      else
      {
        RtlInitUnicodeString(&Src, L"?");
        v7 = 0;
      }
      goto LABEL_49;
    }
LABEL_14:
    if ( v17 )
    {
      v16 = v26;
      if ( v26 >= (unsigned __int64)Length + 2 )
      {
        memmove(v17, Src.Buffer, Length);
        v20 = &v17[(unsigned __int64)Length >> 1];
        *v20 = 0;
        v17 = v20 + 1;
        v16 = -2 - Length + v26;
        v26 = v16;
      }
    }
    else
    {
      v16 = v26;
    }
    v11 += Length + 2;
    v15 = (PVOID *)*v27;
    v27 = v15;
  }
  while ( v15 != &P );
  if ( v7 >= 0 )
  {
    v5 = v33;
    v6 = v34;
    goto LABEL_20;
  }
LABEL_25:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_27:
  while ( 1 )
  {
    v22 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_34;
    v23 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_34;
    P = *(PVOID *)P;
    *(_QWORD *)(v23 + 8) = &P;
    ObfDereferenceObjectWithTag(v22[2], 0x43706E50u);
    ExFreePoolWithTag(v22, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  return (unsigned int)v7;
}

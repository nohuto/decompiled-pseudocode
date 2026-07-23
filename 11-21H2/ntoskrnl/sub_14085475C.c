/*
 * XREFs of sub_14085475C @ 0x14085475C
 * Callers:
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 *     sub_14099E598 @ 0x14099E598 (sub_14099E598.c)
 * Callees:
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_14036BFE0 @ 0x14036BFE0 (sub_14036BFE0.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14085475C(__int64 a1, UNICODE_STRING *a2)
{
  struct _DEVICE_OBJECT *v2; // r15
  NTSTATUS DeviceProperty; // eax
  signed int v6; // ebx
  unsigned __int16 *v7; // r14
  ULONG v8; // ebp
  void *v9; // rsi
  __int64 v10; // rdx
  _WORD *v11; // rax
  unsigned __int64 Length; // rcx
  const UNICODE_STRING *v14; // rbx
  unsigned int v15; // esi
  __int64 Pool2; // rax
  ULONG BufferLength; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  BufferLength = 0;
  DeviceProperty = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
  v6 = DeviceProperty;
  if ( DeviceProperty != -1073741789 )
  {
    if ( DeviceProperty != -1073741772 )
    {
LABEL_20:
      if ( v6 >= 0 )
        return (unsigned int)v6;
LABEL_21:
      *a2 = 0LL;
      return (unsigned int)v6;
    }
    v14 = (const UNICODE_STRING *)(a1 + 128);
    v15 = *(unsigned __int16 *)(a1 + 128);
    Pool2 = ExAllocatePool2(256LL, v15, 1297630800LL);
    if ( Pool2 )
    {
      a2->Buffer = (wchar_t *)Pool2;
      a2->Length = 0;
      a2->MaximumLength = v15;
      RtlCopyUnicodeString(a2, v14);
      return 0;
    }
LABEL_23:
    v6 = -1073741670;
    goto LABEL_21;
  }
  if ( BufferLength > 0xFFFF
    || (v7 = (unsigned __int16 *)(a1 + 128), v8 = *(unsigned __int16 *)(a1 + 128) + BufferLength + 6, v8 > 0xFFFF) )
  {
    v6 = -2147483643;
    goto LABEL_21;
  }
  v9 = (void *)ExAllocatePool2(256LL, v8, 1297630800LL);
  if ( !v9 )
    goto LABEL_23;
  v6 = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, BufferLength, v9, &BufferLength);
  if ( v6 < 0 )
    goto LABEL_26;
  *a2 = 0LL;
  v10 = 0x7FFFLL;
  v11 = v9;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v6 = v10 == 0 ? 0xC000000D : 0;
  if ( v10 )
  {
    if ( a2 )
    {
      a2->Buffer = (wchar_t *)v9;
      a2->Length = 2 * (0x7FFF - v10);
    }
    else
    {
      v6 = -1073741811;
    }
  }
  a2->MaximumLength = v8;
  if ( v6 < 0 )
    goto LABEL_26;
  v6 = sub_14036BFE0(&a2->Length, L" (");
  if ( v6 < 0 )
    goto LABEL_26;
  v6 = sub_140208C24(a2, v7);
  if ( v6 < 0 )
    goto LABEL_26;
  v6 = sub_14036BFE0(&a2->Length, qword_14086CB30);
  if ( v6 < 0 )
    goto LABEL_26;
  Length = a2->Length;
  if ( Length > (unsigned __int64)a2->MaximumLength - 2 )
  {
    v6 = -2147483643;
LABEL_26:
    ExFreePoolWithTag(v9, 0x4D584650u);
    goto LABEL_20;
  }
  a2->Buffer[Length >> 1] = 0;
  return 0;
}

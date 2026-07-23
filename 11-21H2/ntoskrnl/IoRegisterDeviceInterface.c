/*
 * XREFs of IoRegisterDeviceInterface @ 0x140769AD0
 * Callers:
 *     sub_140610550 @ 0x140610550 (sub_140610550.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1403E39D0 @ 0x1403E39D0 (sub_1403E39D0.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterDeviceInterface(
        PDEVICE_OBJECT PhysicalDeviceObject,
        const GUID *InterfaceClassGuid,
        PUNICODE_STRING ReferenceString,
        PUNICODE_STRING SymbolicLinkName)
{
  WCHAR *v4; // rdi
  __int16 *v5; // rsi
  _DWORD *DeviceNode; // r14
  __int64 v10; // rcx
  int v11; // eax
  int inited; // ebx
  const WCHAR *v13; // rdx
  int v15; // eax
  __int16 *v16; // [rsp+30h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF
  const GUID *v19; // [rsp+88h] [rbp+48h]

  v19 = InterfaceClassGuid;
  v18 = 0;
  v4 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  v16 = 0LL;
  *SymbolicLinkName = 0LL;
  if ( !PhysicalDeviceObject
    || (DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode) == 0LL
    || (DeviceNode[99] & 0x20000) != 0 )
  {
    inited = -1073741808;
LABEL_15:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_9;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    goto LABEL_13;
  sub_1407103B0((char *)PhysicalDeviceObject, 0LL, 0, &v18);
  if ( v18 <= 0x10 )
    goto LABEL_13;
  if ( ReferenceString && ReferenceString->Length >= 2u )
  {
    v15 = sub_140779CA0(&v16, 0LL, ReferenceString);
    v5 = v16;
    inited = v15;
    if ( v15 < 0 )
      goto LABEL_9;
    if ( sub_1403E39D0(v16, L"\\/") )
    {
LABEL_13:
      inited = -1073741808;
      goto LABEL_9;
    }
  }
  v10 = *((_QWORD *)DeviceNode + 6);
  LODWORD(v16) = 0;
  v11 = sub_140769C24(v10, (_DWORD)v19, (_DWORD)v5, 0, (__int64)&SourceString, (__int64)&v16);
  v4 = (WCHAR *)SourceString;
  inited = v11;
  if ( v11 < 0 )
    goto LABEL_15;
  v13 = SourceString;
  PhysicalDeviceObject->Flags |= (unsigned int)v16;
  inited = RtlInitUnicodeStringEx(SymbolicLinkName, v13);
  if ( inited < 0 )
    goto LABEL_15;
LABEL_9:
  sub_14077BAB8(v5, ReferenceString);
  return inited;
}

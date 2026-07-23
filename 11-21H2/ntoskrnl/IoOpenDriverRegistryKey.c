/*
 * XREFs of IoOpenDriverRegistryKey @ 0x14067A670
 * Callers:
 *     sub_140610040 @ 0x140610040 (sub_140610040.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406C55CC @ 0x1406C55CC (sub_1406C55CC.c)
 *     sub_1406DF14C @ 0x1406DF14C (sub_1406DF14C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  HANDLE v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // r12
  int v11; // eax
  NTSTATUS v12; // ebx
  int v13; // eax
  int v14; // r14d
  int v15; // eax
  HANDLE v16; // rax
  int v18; // [rsp+20h] [rbp-50h]
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
    goto LABEL_29;
  v9 = *(_QWORD *)(a1 + 48);
  if ( !v9 )
    goto LABEL_29;
  if ( !*(_QWORD *)(v9 + 32) )
    goto LABEL_29;
  if ( !*(_WORD *)(v9 + 24) )
    goto LABEL_29;
  if ( a4 )
    goto LABEL_29;
  v10 = a5;
  if ( !a5 )
    goto LABEL_29;
  v11 = sub_14067B470(v9 + 24, 131101LL, &Handle, 0LL, 0);
  v8 = Handle;
  v12 = v11;
  if ( v11 < 0 )
    goto LABEL_30;
  v13 = sub_14067B838(Handle);
  v12 = v13;
  if ( v13 == -1073741772 )
    goto LABEL_29;
  if ( v13 < 0 )
    goto LABEL_30;
  if ( MEMORY[4] != 4 || MEMORY[0xC] != 4 )
  {
    v12 = -1073741492;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)MEMORY[8] & 0xB) == 0 )
    goto LABEL_29;
  if ( a2 )
  {
    v14 = a2 - 1;
    if ( !v14 )
    {
      LOBYTE(v18) = 0;
      v15 = sub_1406DF14C(*(_QWORD *)(a1 + 48) + 24LL, v8, &qword_140006FD8, a3, v18, &KeyHandle);
      goto LABEL_18;
    }
    if ( v14 == 1 )
    {
      LOBYTE(v18) = 1;
      v15 = sub_1406DF14C(*(_QWORD *)(a1 + 48) + 24LL, v8, &qword_140006FB8, a3, v18, &KeyHandle);
LABEL_18:
      v12 = v15;
      if ( v15 < 0 )
        goto LABEL_30;
      v16 = KeyHandle;
      if ( !KeyHandle )
        goto LABEL_27;
      sub_1406C55CC(KeyHandle);
LABEL_26:
      v16 = KeyHandle;
LABEL_27:
      KeyHandle = 0LL;
      *v10 = v16;
      goto LABEL_30;
    }
LABEL_29:
    v12 = -1073741811;
    goto LABEL_30;
  }
  if ( (a3 & 0x2000000) != 0 )
    a3 = a3 & 0xFDFDFFE6 | 0x20019;
  if ( (a3 & 0x7FFDFFE6) != 0 )
  {
    v12 = -1073741790;
    goto LABEL_30;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140006FC8;
  ObjectAttributes.RootDirectory = v8;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  if ( v12 >= 0 )
    goto LABEL_26;
LABEL_30:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    ZwClose(v8);
  return (unsigned int)v12;
}

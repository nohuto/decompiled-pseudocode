/*
 * XREFs of sub_140B11EBC @ 0x140B11EBC
 * Callers:
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 * Callees:
 *     RtlEqualString @ 0x140238C70 (RtlEqualString.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D8724 @ 0x1402D8724 (sub_1402D8724.c)
 *     sub_1402D8A7C @ 0x1402D8A7C (sub_1402D8A7C.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_1406797C8 @ 0x1406797C8 (sub_1406797C8.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140747D40 @ 0x140747D40 (sub_140747D40.c)
 *     sub_14075CCC8 @ 0x14075CCC8 (sub_14075CCC8.c)
 *     sub_14075ECF4 @ 0x14075ECF4 (sub_14075ECF4.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140AA9A28 @ 0x140AA9A28 (sub_140AA9A28.c)
 *     sub_140B12340 @ 0x140B12340 (sub_140B12340.c)
 */

__int64 __fastcall sub_140B11EBC(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        DRIVER_INITIALIZE *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _DRIVER_OBJECT **a6)
{
  void *v6; // r12
  UNICODE_STRING *v9; // r13
  unsigned __int16 *v10; // rsi
  int inserted; // edi
  struct _DRIVER_OBJECT *v12; // rbx
  PVOID *v13; // rdi
  PIMAGE_NT_HEADERS v14; // rax
  __int64 Pool2; // rax
  unsigned __int16 v16; // cx
  __int64 v17; // rdi
  PDRIVER_EXTENSION DriverExtension; // r15
  unsigned __int64 Length; // rax
  wchar_t *Buffer; // rdx
  wchar_t *v21; // rdi
  __int64 v22; // rax
  wchar_t *i; // rdi
  unsigned __int16 v24; // ax
  void *v25; // r9
  UNICODE_STRING *p_ServiceKeyName; // r13
  PVOID v27; // rax
  unsigned __int16 v28; // cx
  UNICODE_STRING *v29; // r8
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-79h]
  int v35; // [rsp+50h] [rbp-49h] BYREF
  HANDLE v36; // [rsp+58h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h]
  PVOID v39; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v40[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v41; // [rsp+80h] [rbp-19h]
  unsigned __int16 *v42; // [rsp+88h] [rbp-11h]
  int v43; // [rsp+90h] [rbp-9h]
  int v44; // [rsp+94h] [rbp-5h]
  __int128 v45; // [rsp+98h] [rbp-1h]
  bool v46; // [rsp+F0h] [rbp+57h] BYREF
  UNICODE_STRING *v47; // [rsp+F8h] [rbp+5Fh]

  v47 = a2;
  v6 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  v9 = a2;
  v40[1] = 0;
  *a6 = 0LL;
  v10 = a1;
  v44 = 0;
  v36 = 0LL;
  v35 = 0;
  v46 = 0;
  if ( qword_140D01468 && qword_140D01468[1] )
    sub_140AA9A28(1u, a1);
  v40[0] = 48;
  v41 = 0LL;
  LOBYTE(a1) = *((_BYTE *)KeGetCurrentThread() + 562);
  v43 = 80;
  v42 = v10;
  v45 = 0LL;
  inserted = ObCreateObject((int)a1, (int)IoDriverObjectType, (int)v40, 0);
  if ( inserted >= 0 )
  {
    v12 = (struct _DRIVER_OBJECT *)Object;
    memset(Object, 0, 0x1A0uLL);
    v12->DriverExtension = (PDRIVER_EXTENSION)&v12[1];
    *(_QWORD *)&v12[1].Type = v12;
    memset64(v12->MajorFunction, (unsigned __int64)sub_14023EE50, 0x1CuLL);
    *(_DWORD *)&v12->Type = 22020100;
    v12->DriverInit = a3;
    inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v39, 0LL);
      v13 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        while ( a4 )
        {
          if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(v13 + 11), 1u) )
          {
            v12->DriverSection = v13;
LABEL_10:
            sub_140B12340();
            goto LABEL_12;
          }
          v13 = (PVOID *)*v13;
          if ( v13 == &PsLoadedModuleList )
            goto LABEL_10;
        }
      }
      sub_140B12340();
      if ( a4 )
      {
LABEL_12:
        v6 = *(void **)(a4 + 48);
        v14 = RtlImageNtHeader(v6);
        v12->DriverStart = v6;
        v12->DriverSize = v14->OptionalHeader.SizeOfImage;
        if ( (v14->OptionalHeader.DllCharacteristics & 0x2000) != 0 )
          goto LABEL_14;
      }
      v12->Flags |= 2u;
LABEL_14:
      Pool2 = ExAllocatePool2(64LL, v10[1] + 2LL, 0x20206F49u);
      v16 = 0;
      v17 = Pool2;
      if ( Pool2 )
      {
        v12->DriverName.Buffer = (wchar_t *)Pool2;
        v12->DriverName.MaximumLength = v10[1];
        v12->DriverName.Length = *v10;
        memmove(v12->DriverName.Buffer, *((const void **)v10 + 1), v10[1]);
        *(_WORD *)(v17 + 2 * ((unsigned __int64)*v10 >> 1)) = 0;
        v16 = 0;
      }
      DriverExtension = v12->DriverExtension;
      if ( v9 )
      {
        Length = v9->Length;
        if ( (_WORD)Length )
        {
          Buffer = v9->Buffer;
          v21 = &Buffer[Length >> 1];
          v22 = 4LL;
          if ( *(v21 - 1) != 92 )
            v22 = 2LL;
          for ( i = &v21[v22 / 0xFFFFFFFFFFFFFFFEuLL]; i != Buffer; --i )
          {
            if ( *i == 92 )
            {
              ++i;
              break;
            }
            v16 += 2;
          }
          v24 = v16 + 2;
          if ( i != Buffer )
            v24 = v16;
          Object = (PVOID)v24;
          v25 = (void *)ExAllocatePool2(64LL, v24 + 2LL, 0x20206F49u);
          v39 = v25;
          p_ServiceKeyName = &DriverExtension->ServiceKeyName;
          if ( v25 )
          {
            v27 = Object;
            v28 = (_WORD)Object + 2;
            DriverExtension->ServiceKeyName.Buffer = (wchar_t *)v25;
            DriverExtension->ServiceKeyName.MaximumLength = v28;
            p_ServiceKeyName->Length = (unsigned __int16)v27;
            memmove(v25, i, (size_t)v27);
            v29 = v47;
            *((_WORD *)v39 + ((unsigned __int64)p_ServiceKeyName->Length >> 1)) = 0;
            inserted = sub_14082EF44(&v36, 0LL, v29, 0xF003Fu);
            if ( inserted >= 0 )
            {
              inserted = sub_1406797C8((int)p_ServiceKeyName, v36, v6, a5, &v35, &v46);
              NtClose(v36);
              if ( inserted >= 0 )
              {
                v9 = v47;
LABEL_32:
                if ( (v35 & 1) != 0 )
                  v12->Flags |= 0x100u;
                if ( v46 )
                  v12->Flags |= 0x1000u;
                v12->HardwareDatabase = &stru_140D3CD08;
                sub_1402D8724((__int64)v12);
                v30 = sub_14075CCC8(a4);
                inserted = v30;
                if ( v30 < 0 )
                {
                  LODWORD(NewObject) = v30;
                  DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ blocked with status - 0x%lX\n", v10, NewObject);
                }
                else
                {
                  v31 = sub_14042A5E0(v12, v9);
                  inserted = v31;
                  if ( v31 < 0 )
                  {
                    if ( v31 == -1073741218 )
                    {
                      LODWORD(NewObject) = -1073741218;
                      DbgPrintEx(
                        0x65u,
                        3u,
                        "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                        v10,
                        NewObject);
                    }
                    else
                    {
                      LODWORD(NewObject) = v31;
                      DbgPrintEx(
                        0x65u,
                        0,
                        "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                        v10,
                        NewObject);
                    }
                  }
                  else
                  {
                    sub_1402D8A7C(v12);
                    sub_14075ECF4((__int64 *)&v12->Type, v32, (const void **)((a4 + 72) & -(__int64)(a4 != 0)));
                  }
                }
              }
            }
          }
          else
          {
            DriverExtension->ServiceKeyName.Buffer = 0LL;
            inserted = -1073741670;
            p_ServiceKeyName->Length = 0;
          }
          NtClose(Handle);
          if ( inserted < 0 )
          {
            if ( inserted != -1073741218 )
              sub_140862BA0(0LL, &v12->DriverExtension->ServiceKeyName);
            if ( qword_140D01468 && qword_140D01468[1] )
              sub_140AA9A28(3u, 0LL);
            ObMakeTemporaryObject(v12);
            ObfDereferenceObject(v12);
          }
          else
          {
            sub_140747D40((__int64)v12);
            if ( qword_140D01468 && qword_140D01468[1] )
              sub_140AA9A28(2u, 0LL);
            *a6 = v12;
          }
          return (unsigned int)inserted;
        }
      }
      *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
      DriverExtension->ServiceKeyName.Buffer = 0LL;
      goto LABEL_32;
    }
  }
  if ( qword_140D01468 && qword_140D01468[1] )
    sub_140AA9A28(3u, 0LL);
  return (unsigned int)inserted;
}

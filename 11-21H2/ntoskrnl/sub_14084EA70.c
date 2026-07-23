/*
 * XREFs of sub_14084EA70 @ 0x14084EA70
 * Callers:
 *     sub_14084E99C @ 0x14084E99C (sub_14084E99C.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_1403D2D2C @ 0x1403D2D2C (sub_1403D2D2C.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_140A8ACE8 @ 0x140A8ACE8 (sub_140A8ACE8.c)
 */

__int64 __fastcall sub_14084EA70(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rdi
  int v7; // eax
  int v8; // ecx
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = (HANDLE)-1LL;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  Handle = 0LL;
  v9 = 0LL;
  v4 = sub_14067B470((UNICODE_STRING *)(v2 + 24), 0x20019u, &Handle, 0LL, 0);
  v5 = Handle;
  if ( v4 < 0 )
    goto LABEL_4;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  *((_QWORD *)&v9 + 1) = L"Parameters";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
  LODWORD(v9) = 1441812;
  ObjectAttributes.RootDirectory = Handle;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_4;
  LODWORD(Handle) = 0;
  if ( (int)sub_1403D2D2C(KeyHandle, (__int64)L"DmaRemappingCompatible", &Handle) < 0 )
    goto LABEL_4;
  if ( !(_DWORD)Handle )
  {
    v3 = 1;
    goto LABEL_4;
  }
  if ( (_DWORD)Handle == 1 )
  {
LABEL_14:
    v3 = 2;
    goto LABEL_4;
  }
  if ( (_DWORD)Handle != 2 )
  {
    if ( (_DWORD)Handle != 3 )
      goto LABEL_4;
    goto LABEL_14;
  }
  v3 = 3;
  if ( (unsigned int)sub_1402DA4B0() && (dword_140C29FC0 & 0x80u) != 0 )
  {
    v7 = sub_140A8ACE8(*(_QWORD *)(a1 + 24));
    v8 = 3;
    if ( v7 )
      v8 = 2;
    v3 = v8;
  }
LABEL_4:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v5 )
    ZwClose(v5);
  return v3;
}

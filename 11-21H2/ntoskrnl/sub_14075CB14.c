/*
 * XREFs of sub_14075CB14 @ 0x14075CB14
 * Callers:
 *     sub_14075C8A4 @ 0x14075C8A4 (sub_14075C8A4.c)
 *     sub_1407ED310 @ 0x1407ED310 (sub_1407ED310.c)
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 *     sub_140B001A8 @ 0x140B001A8 (sub_140B001A8.c)
 *     sub_140B01140 @ 0x140B01140 (sub_140B01140.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_14075C9D4 @ 0x14075C9D4 (sub_14075C9D4.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 */

__int64 __fastcall sub_14075CB14(_WORD *a1, _WORD *a2, HANDLE *a3)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v9 + 1] = -1073740768;
    dword_140C2A220[2 * v9] = 262566;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A6u, 0LL);
  }
  if ( !a3 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v10 + 1] = -1073740768;
    dword_140C2A220[2 * v10] = 262567;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A7u, 0LL);
  }
  if ( a2 )
    v6 = sub_14075C9D4((__int64)v11, a1, a2, 1);
  else
    v6 = sub_14075C924((__int64)v11, a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      *a3 = KeyHandle;
      _InterlockedIncrement(&dword_140C2A1B8);
    }
  }
  sub_14075CDC4(v11);
  return (unsigned int)v7;
}

/*
 * XREFs of sub_140826C10 @ 0x140826C10
 * Callers:
 *     sub_14075C8A4 @ 0x14075C8A4 (sub_14075C8A4.c)
 *     sub_140826BE0 @ 0x140826BE0 (sub_140826BE0.c)
 *     sub_140B001A8 @ 0x140B001A8 (sub_140B001A8.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

__int64 __fastcall sub_140826C10(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        int a3,
        void *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // rsi
  NTSTATUS v11; // ebx
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // edi
  size_t v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v17 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v17 + 1] = -1073740768;
    dword_140C2A220[2 * v17] = 262993;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x351u, 0LL);
  }
  if ( !a4 )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v18 + 1] = -1073740768;
    dword_140C2A220[2 * v18] = 262994;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x352u, 0LL);
  }
  v10 = a6;
  if ( !a6 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v19 + 1] = -1073740768;
    dword_140C2A220[2 * v19] = 262995;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x353u, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( v11 == -1073741789 )
  {
    v12 = sub_1402D84BC(ResultLength);
    v13 = v12;
    if ( v12 )
    {
      v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v12, ResultLength, &ResultLength);
      if ( !v14 )
      {
        v15 = (unsigned int)v13[2];
        if ( v15 > a5 )
        {
          v14 = -1073741789;
        }
        else if ( v13[1] == a3 )
        {
          memmove(a4, v13 + 3, v15);
          *v10 = (unsigned int)v13[2];
        }
        else
        {
          v14 = -1073741788;
        }
      }
      sub_1402D8494(v13);
      return v14;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v11 >= 0 )
    {
      v20 = dword_140D04880;
      v21 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A220[2 * v21 + 1] = -1073740768;
      dword_140C2A220[2 * v21] = 263013;
      if ( (v20 & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x365u, 0LL);
    }
    return (unsigned int)v11;
  }
}

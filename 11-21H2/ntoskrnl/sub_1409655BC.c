/*
 * XREFs of sub_1409655BC @ 0x1409655BC
 * Callers:
 *     sub_1407ED310 @ 0x1407ED310 (sub_1407ED310.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

__int64 __fastcall sub_1409655BC(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        _DWORD *a3,
        void *a4,
        unsigned __int64 a5,
        size_t *a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  size_t *v12; // rsi
  __int64 v13; // rax
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  char v16; // al
  __int64 v17; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rbx
  unsigned int v21; // edi
  size_t v22; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v10 + 1] = -1073740768;
    dword_140C2A220[2 * v10] = 263113;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3C9u, 0LL);
  }
  if ( !a4 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v11 + 1] = -1073740768;
    dword_140C2A220[2 * v11] = 263114;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3CAu, 0LL);
  }
  v12 = a6;
  if ( !a6 )
  {
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v13 + 1] = -1073740768;
    dword_140C2A220[2 * v13] = 263115;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3CBu, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v15 = v14;
  if ( v14 == -1073741789 )
  {
    v19 = sub_1402D84BC(ResultLength);
    v20 = v19;
    if ( v19 )
    {
      v21 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v19, ResultLength, &ResultLength);
      if ( !v21 )
      {
        v22 = (unsigned int)v20[2];
        if ( v22 <= a5 )
        {
          memmove(a4, v20 + 3, v22);
          *a3 = v20[1];
          *v12 = (unsigned int)v20[2];
        }
        else
        {
          *v12 = v22;
          v21 = -1073741789;
        }
      }
      sub_1402D8494(v20);
      return v21;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v14 >= 0 )
    {
      v16 = dword_140D04880;
      v17 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A220[2 * v17 + 1] = -1073740768;
      dword_140C2A220[2 * v17] = 263133;
      if ( (v16 & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3DDu, 0LL);
    }
    return v15;
  }
}

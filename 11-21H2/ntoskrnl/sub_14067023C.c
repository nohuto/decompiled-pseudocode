/*
 * XREFs of sub_14067023C @ 0x14067023C
 * Callers:
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14075A480 @ 0x14075A480 (sub_14075A480.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14067023C(__int64 a1)
{
  unsigned __int64 v2; // rcx
  ULONG v4; // ebp
  SIZE_T v5; // rdx
  _DWORD *PoolWithTag; // rbx
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  struct _EX_RUNDOWN_REF *v11; // rdi
  unsigned int v12; // eax
  int v13; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h] BYREF
  char v17; // [rsp+50h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( ((v2 >> 6) & 0xF) == 5 )
  {
    v11 = (struct _EX_RUNDOWN_REF *)qword_140C10D20;
    v16 = v2 ^ 0x41C64E6DA3BC0074LL;
    if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C10D20) )
    {
      v13 = sub_14042A5E0(&v16, sub_140A08660);
      sub_1403614E0(v11);
      if ( v13 != -1073741822 )
      {
        if ( v13 < 0 )
          return (unsigned int)v13;
        return 0LL;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = v4 + 16;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x20666E57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v7 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&ValueName.Length = 2228224LL;
    ValueName.Buffer = (wchar_t *)&v17;
    sub_14075A480(v7, &ValueName);
    ResultLength = v4 + 16;
    v8 = ZwQueryValueKey(
           *(HANDLE *)(a1 + 104),
           &ValueName,
           KeyValuePartialInformation,
           PoolWithTag,
           v4 + 16,
           &ResultLength);
    v9 = v8;
    if ( v8 == -1073741772 )
    {
      *((_QWORD *)PoolWithTag + 1) = 0LL;
LABEL_9:
      *PoolWithTag = 1050884;
      v10 = PoolWithTag[3];
      PoolWithTag[1] = v4;
      *(_DWORD *)(a1 + 96) = v10;
      *(_QWORD *)(a1 + 88) = PoolWithTag;
      return 0LL;
    }
    if ( v8 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
    v5 = ResultLength;
    v4 = ResultLength - 16;
  }
  if ( v8 >= 0 )
  {
    if ( PoolWithTag[1] == 3 )
    {
      v12 = PoolWithTag[2];
      if ( v12 >= 4 )
      {
        PoolWithTag[2] = v12 - 4;
        goto LABEL_9;
      }
    }
    v9 = -1073741823;
  }
  ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
  return v9;
}

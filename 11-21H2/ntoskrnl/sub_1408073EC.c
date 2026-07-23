/*
 * XREFs of sub_1408073EC @ 0x1408073EC
 * Callers:
 *     sub_140807354 @ 0x140807354 (sub_140807354.c)
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwUnloadKey @ 0x14041F1C0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14041F1E0 (ZwUnloadKey2.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408073EC(__int64 a1, int a2, char a3)
{
  SIZE_T v5; // rbx
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  int v8; // ebx
  NTSTATUS v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  *(&TargetKey.Attributes + 1) = 0;
  v13 = 0LL;
  *(&TargetKey.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = (unsigned int)(a2 + 38);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    swprintf_s(PoolWithTag, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    v8 = sub_140813BA8(18LL, &v13);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v9 = ZwUnloadKey2(&TargetKey, 1u);
      else
        v9 = ZwUnloadKey(&TargetKey);
      v8 = v9;
      sub_140813B50(&v13);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}

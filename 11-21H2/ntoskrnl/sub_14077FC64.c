/*
 * XREFs of sub_14077FC64 @ 0x14077FC64
 * Callers:
 *     sub_14067AEF8 @ 0x14067AEF8 (sub_14067AEF8.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     sub_1406B89A0 @ 0x1406B89A0 (sub_1406B89A0.c)
 *     sub_1406BDEE4 @ 0x1406BDEE4 (sub_1406BDEE4.c)
 *     sub_1406BE094 @ 0x1406BE094 (sub_1406BE094.c)
 *     sub_1406CC2C8 @ 0x1406CC2C8 (sub_1406CC2C8.c)
 *     sub_1406DA4DC @ 0x1406DA4DC (sub_1406DA4DC.c)
 *     sub_14076CA78 @ 0x14076CA78 (sub_14076CA78.c)
 *     sub_14076CFE4 @ 0x14076CFE4 (sub_14076CFE4.c)
 *     sub_140787818 @ 0x140787818 (sub_140787818.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140788D90 @ 0x140788D90 (sub_140788D90.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_14081F4F4 @ 0x14081F4F4 (sub_14081F4F4.c)
 *     sub_140827DE0 @ 0x140827DE0 (sub_140827DE0.c)
 *     sub_14082E998 @ 0x14082E998 (sub_14082E998.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 *     sub_14082EB54 @ 0x14082EB54 (sub_14082EB54.c)
 *     sub_14083E6C0 @ 0x14083E6C0 (sub_14083E6C0.c)
 *     sub_140940290 @ 0x140940290 (sub_140940290.c)
 *     sub_140946BB8 @ 0x140946BB8 (sub_140946BB8.c)
 *     sub_140947E30 @ 0x140947E30 (sub_140947E30.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_14095C264 @ 0x14095C264 (sub_14095C264.c)
 *     sub_14095C804 @ 0x14095C804 (sub_14095C804.c)
 *     sub_14095CC40 @ 0x14095CC40 (sub_14095CC40.c)
 *     sub_14095CDBC @ 0x14095CDBC (sub_14095CDBC.c)
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 *     sub_140A2E2C4 @ 0x140A2E2C4 (sub_140A2E2C4.c)
 *     sub_140A2E760 @ 0x140A2E760 (sub_140A2E760.c)
 *     sub_140A2E90C @ 0x140A2E90C (sub_140A2E90C.c)
 *     sub_140A2EAB8 @ 0x140A2EAB8 (sub_140A2EAB8.c)
 *     sub_140A2FD74 @ 0x140A2FD74 (sub_140A2FD74.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077FC64(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rsi
  NTSTATUS inited; // ebx
  ULONG Length; // ebx
  __int64 Pool2; // rax
  char *v12; // rdi
  NTSTATUS v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v19; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      Length = *a5 + 12;
      if ( Length < 0xC )
        return (unsigned int)-1073741675;
      Pool2 = ExAllocatePool2(256LL, Length, 1279739218LL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v12 = (char *)Pool2;
    }
    else
    {
      v12 = &v19;
      Length = 140;
    }
    v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v12, Length, &ResultLength);
    inited = v13;
    if ( !v13 || v13 == -2147483643 )
    {
      v14 = *a5;
      v15 = *((_DWORD *)v12 + 2);
      *a5 = v15;
      if ( v14 < v15 )
        inited = -1073741789;
      else
        memmove(a4, v12 + 12, *((unsigned int *)v12 + 2));
      if ( a3 )
        *a3 = *((_DWORD *)v12 + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)inited;
}

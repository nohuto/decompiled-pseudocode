/*
 * XREFs of sub_140B1009C @ 0x140B1009C
 * Callers:
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 * Callees:
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     RtlGenerateClass5Guid @ 0x14082E6E0 (RtlGenerateClass5Guid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B1009C(void *a1, void *a2, unsigned __int16 **a3, unsigned int a4, int *a5)
{
  unsigned int v5; // ebp
  unsigned __int16 v9; // bx
  unsigned int v10; // r8d
  _WORD **v11; // rdx
  _WORD *v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // bx
  __int64 Pool2; // rax
  void *Data; // rsi
  _WORD *v17; // rdi
  ULONG DataSize; // edi
  int Class5Guid; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-118h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-108h]
  WCHAR SourceString[40]; // [rsp+60h] [rbp-F8h] BYREF
  WCHAR v24[48]; // [rsp+B0h] [rbp-A8h] BYREF

  v5 = 0;
  KeyHandle = a1;
  v9 = 0;
  v10 = 0;
  DestinationString = 0LL;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = a3;
  do
  {
    v12 = *v11;
    v13 = v9 + 2;
    ++v11;
    if ( !v10 )
      v13 = v9;
    ++v10;
    v9 = *v12 + v13;
  }
  while ( v10 < a4 );
  if ( v9 > 2u )
  {
    v14 = v9 + 2;
    Pool2 = ExAllocatePool2(256LL, v14, 0x6E697050u);
    Data = (void *)Pool2;
    if ( Pool2 )
    {
      v17 = (_WORD *)Pool2;
      do
      {
        if ( v5 )
          *v17++ = 38;
        if ( **a3 )
        {
          memmove(v17, *((const void **)*a3 + 1), **a3);
          v17 += (unsigned __int64)**a3 >> 1;
        }
        ++v5;
        ++a3;
      }
      while ( v5 < a4 );
      *v17 = 0;
      DataSize = v14;
      Class5Guid = RtlGenerateClass5Guid((__int128 *)qword_140011F90, (__int64)Data, (unsigned int)v14 - 2, (__int64)a5);
      if ( Class5Guid >= 0 )
      {
        Class5Guid = sub_140773030(a5, SourceString);
        if ( Class5Guid >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          Class5Guid = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, Data, DataSize);
          if ( Class5Guid >= 0 )
          {
            if ( a2 )
            {
              Class5Guid = sub_140204630(
                             v24,
                             0x5CuLL,
                             0LL,
                             0LL,
                             0x800u,
                             L"%ws_%ws",
                             SourceString,
                             L"amd64",
                             *(_QWORD *)&DestinationString.Length,
                             DestinationString.Buffer);
              if ( Class5Guid >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, v24);
                Class5Guid = ZwSetValueKey(a2, &DestinationString, 0, 1u, 0LL, 0);
              }
            }
          }
        }
      }
      ExFreePoolWithTag(Data, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Class5Guid;
}

/*
 * XREFs of SmpEnableCachingOnDedicatedMemoryWorker @ 0x1400113F4
 * Callers:
 *     SmpDedicatedMemoryCachingCallback @ 0x140011380 (SmpDedicatedMemoryCachingCallback.c)
 *     SmpEnableCachingOnDedicatedMemory @ 0x140011398 (SmpEnableCachingOnDedicatedMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

__int64 SmpEnableCachingOnDedicatedMemoryWorker()
{
  HANDLE v0; // r14
  int v1; // ebx
  int i; // eax
  unsigned int *Heap; // rax
  unsigned int *v4; // rdi
  int v5; // eax
  unsigned int *v6; // r15
  unsigned __int64 v7; // r12
  unsigned int *v8; // rsi
  SIZE_T Size; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h]
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v17[4]; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+84h] [rbp-7Ch]
  int v19; // [rsp+88h] [rbp-78h]
  unsigned __int64 v20; // [rsp+B0h] [rbp-50h]

  ValueName.Buffer = L"DisableDedicatedMemoryCaching";
  *(_DWORD *)&ValueName.Length = 3932218;
  v0 = 0LL;
  if ( NtQueryValueKey(
         SmpMmKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && KeyValueInformation[0] == 4
    && KeyValueInformation[1] == 4
    && KeyValueInformation[2] == 1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    for ( i = NtManagePartition(-2LL, 0LL, 9LL, &Size, 4); ; i = NtManagePartition(-2LL, 0LL, 9LL, &Size, 4) )
    {
      v1 = i;
      if ( i != -1073741789 )
        break;
      Heap = (unsigned int *)RtlAllocateHeap(
                               *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                               0,
                               (unsigned int)Size);
      v4 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v5 = NtManagePartition(-2LL, 0LL, 9LL, Heap, Size);
      v1 = v5;
      if ( v5 >= 0 )
      {
        v6 = 0LL;
        v7 = 0LL;
        v8 = v4;
        if ( !*v4 )
          goto LABEL_23;
        do
        {
          *((_QWORD *)&v11 + 1) = 0x1F000300000000LL;
          Handle = 0LL;
          *(_QWORD *)&v11 = *((_QWORD *)v8 + 3);
          if ( (int)NtManagePartition(-2LL, 0LL, 10LL, &v11, 24) >= 0 )
          {
            memset_0(v17, 0, 0xF0uLL);
            v18 = -1;
            v19 = -1;
            v1 = NtManagePartition(Handle, 0LL, 0LL, v17, 240);
            NtClose(Handle);
            if ( v1 < 0 )
              goto LABEL_24;
            if ( v20 > v7 )
            {
              v7 = v20;
              v6 = v8;
            }
          }
          v8 = (unsigned int *)((char *)v8 + *v8);
        }
        while ( *v8 );
        if ( v6 )
        {
          Handle = 0LL;
          v11 = 0LL;
          *(_QWORD *)&v11 = *((_QWORD *)v6 + 3);
          HIDWORD(v11) = 2031619;
          v1 = NtManagePartition(-2LL, 0LL, 10LL, &v11, 24);
          if ( v1 >= 0 )
          {
            v0 = Handle;
            v14 = 4LL;
            v1 = NtManagePartition(Handle, 0LL, 6LL, &v14, 8);
            if ( v1 >= 0 )
              v1 = 0;
          }
        }
        else
        {
LABEL_23:
          v1 = -1073741275;
        }
LABEL_24:
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
        if ( v0 )
          NtClose(v0);
        return (unsigned int)v1;
      }
      if ( v5 != -1073741789 )
        goto LABEL_24;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
    }
  }
  return (unsigned int)v1;
}

/*
 * XREFs of DpiPdoHandleQueryDeviceText @ 0x1C021B740
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceText(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  const WCHAR *v6; // rdx
  int v7; // eax
  PVOID PoolWithTag; // rax
  void *v9; // rsi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
  {
    return *(unsigned int *)(a2 + 48);
  }
  else if ( !*(_QWORD *)(a2 + 56) )
  {
    v6 = (const WCHAR *)(v3 + 818);
    DestinationString = 0LL;
    if ( !*(_WORD *)(v3 + 818) )
    {
      v7 = *(_DWORD *)(v3 + 496);
      if ( v7 == 1 )
      {
        v6 = L"Generic Monitor";
      }
      else if ( v7 == 3 )
      {
        v6 = L"Integrated Display";
      }
      else
      {
        v6 = L"Unknown Graphics Device";
      }
    }
    RtlInitUnicodeString(&DestinationString, v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x74727044u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.MaximumLength);
      memmove(v9, DestinationString.Buffer, DestinationString.MaximumLength);
      *(_QWORD *)(a2 + 56) = v9;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}

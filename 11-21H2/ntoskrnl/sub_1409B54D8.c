/*
 * XREFs of sub_1409B54D8 @ 0x1409B54D8
 * Callers:
 *     sub_1407FBE14 @ 0x1407FBE14 (sub_1407FBE14.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140705F30 @ 0x140705F30 (sub_140705F30.c)
 *     sub_1409B4F34 @ 0x1409B4F34 (sub_1409B4F34.c)
 *     sub_1409B5484 @ 0x1409B5484 (sub_1409B5484.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409B54D8(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  NTSTATUS Status; // ebx
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  char *PoolWithTag; // rdi
  IRP *v13; // rax
  unsigned int v14; // eax
  int v15; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK v18; // [rsp+68h] [rbp-11h] BYREF
  LARGE_INTEGER v19[2]; // [rsp+78h] [rbp-1h] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+Fh]

  NumberOfBytes = 0LL;
  v4 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  *(_OWORD *)&v19[0].LowPart = 0LL;
  if ( (unsigned int)v4 >= 9 )
  {
    v7 = *(_QWORD **)(a1 + 24);
    memset(v7, 0, v4);
    Status = sub_1409B4F34(v8, *(struct _DEVICE_OBJECT **)(a3 + 184), v9, v10, v19);
    if ( Status >= 0 )
    {
      v11 = HIDWORD(NumberOfBytes);
      if ( HIDWORD(NumberOfBytes) >= 0x18 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, HIDWORD(NumberOfBytes), 0x62574152u);
        if ( PoolWithTag )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v13 = sub_140705F30(3u, *(_QWORD *)(a3 + 184), PoolWithTag, v11, 0LL, &Event, &v18);
          if ( v13 )
          {
            v13->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 184), v13);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = v18.Status;
            }
            if ( Status >= 0 )
            {
              if ( *((_DWORD *)PoolWithTag + 4) == 1397904198
                && (v14 = *((unsigned __int16 *)PoolWithTag + 10), v14 <= v11)
                && (unsigned __int16)v14 >= 0x18u
                && (unsigned __int16)sub_1409B5484((__int64)PoolWithTag) == *((_WORD *)PoolWithTag + 11) )
              {
                if ( PoolWithTag[3] == 82 && PoolWithTag[4] == 101 && PoolWithTag[5] == 70 && PoolWithTag[6] == 83 )
                {
                  v15 = Status;
                  if ( !PoolWithTag[7] )
                    v15 = -1073741637;
                  Status = v15;
                }
                *v7 = *(_QWORD *)(PoolWithTag + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
                Status = -1073741637;
              }
            }
          }
          else
          {
            Status = -1073741670;
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)Status;
}

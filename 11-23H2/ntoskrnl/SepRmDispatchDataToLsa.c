/*
 * XREFs of SepRmDispatchDataToLsa @ 0x14031CDB8
 * Callers:
 *     SepRmCallLsa @ 0x14031CB70 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14041B4B0 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x14041B530 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x14041E170 (ZwRequestPort.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1D74 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ServerSiloGlobals; // rax
  void **v4; // r14
  __int16 v5; // ax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // eax
  void **v9; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  int v13; // ecx
  SIZE_T v14; // r8
  void *v15; // rdx
  void *v16; // rax
  int v17; // eax
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE RequestMessage[512]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE ReplyMessage[512]; // [rsp+230h] [rbp+130h] BYREF

  memset(RequestMessage, 0, sizeof(RequestMessage));
  memset(ReplyMessage, 0, sizeof(ReplyMessage));
  v2 = *(_QWORD *)(a1 + 56);
  RegionSize = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(v2);
  v4 = (void **)(ServerSiloGlobals + 98);
  if ( ServerSiloGlobals[99] )
  {
    v5 = *(_WORD *)(a1 + 36);
    *(_DWORD *)&ReplyMessage[40] = 0;
    v6 = *(_DWORD *)(a1 + 16);
    *(_WORD *)&RequestMessage[2] = v5 + 48;
    *(_WORD *)RequestMessage = v5 + 8;
    *(_WORD *)ReplyMessage = *(_WORD *)(a1 + 48);
    *(_WORD *)&ReplyMessage[2] = *(_WORD *)ReplyMessage + 40;
    *(_DWORD *)&RequestMessage[40] = *(_DWORD *)(a1 + 32);
    v7 = v6 - 1;
    if ( v7 )
    {
      v13 = v7 - 3;
      if ( !v13 || (unsigned int)(v13 - 1) < 2 )
      {
        v14 = *(unsigned int *)(a1 + 36);
        v15 = *(void **)(a1 + 24);
        if ( (unsigned int)v14 > 0x1D0 )
        {
          if ( (unsigned int)v14 > 0x1000 )
          {
            v17 = SepAdtCopyToLsaSharedMemory(*v4, v15, v14);
            v11 = v17;
            if ( v17 < 0 )
            {
              SepAuditFailed((unsigned int)v17);
              return v11;
            }
            v16 = 0LL;
            *(_DWORD *)&RequestMessage[44] = 3;
          }
          else
          {
            memmove(v4[8], v15, v14);
            v16 = v4[7];
            *(_DWORD *)&RequestMessage[44] = 2;
          }
          *(_QWORD *)&RequestMessage[48] = v16;
          *(_DWORD *)RequestMessage = 3670032;
        }
        else
        {
          memmove(&RequestMessage[48], v15, v14);
          *(_DWORD *)&RequestMessage[44] = 1;
        }
        if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 4) <= 1 )
          ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
        goto LABEL_5;
      }
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 36);
      *(_DWORD *)&RequestMessage[44] = 1;
      if ( v8 <= 0x1D0 )
      {
        memmove(&RequestMessage[48], (const void *)(a1 + 24), v8);
LABEL_5:
        v9 = (void **)(a1 + 40);
        if ( *(_DWORD *)(a1 + 32) != 3 || *v9 )
          v10 = ZwRequestWaitReplyPort(v4[1], (PPORT_MESSAGE)RequestMessage, (PPORT_MESSAGE)ReplyMessage);
        else
          v10 = ZwRequestPort(v4[1], (PPORT_MESSAGE)RequestMessage);
        v11 = v10;
        if ( v10 >= 0 )
        {
          if ( *v9 )
            memmove(*v9, &ReplyMessage[44], *(unsigned int *)(a1 + 48));
          v11 = *(_DWORD *)&ReplyMessage[40];
        }
        if ( *(_DWORD *)&RequestMessage[44] == 3 )
          return (unsigned int)ZwFreeVirtualMemory(*v4, (PVOID *)&RequestMessage[48], &RegionSize, 0x8000u);
        return v11;
      }
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}

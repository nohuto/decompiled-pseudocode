/*
 * XREFs of sub_1402037E8 @ 0x1402037E8
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x14041BBA0 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x14041E780 (ZwRequestPort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409CF0D0 @ 0x1409CF0D0 (sub_1409CF0D0.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402037E8(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int16 v4; // ax
  int v5; // ebx
  unsigned int v6; // eax
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  void *v9; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE RequestMessage[512]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE ReplyMessage[512]; // [rsp+238h] [rbp+130h] BYREF

  memset(RequestMessage, 0, sizeof(RequestMessage));
  memset(ReplyMessage, 0, sizeof(ReplyMessage));
  v2 = sub_140204738(*(_QWORD *)(a1 + 56));
  v3 = v2 + 784;
  if ( *(_QWORD *)(v2 + 792) )
  {
    v4 = *(_WORD *)(a1 + 36);
    *(_DWORD *)&ReplyMessage[40] = 0;
    v5 = *(_DWORD *)(a1 + 16);
    *(_WORD *)&RequestMessage[2] = v4 + 48;
    *(_WORD *)RequestMessage = v4 + 8;
    *(_WORD *)ReplyMessage = *(_WORD *)(a1 + 48);
    *(_WORD *)&ReplyMessage[2] = *(_WORD *)ReplyMessage + 40;
    *(_DWORD *)&RequestMessage[40] = *(_DWORD *)(a1 + 32);
    if ( v5 == 1 )
    {
      v6 = *(_DWORD *)(a1 + 36);
      *(_DWORD *)&RequestMessage[44] = 1;
      if ( v6 <= 0x1D0 )
      {
        memmove(&RequestMessage[48], (const void *)(a1 + 24), v6);
LABEL_5:
        if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
          v7 = ZwRequestWaitReplyPort(*(HANDLE *)(v3 + 8), (PPORT_MESSAGE)RequestMessage, (PPORT_MESSAGE)ReplyMessage);
        else
          v7 = ZwRequestPort(*(HANDLE *)(v3 + 8), (PPORT_MESSAGE)RequestMessage);
        v8 = v7;
        if ( v7 >= 0 )
        {
          v9 = *(void **)(a1 + 40);
          if ( v9 )
            memmove(v9, &ReplyMessage[44], *(unsigned int *)(a1 + 48));
          v8 = *(_DWORD *)&ReplyMessage[40];
        }
        if ( *(_DWORD *)&RequestMessage[44] == 3 )
        {
          RegionSize = 0LL;
          return (unsigned int)ZwFreeVirtualMemory(*(HANDLE *)v3, (PVOID *)&RequestMessage[48], &RegionSize, 0x8000u);
        }
        return v8;
      }
    }
    else if ( (unsigned int)(v5 - 4) <= 2 )
    {
      v11 = *(unsigned int *)(a1 + 36);
      v12 = *(const void **)(a1 + 24);
      if ( (unsigned int)v11 > 0x1D0 )
      {
        if ( (unsigned int)v11 > 0x1000 )
        {
          v14 = sub_1409CF0D0(*(HANDLE *)v3);
          v8 = v14;
          if ( v14 < 0 )
          {
            sub_1409CF1A0((unsigned int)v14);
            return v8;
          }
          v13 = 0LL;
          *(_DWORD *)&RequestMessage[44] = 3;
        }
        else
        {
          memmove(*(void **)(v3 + 64), v12, v11);
          v13 = *(_QWORD *)(v3 + 56);
          *(_DWORD *)&RequestMessage[44] = 2;
        }
        v5 = *(_DWORD *)(a1 + 16);
        *(_QWORD *)&RequestMessage[48] = v13;
        *(_DWORD *)RequestMessage = 3670032;
      }
      else
      {
        memmove(&RequestMessage[48], v12, v11);
        *(_DWORD *)&RequestMessage[44] = 1;
      }
      if ( (unsigned int)(v5 - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}

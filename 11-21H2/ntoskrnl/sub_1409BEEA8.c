/*
 * XREFs of sub_1409BEEA8 @ 0x1409BEEA8
 * Callers:
 *     sub_1409BF008 @ 0x1409BF008 (sub_1409BF008.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14041E4C0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409BEEA8(__int64 a1, WNF_STATE_NAME *a2)
{
  PVOID Buffer; // rdi
  NTSTATUS updated; // ebx
  ULONG v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  ULONG BufferSize; // [rsp+40h] [rbp-20h] BYREF
  ULONG ChangeStamp; // [rsp+44h] [rbp-1Ch] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-18h] BYREF

  StateName = *a2;
  Buffer = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6E6F6346u);
  if ( Buffer )
  {
    do
    {
      BufferSize = 4096;
      ChangeStamp = 0;
      updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
      if ( updated >= 0 )
      {
        v5 = BufferSize;
        v6 = 0;
        if ( (BufferSize & 7) != 0 )
          v5 = 0;
        BufferSize = v5;
        v7 = v5 >> 3;
        if ( (_DWORD)v7 )
        {
          while ( *((_DWORD *)Buffer + 2 * v6) != *(_DWORD *)a1 || *((_WORD *)Buffer + 4 * v6 + 2) != *(_WORD *)(a1 + 4) )
          {
            if ( ++v6 >= (unsigned int)v7 )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          if ( (unsigned __int64)v5 + 8 <= 0x1000 )
          {
            v5 += 8;
            *((_DWORD *)Buffer + 2 * v7) = *(_DWORD *)a1;
            *((_WORD *)Buffer + 4 * v7 + 2) = *(_WORD *)(a1 + 4);
            BufferSize = v5;
          }
        }
        updated = ZwUpdateWnfStateData(&StateName, Buffer, v5, 0LL, 0LL, ChangeStamp, 1u);
      }
    }
    while ( updated == -1073741823 );
    ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)updated;
}

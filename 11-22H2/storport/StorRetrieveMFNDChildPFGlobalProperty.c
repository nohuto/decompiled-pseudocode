/*
 * XREFs of StorRetrieveMFNDChildPFGlobalProperty @ 0x1C00ADC78
 * Callers:
 *     StorMFNDNameSpaceReadWrite @ 0x1C00AC15C (StorMFNDNameSpaceReadWrite.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorRetrieveMFNDChildPFGlobalProperty(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 Pool; // rax
  void *v5; // rdi
  _DWORD v6[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+88h] [rbp-20h]
  unsigned int v8; // [rsp+B0h] [rbp+8h] BYREF
  int v9; // [rsp+B8h] [rbp+10h]

  LOBYTE(v9) = a2;
  memset_0(v6, 0, 0x40uLL);
  v9 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_QWORD *)(a1 + 6032) )
    return 0LL;
  Pool = RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  v5 = (void *)Pool;
  if ( !Pool )
    return 3221225626LL;
  v6[0] = 10;
  v7 = v7 & 0xFFFFFF00 | 0xD2;
  result = StorSendMFNDCommand(a1, Pool, 0, 512, (__int64)v6);
  v8 = result;
  if ( (int)result < 0 )
  {
    StorMapMFNDErrorToNtStatus(v9, &v8);
    ExFreePoolWithTag(v5, 0x464D6152u);
    return v8;
  }
  else
  {
    *(_QWORD *)(a1 + 6032) = v5;
  }
  return result;
}

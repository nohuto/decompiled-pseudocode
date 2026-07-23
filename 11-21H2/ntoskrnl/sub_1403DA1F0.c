/*
 * XREFs of sub_1403DA1F0 @ 0x1403DA1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1409C89D0 @ 0x1409C89D0 (sub_1409C89D0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_1403DA1F0(__int64 a1)
{
  char v1; // bl
  __int64 Pool2; // rax
  __int64 v4; // rcx
  int v5; // eax
  _OWORD P[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( !byte_140C5B0D8 && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) != 4612 )
  {
    if ( byte_140D01540 )
    {
      if ( dword_140C5B0A0 >= (unsigned int)dword_140C09858 )
      {
        ++dword_140D04994;
        return v1;
      }
      byte_140D01540 = 0;
      if ( KeGetCurrentIrql() >= 2u )
      {
        Pool2 = ExAllocatePool2(64LL, 40LL, 538994003LL);
        v4 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 24) = Pool2;
          *(_QWORD *)(Pool2 + 16) = sub_1409C89D0;
          v5 = dword_140D04994;
          *(_QWORD *)v4 = 0LL;
          *(_DWORD *)(v4 + 32) = v5;
          *(_BYTE *)(v4 + 36) = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v4, DelayedWorkQueue);
        }
      }
      else
      {
        v7 = (unsigned int)dword_140D04994;
        memset(P, 0, sizeof(P));
        sub_1409C89D0(P);
      }
      dword_140D04994 = 0;
    }
    if ( dword_140C5B0A0 >= (unsigned int)dword_140C0985C )
    {
      byte_140D01540 = 1;
      dword_140D04994 = 1;
      return v1;
    }
  }
  return 1;
}

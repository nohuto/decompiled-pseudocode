/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x14066F3B0
 * Callers:
 *     sub_14066F248 @ 0x14066F248 (sub_14066F248.c)
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  __int64 Pool2; // rax
  int v4; // edx

  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    Pool2 = ExAllocatePool2(259LL, 24LL, 1818579782LL);
    v4 = 2;
  }
  else
  {
    ++dword_140CE1CD4;
    Pool2 = (__int64)ExpInterlockedPopEntrySList(&stru_140CE1CC0);
    if ( !Pool2 )
    {
      ++dword_140CE1CD8;
      Pool2 = sub_14042A5E0((unsigned int)dword_140CE1CE4, (unsigned int)dword_140CE1CEC);
    }
    v4 = 6;
  }
  if ( !Pool2 )
    return -1073741670;
  *(_DWORD *)(Pool2 + 4) = v4;
  *(_DWORD *)Pool2 = 1282433861;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *EcpList = (PECP_LIST)Pool2;
  return 0;
}

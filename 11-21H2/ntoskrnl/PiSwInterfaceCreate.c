/*
 * XREFs of PiSwInterfaceCreate @ 0x140763500
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 * Callees:
 *     PnpCopyDevPropertyArray @ 0x140764604 (PnpCopyDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     PiSwInterfaceFree @ 0x1409536B0 (PiSwInterfaceFree.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, int a2, int a3, PVOID *a4)
{
  __int64 Pool2; // rax
  int PWSTR; // ebx
  int v10; // r8d

  Pool2 = ExAllocatePool2(256LL, 40LL, 1466986064LL);
  *a4 = (PVOID)Pool2;
  if ( Pool2 )
  {
    PWSTR = PnpAllocatePWSTR(pszSrc);
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, *(_DWORD *)a4 + 32, (__int64)*a4 + 24);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *a4 )
  {
    PiSwInterfaceFree(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}

/*
 * XREFs of sub_140862728 @ 0x140862728
 * Callers:
 *     sub_140940408 @ 0x140940408 (sub_140940408.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_140862728(HANDLE KeyHandle)
{
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  char result; // al
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( sub_14067B838(KeyHandle, L"SystemSetupInProgress", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  if ( sub_14067B838(KeyHandle, L"OOBEInProgress", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  if ( v2 )
    goto LABEL_15;
  if ( !v3 || sub_14067B838(KeyHandle, L"PnpSetupInProgress", 0, &P) < 0 )
    goto LABEL_13;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  ExFreePoolWithTag(P, 0);
  if ( v4 )
LABEL_15:
    result = 1;
  else
LABEL_13:
    result = 0;
  byte_140C54E99 = v3 != 0;
  byte_140C54E98 = result;
  return result;
}

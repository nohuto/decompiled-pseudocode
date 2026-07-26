/*
 * XREFs of CopyKnobInformationToIoctl @ 0x1C013F7B8
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9C8 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyKnobInformationToIoctl(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 32) = (*(_DWORD *)(a2 + 32) & 0x40) != 0;
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 40);
  v3 = *(_DWORD *)(a2 + 36);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      *(_DWORD *)(a1 + 40) = 4;
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 40) = 3;
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 40) = 2;
      goto LABEL_11;
    }
    if ( v6 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 1;
      goto LABEL_11;
    }
  }
  *(_DWORD *)(a1 + 40) = 0;
LABEL_11:
  result = *(unsigned int *)(a2 + 32);
  if ( (result & 2) != 0 )
  {
    *(_DWORD *)(a1 + 36) = 0;
  }
  else
  {
    result = (unsigned int)((result & 4) != 0) + 1;
    *(_DWORD *)(a1 + 36) = result;
  }
  return result;
}

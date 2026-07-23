/*
 * XREFs of PiCreateUniqueServiceStateKey @ 0x140956084
 * Callers:
 *     PiCreateServiceStateKey @ 0x1408714F4 (PiCreateServiceStateKey.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     PiCreateServiceKeyUnderPath @ 0x140955E38 (PiCreateServiceKeyUnderPath.c)
 */

__int64 __fastcall PiCreateUniqueServiceStateKey(UNICODE_STRING *CreateOptions, __int64 a2, _QWORD *a3)
{
  void *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  if ( CreateOptions && CreateOptions->Buffer && CreateOptions->Length >= 2u && a3 )
  {
    v6 = PiCreateServiceKeyUnderPath(CreateOptions, (UNICODE_STRING *)&PiDriverRegKeyUniqueStateRoot, (__int64)a3, &v9);
    v5 = v9;
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a3 = v9;
      return v7;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v5 )
    ZwClose(v5);
  return v7;
}

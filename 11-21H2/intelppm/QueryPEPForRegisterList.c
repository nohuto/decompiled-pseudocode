/*
 * XREFs of QueryPEPForRegisterList @ 0x1C003355C
 * Callers:
 *     InitPkgIdleStateStats @ 0x1C0033330 (InitPkgIdleStateStats.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 */

__int64 __fastcall QueryPEPForRegisterList(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // esi
  __int64 Pool2; // rax
  void *v9; // rdi
  _OWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 1120);
  memset(v11, 0, sizeof(v11));
  v6 = PoFxProcessorNotification(v5, 46LL, v11);
  if ( v6 >= 0 )
  {
    v7 = DWORD2(v11[0]);
    if ( DWORD2(v11[0]) )
    {
      Pool2 = ExAllocatePool2(256LL, (unsigned int)(32 * DWORD2(v11[0]) + 16), 1919119952LL);
      v9 = (void *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 8) = v7;
        v6 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 46LL, Pool2);
        if ( v6 < 0 )
          ExFreePoolWithTag(v9, (ULONG)1919119952);
        else
          *a3 = v9;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v6;
}

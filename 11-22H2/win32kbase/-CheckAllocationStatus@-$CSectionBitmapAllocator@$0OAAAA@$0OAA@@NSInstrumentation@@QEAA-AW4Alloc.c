/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00D1B34
 * Callers:
 *     ?Free@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D1E9C (-Free@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?IsAllocationBusy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00D3344 (-IsAllocationBusy@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rdx

  v2 = a2;
  v3 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v3 || a2 >= v3 + 917504 )
    return 0LL;
  v4 = a2 & 0xFFF;
  v5 = ((a2 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
  if ( v4 == 3584 * ((v5 + (((unsigned __int64)(unsigned int)v4 - v5) >> 1)) >> 11) )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            ((v2 - ((unsigned int)a1[2] ^ *((_DWORD *)a1 + 2))) >> 12) + v4 / 0xE00) != 0);
  else
    return 3LL;
}

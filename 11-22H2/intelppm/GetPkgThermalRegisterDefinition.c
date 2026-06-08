/*
 * XREFs of GetPkgThermalRegisterDefinition @ 0x1C002E928
 * Callers:
 *     InitPkgThermalStats @ 0x1C002E690 (InitPkgThermalStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPkgThermalRegisterDefinition(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 Pool2; // rax
  unsigned int v4; // r8d
  __int64 v5; // r11
  _DWORD *v6; // r10
  __int64 v7; // rcx

  v1 = (unsigned __int8)byte_1C0016120;
  Pool2 = ExAllocatePool2(256LL, 32 * (unsigned int)(unsigned __int8)byte_1C0016120 + 16, 1919119952LL);
  v4 = 0;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = v1;
    if ( (_DWORD)v1 )
    {
      v5 = 0LL;
      v6 = (_DWORD *)(Pool2 + 32);
      do
      {
        *((_QWORD *)v6 - 1) = (unsigned int)dword_1C0016118;
        v7 = *(_QWORD *)&off_1C0016128[v5];
        v5 += 8LL;
        *((_QWORD *)v6 - 2) = v7;
        *v6 = LOBYTE(off_1C0016128[v5 - 4]);
        v6 += 8;
        *(v6 - 7) = *((unsigned __int8 *)&off_1C0016128[v5 - 3] - 1);
        *(v6 - 6) = *(_DWORD *)&off_1C0016128[v5 - 2];
        --v1;
      }
      while ( v1 );
    }
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}

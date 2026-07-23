/*
 * XREFs of sub_140A5B860 @ 0x140A5B860
 * Callers:
 *     DriverEntry @ 0x140A47010 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A5B860(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  int v2; // r10d
  __int64 result; // rax
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = *((_DWORD *)CurrentPrcb + 9);
  if ( !v2 && (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x4000) != 0 )
  {
    v4 = __readcr4();
    if ( (v4 & 0x800000) != 0 )
    {
      LOBYTE(byte_140E01841) = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x40000) == 0 )
        goto LABEL_8;
      LOBYTE(byte_140E01842) = byte_140E01842 | 1;
      LOBYTE(byte_140E01843) = 1;
    }
  }
  if ( !(_BYTE)byte_140E01841 )
    return 0LL;
LABEL_8:
  *((_QWORD *)CurrentPrcb + 4404) |= 0x400000000000uLL;
  v5 = *(_QWORD **)(a1 + 240);
  v6 = v5[466];
  v7 = v5[464];
  v8 = v5[465];
  if ( !v2 )
    v8 -= 8LL;
  *((_QWORD *)CurrentPrcb + 4820) = v8;
  result = v7;
  *((_QWORD *)CurrentPrcb + 4822) = v6;
  return result;
}

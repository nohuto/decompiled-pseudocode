/*
 * XREFs of sub_140753A88 @ 0x140753A88
 * Callers:
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140753A88(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v3 = a1;
  if ( a3 )
    *a3 = 0LL;
  v4 = 0LL;
  v5 = (unsigned __int64)&a1[2 * a2];
  if ( (unsigned __int64)a1 >= v5 )
  {
LABEL_10:
    if ( a3 )
      *a3 = v4;
    return 1LL;
  }
  else
  {
    while ( 1 )
    {
      v6 = *v3;
      if ( *v3 > 0x7FFFFFFEFFFFLL )
        return 0LL;
      v7 = v3[1];
      if ( !v7 )
        return 0LL;
      if ( v7 + v6 < v6 )
        return 0LL;
      if ( v7 + v6 - 1 > 0x7FFFFFFEFFFFLL )
        return 0LL;
      v8 = v4 + ((v7 + (*(_DWORD *)v3 & 0xFFF) + 4095LL) >> 12);
      if ( v8 < v4 )
        return 0LL;
      v3 += 2;
      v4 = v8;
      if ( (unsigned __int64)v3 >= v5 )
        goto LABEL_10;
    }
  }
}

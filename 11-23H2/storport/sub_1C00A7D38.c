/*
 * XREFs of sub_1C00A7D38 @ 0x1C00A7D38
 * Callers:
 *     sub_1C00AADD0 @ 0x1C00AADD0 (sub_1C00AADD0.c)
 * Callees:
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 */

__int64 __fastcall sub_1C00A7D38(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rcx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(v3 + 56) )
  {
    if ( !*(_BYTE *)(a1 + 4306) || (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x1000) != 0 )
    {
      v5 = sub_1C00A7954(a1, a3, a2, &P);
      v6 = P;
      v4 = v5;
      if ( v5 >= 0 )
      {
        if ( !P )
          return v4;
        *(_QWORD *)(v3 + 56) = *((_QWORD *)P + 2);
        *(_QWORD *)(v3 + 128) = v6[2];
      }
      if ( v6 )
        ExFreePoolWithTag(v6, 0x44436152u);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v4;
}

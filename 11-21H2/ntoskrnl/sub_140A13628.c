/*
 * XREFs of sub_140A13628 @ 0x140A13628
 * Callers:
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A1357C @ 0x140A1357C (sub_140A1357C.c)
 *     sub_140A179E0 @ 0x140A179E0 (sub_140A179E0.c)
 *     sub_140A18040 @ 0x140A18040 (sub_140A18040.c)
 */

__int64 __fastcall sub_140A13628(int a1)
{
  unsigned int v1; // edi
  unsigned __int64 i; // rbx
  __int16 v4; // [rsp+40h] [rbp+8h] BYREF
  __int16 v5; // [rsp+42h] [rbp+Ah]

  v5 = HIWORD(a1);
  v4 = 0;
  v1 = 0;
  if ( (int)sub_140A179E0(&v4, 0LL) >= 0 )
  {
    for ( i = 0LL; i < 0x3C; i += 12LL )
    {
      if ( (*(_DWORD *)((_BYTE *)&qword_140044210 + i + 8) & 0x1F) != 0
        && (int)sub_140A18040(&v4, *(unsigned __int16 *)((char *)&qword_140044210 + i + 4)) >= 0 )
      {
        v1 |= sub_140A1357C(*(_WORD *)((char *)&qword_140044210 + i + 4), &v4);
      }
    }
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbGuestTargetPlatformFlagsToRuntimePlatformFlags");
  }
  return v1;
}

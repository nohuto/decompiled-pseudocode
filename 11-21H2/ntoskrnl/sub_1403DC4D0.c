/*
 * XREFs of sub_1403DC4D0 @ 0x1403DC4D0
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     sub_1403DC578 @ 0x1403DC578 (sub_1403DC578.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

char __fastcall sub_1403DC4D0(__int64 a1)
{
  const char *v2; // rcx
  char *v3; // rax
  const char *v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = *(const char **)(a1 + 216);
  v7 = 0LL;
  v6 = 0LL;
  if ( !v2 || (v3 = strstr(v2, "SAFEBOOT:")) == 0LL )
  {
    v4 = *(const char **)(a1 + 216);
    if ( !v4 || (v3 = strstr(v4, "MININT")) == 0LL )
    {
      if ( (dword_140C2AF00 & 0x20000) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x1000) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)&xmmword_140D06920, 0xFFFFFBFFFFFFFFFFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x40000000000uLL);
      LOBYTE(v3) = sub_1403DC578();
      if ( !(_BYTE)v3 )
      {
        LOBYTE(v3) = (unsigned __int8)sub_1403BFE70((__int64)KeGetCurrentPrcb(), 0, (__int64)&v6, 0LL);
        if ( (dword_140C2AF00 & 5) == 0 )
        {
          v3 = *(char **)(a1 + 240);
          if ( *((_DWORD *)v3 + 875) )
          {
            LOBYTE(v3) = v6;
            if ( (v6 & 1) == 0 && !(_BYTE)byte_140E01841 )
            {
              if ( (dword_140C2AF00 & 0x200) != 0
                || (LOBYTE(v3) = (dword_140C2AF00 & 0x100) == 0, (((v6 & 0x204) == 4) & (unsigned __int8)v3) != 0) )
              {
                LOBYTE(v3) = 0;
                _InterlockedOr64((volatile signed __int64 *)&xmmword_140D06920, 0x20000000000uLL);
              }
            }
          }
        }
      }
    }
  }
  return (char)v3;
}

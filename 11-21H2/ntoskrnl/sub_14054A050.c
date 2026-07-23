/*
 * XREFs of sub_14054A050 @ 0x14054A050
 * Callers:
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 sub_14054A050()
{
  __int64 result; // rax
  unsigned int v1; // esi
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int128 v4; // [rsp+20h] [rbp-40h] BYREF
  __int64 v5; // [rsp+30h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp-8h]

  result = 0LL;
  v1 = 0;
  v8 = 0LL;
  v7 = 0LL;
  LODWORD(v9) = 0;
  v4 = 0LL;
  v5 = 0LL;
  LODWORD(v6) = 0;
  if ( (dword_140D0689C & 0x408) != 0 )
  {
    v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v7, 1, 0LL, 8LL);
    v3 = sub_14039DF90((PHYSICAL_ADDRESS *)&v4, 2, 0LL, 392LL);
    *v2 = 0LL;
    *(_DWORD *)v2 = 4;
    if ( (unsigned __int16)HvlInvokeHypercall(155) )
    {
      v1 = -1073741823;
    }
    else
    {
      xmmword_140CF7090 = *(_OWORD *)v3;
      xmmword_140CF70A0 = *((_OWORD *)v3 + 1);
      unk_140CF70B0 = *((_OWORD *)v3 + 2);
      qword_140CF70C0 = v3[6];
    }
    sub_14039D8F0((__int64)&v4);
    sub_14039D8F0((__int64)&v7);
    return v1;
  }
  return result;
}

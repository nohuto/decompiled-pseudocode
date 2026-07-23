/*
 * XREFs of sub_140A59E20 @ 0x140A59E20
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_14025E060 @ 0x14025E060 (sub_14025E060.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     sub_14057F9FC @ 0x14057F9FC (sub_14057F9FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A59E20(__int64 a1)
{
  ULONG_PTR v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 35248) = -1LL;
  v2 = sub_1403095B0((__int64)&qword_140C534C0, 0x40u);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 34176) = (__int64)(v2 << 25) >> 16;
    *(_DWORD *)(a1 + 33372) = dword_140C50738;
    v3 = (unsigned __int16)sub_14025E060(a1);
    v4 = sub_14030B860(64LL, 0x30D0uLL, 0x6D50694Du, (unsigned int)v3 | 0x80000000);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 3120) = 0;
      *v4 = v4 + 4;
      *((_DWORD *)v4 + 6) = 512;
      v4[1] = v4 + 519;
      v4[2] = v4 + 1031;
      v6 = qword_140C54F90 + 24512 * v3;
      *(_DWORD *)(a1 + 33364) = *(unsigned __int8 *)(v6 + 22716);
      *(_DWORD *)(a1 + 33368) = *(_DWORD *)(v6 + 22712);
      v7 = __rdtsc();
      if ( (unsigned int)sub_14026A574(
                           (__int64)(v5 + 1544),
                           ((_DWORD)v3 << byte_140C506CC) | (unsigned int)(v7 & (unsigned __int16)((1 << byte_140C506CD)
                                                                                                 - 1)),
                           8) )
      {
        result = 1LL;
        v5[1561] = *(_QWORD *)(120LL * (unsigned int)v3 + qword_140C506E0 + 112);
        *(_QWORD *)(a1 + 33592) = v5;
        return result;
      }
      ExFreePoolWithTag(v5, 0);
    }
    sub_14057F9FC(a1);
  }
  return 0LL;
}

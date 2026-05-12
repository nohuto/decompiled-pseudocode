/*
 * XREFs of sub_1C0076C14 @ 0x1C0076C14
 * Callers:
 *     sub_1C00ADC5C @ 0x1C00ADC5C (sub_1C00ADC5C.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00763C0 @ 0x1C00763C0 (sub_1C00763C0.c)
 */

void __fastcall sub_1C0076C14(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm1
  const wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r11
  int v11; // r10d
  __int64 v12; // r8
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rcx
  __int128 v15; // [rsp+80h] [rbp-48h] BYREF
  __int128 v16; // [rsp+90h] [rbp-38h] BYREF

  if ( byte_1C0093BE8 )
  {
    v7 = *(_OWORD *)(a1 + 5000);
    v8 = *(const wchar_t **)(a1 + 5016);
    v9 = *(_QWORD *)(a1 + 16);
    v16 = v7;
    v15 = 0LL;
    sub_1C0010EE0(v9, (__int64)&v15);
    if ( byte_1C0093A03 < 0 )
    {
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 8);
        v12 = (unsigned int)(*(_DWORD *)(v10 + 4) - 16);
      }
      else
      {
        v12 = 0LL;
        LOBYTE(v11) = 0;
      }
      v13 = (const wchar_t *)&unk_1C0082788;
      v14 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(a1 + 5952) )
        v14 = *(const wchar_t **)(a1 + 5952);
      if ( v8 )
        v13 = v8;
      sub_1C00763C0(
        (__int64)v14,
        (__int64)v13,
        v12,
        *(_DWORD *)(a1 + 56),
        (__int64)&v16,
        *((const wchar_t **)&v15 + 1),
        v13,
        v14,
        *(_DWORD *)(a1 + 5964),
        *(_DWORD *)(a1 + 5960),
        v11,
        v12,
        (v10 + 16) & -(__int64)(v10 != 0),
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}

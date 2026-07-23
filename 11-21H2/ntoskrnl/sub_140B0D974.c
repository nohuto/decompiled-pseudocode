/*
 * XREFs of sub_140B0D974 @ 0x140B0D974
 * Callers:
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E08C8 @ 0x1403E08C8 (sub_1403E08C8.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 *     sub_140B0DAC4 @ 0x140B0DAC4 (sub_140B0DAC4.c)
 */

char __fastcall sub_140B0D974(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rax
  __int16 *v4; // rbx
  unsigned int v5; // eax
  HANDLE v6; // rbx
  __int16 v8; // [rsp+30h] [rbp-58h] BYREF
  char v9; // [rsp+32h] [rbp-56h]
  char v10; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = 0;
  BaseAddress = 0LL;
  Handle = 0LL;
  dword_140C48C08 = 0;
  v9 = 0;
  if ( dword_140C15C70 == 1 )
  {
    v3 = sub_140B0DAC4(a1, a2, &Handle, &BaseAddress, v13);
    v4 = (__int16 *)v3;
    if ( v3 )
    {
      v8 = *(_WORD *)(v3 + 6);
      v5 = sub_1403E08C8((unsigned __int8 *)&v8, 0LL, 0x10u);
      dword_140C48C08 = (v5 < 0x80 ? 0x20000000 : 419430400) + (v5 << 16);
      v8 = *v4;
      dword_140C48C08 |= (unsigned int)sub_1403E08C8((unsigned __int8 *)&v8, 0LL, 0x10u) << 8;
      v8 = *(__int16 *)((char *)v4 + 3);
      dword_140C48C08 |= sub_1403E08C8((unsigned __int8 *)&v8, 0LL, 0x10u);
      v2 = 1;
      v10 = 1;
      v6 = Handle;
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      sub_1402D0930((__int64)v13, 0LL);
      ZwClose(v6);
    }
  }
  return v2;
}

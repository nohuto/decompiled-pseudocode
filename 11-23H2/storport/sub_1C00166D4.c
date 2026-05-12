/*
 * XREFs of sub_1C00166D4 @ 0x1C00166D4
 * Callers:
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0016800 @ 0x1C0016800 (sub_1C0016800.c)
 *     sub_1C0016980 @ 0x1C0016980 (sub_1C0016980.c)
 *     sub_1C0019218 @ 0x1C0019218 (sub_1C0019218.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003A87C @ 0x1C003A87C (sub_1C003A87C.c)
 */

__int64 __fastcall sub_1C00166D4(__int64 a1, int *a2, _BYTE *a3)
{
  char v3; // r13
  char v4; // bl
  bool v5; // bp
  __int64 v9; // r9
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ebx
  int v14; // eax
  bool v15; // zf
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-B8h] BYREF
  char Dst[112]; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v20[3]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(_BYTE *)(a1 + 106);
  v4 = 0;
  v5 = 0;
  if ( !v3 && (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
    return 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  v18 = a1;
  v10 = 0;
  v20[1] = v20;
  v20[0] = v20;
  v11 = 1LL;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4200) = MEMORY[0xFFFFF78000000014];
    if ( (unsigned int)sub_1C0007798(a1, 11) )
      sub_1C001A364(a1 + 336, 11LL, 0LL);
    v13 = *(_DWORD *)(a1 + 4760);
    v14 = sub_1C0016980(a1, v12, &v18);
    v11 = 1LL;
    v15 = v13 == *(_DWORD *)(a1 + 4760);
    v10 = v14;
    v4 = 1;
    v5 = !v15;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 4764) & 4) != 0 && (*(_DWORD *)(a1 + 4768) & 1) != 0 && *(_QWORD *)(a1 + 4816) )
        RtlSetBit((PRTL_BITMAP)(a1 + 4800), *(unsigned __int8 *)(*(_QWORD *)(a1 + 4776) + 8LL));
    }
    else
    {
      LOBYTE(v9) = v4;
      v17 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C003A87C)(a1, 1LL, &v18, v9);
      if ( !v4 )
        v10 = v17;
      if ( a2 )
        *a2 = v17;
      if ( a3 )
        *a3 = 1;
    }
  }
  if ( v10 >= 0 )
    sub_1C0016800(&v18, v11);
  sub_1C0019218(&v18, v11);
  return (unsigned int)v10;
}

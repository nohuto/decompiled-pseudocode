/*
 * XREFs of sub_140981070 @ 0x140981070
 * Callers:
 *     sub_1403B529C @ 0x1403B529C (sub_1403B529C.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1406EB270 @ 0x1406EB270 (sub_1406EB270.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 */

__int64 __fastcall sub_140981070(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  ULONG i; // edi
  __int64 v11; // r15
  __int16 v12; // cx
  _QWORD *v13; // rax
  __int64 v14; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-A0h]
  ULONG_PTR v16[10]; // [rsp+40h] [rbp-98h] BYREF

  v15 = a3;
  memset(v16, 0, sizeof(v16));
  v5 = *a1;
  v14 = 0LL;
  if ( _bittest16((const signed __int16 *)(v5 + 12), 0xBu) )
    return 1LL;
  v6 = a2 - *(_QWORD *)(v5 + 32);
  if ( (int)sub_1406F3884(a1, 3, (__int64)v16) < 0 )
    return 0LL;
  v8 = v16[0];
  v9 = (__int64)(a1 + 16);
  for ( i = 0; ; i += v11 )
  {
    if ( !v9 )
    {
      sub_1406F39F8(v16);
      *(_WORD *)(v5 + 12) |= 0x800u;
      return 1LL;
    }
    v11 = *(unsigned int *)(v9 + 44);
    v12 = *(_WORD *)(v9 + 32) >> 1;
    if ( (v12 & 4) == 0 && ((dword_140D06880 & 0x4000) != 0 || (dword_140D06880 & 0x8000) == 0 || (v12 & 2) == 0) )
      break;
LABEL_12:
    v9 = *(_QWORD *)(v9 + 16);
    v8 += v11 << 12;
  }
  if ( (int)sub_1406DDC90(v9, v8, i, v6, &v14) >= 0 )
  {
    v13 = (_QWORD *)v14;
    *(_DWORD *)(v14 + 64) = 0;
    *v13 = a2;
    *(_QWORD *)(v9 + 24) = v13;
    if ( v15 )
      RtlClearBits(*(PRTL_BITMAP *)(v15 + 40), i, *(_DWORD *)(v9 + 44));
    goto LABEL_12;
  }
  sub_1406F39F8(v16);
  sub_1406EB270(a1);
  return 0LL;
}

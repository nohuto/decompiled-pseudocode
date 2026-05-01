/*
 * XREFs of sub_180013784 @ 0x180013784
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     sub_1800013C0 @ 0x1800013C0 (sub_1800013C0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180013C10 @ 0x180013C10 (sub_180013C10.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_180013784(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+40h] [rbp-19h] BYREF
  int v13; // [rsp+44h] [rbp-15h] BYREF
  __int64 v14; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-9h] BYREF
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  int *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  sub_18001F1C4(a1 + 64);
  v4 = *(unsigned int *)(a1 + 112);
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 72) = 0;
  v5 = (v4 >> 9) & 1;
  RtlReleaseSRWLockExclusive(a1 + 64);
  v6 = MemUtilEmptyProcess(*(_QWORD *)(a1 + 40), 0LL, 0LL);
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 3) != 0 )
  {
    v9 = qword_180032018 & 3;
    if ( v9 == qword_180032018 )
    {
      v12 = v6;
      v13 = *(_DWORD *)(a1 + 80);
      v14 = a2;
      sub_1800013C0(v9, byte_18002A47E, v7, v8, (__int64)&v13, (__int64)&v14, (__int64)&v12);
    }
  }
  if ( (_DWORD)v5 )
  {
    v10 = MemUtilEmptyProcess(*(_QWORD *)(a1 + 40), 1LL, 0LL);
    if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 3) != 0 && (qword_180032018 & 3) == qword_180032018 )
    {
      v21 = 0;
      v18 = 0;
      v13 = v10;
      v12 = *(_DWORD *)(a1 + 80);
      v19 = &v13;
      v16 = &v12;
      v20 = 4;
      v17 = 4;
      sub_180001104((__int64)&dword_180032000, (unsigned __int8 *)dword_18002A55E, 0LL, 0LL, 4u, &v15);
    }
  }
  return sub_180013C10(a1);
}

/*
 * XREFs of sub_180025D00 @ 0x180025D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

ULONG __fastcall sub_180025D00(__int64 a1, int a2, _BYTE *a3, _BYTE *a4)
{
  ULONG result; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v19[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v21; // [rsp+F0h] [rbp-10h]
  int v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+FCh] [rbp-4h]
  int *v24; // [rsp+100h] [rbp+0h]
  __int64 v25; // [rsp+108h] [rbp+8h]
  __int64 v26; // [rsp+110h] [rbp+10h]
  __int64 v27; // [rsp+118h] [rbp+18h]
  int *v28; // [rsp+120h] [rbp+20h]
  __int64 v29; // [rsp+128h] [rbp+28h]
  _BYTE *v30; // [rsp+130h] [rbp+30h]
  int v31; // [rsp+138h] [rbp+38h]
  int v32; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v33; // [rsp+140h] [rbp+40h]
  int v34; // [rsp+148h] [rbp+48h]
  int v35; // [rsp+14Ch] [rbp+4Ch]

  result = sub_180024958(*(volatile signed __int64 **)(a1 + 112));
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v17 = a2;
      v9 = sub_1800230EC(a1 + 16);
      v10 = *(_QWORD *)(a1 + 112);
      v11 = v9;
      v18 = 1;
      if ( v10 )
        sub_180025C4C((_QWORD *)v10, _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 144), 0LL), v19);
      else
        v19[0] = 0;
      v12 = -1LL;
      if ( a4 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( a4[v13] );
        v14 = v13 + 1;
      }
      else
      {
        a4 = &unk_180128042;
        v14 = 1;
      }
      v33 = a4;
      v34 = v14;
      v35 = 0;
      if ( a3 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
        v16 = v15 + 1;
      }
      else
      {
        a3 = &unk_180128042;
        v16 = 1;
      }
      v31 = v16;
      v28 = &v17;
      v24 = &v18;
      v30 = a3;
      v32 = 0;
      v29 = 4LL;
      v26 = v11;
      v27 = 16LL;
      v25 = 4LL;
      do
        ++v12;
      while ( v19[v12] );
      v23 = 0;
      v22 = v12 + 1;
      v21 = v19;
      return sub_180001278((__int64)&dword_1801EA1C0, (unsigned __int8 *)dword_1801CCA81, 0LL, 0LL, 8u, &v20);
    }
  }
  return result;
}

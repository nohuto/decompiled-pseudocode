/*
 * XREFs of HamHostIdInitializeKey @ 0x180008400
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007A50 @ 0x180007A50 (sub_180007A50.c)
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 *     sub_180010B18 @ 0x180010B18 (sub_180010B18.c)
 *     memset @ 0x180016A5E (memset.c)
 *     sub_18001D088 @ 0x18001D088 (sub_18001D088.c)
 */

__int64 __fastcall HamHostIdInitializeKey(__int64 a1, void *a2, int a3, int a4, __int64 a5, char *a6)
{
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // r11d
  __int64 v14; // r8
  unsigned int v15; // r11d
  unsigned int v16; // r11d
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  if ( !(unsigned __int8)PsmIsValidKey() )
    return 3221225711LL;
  if ( !RtlValidSid(a2) )
    return 3221225712LL;
  if ( (unsigned int)v6 > 3 )
    return 3221225714LL;
  if ( a5 && (int)sub_18001D088(a5, 256LL, v17) < 0 )
    return 3221225715LL;
  memset(a6, 0, 0x418uLL);
  sub_180010A58(a6, 232LL, v11, a1);
  RtlCopySid(0x44u, a6 + 464, a2);
  if ( a5 )
  {
    sub_180007A50((_WORD *)a6 + 268, 256LL, a5);
    *((_DWORD *)a6 + 133) = a3;
    return v13;
  }
  else if ( (int)sub_180010B18(v12, 256LL) < 0 )
  {
    *((_WORD *)a6 + 268) = v15;
    result = v15;
    *((_DWORD *)a6 + 133) = a3;
  }
  else
  {
    sub_180010A58(a6 + 536, 256LL, v14, off_1800229E8[v6]);
    *((_DWORD *)a6 + 133) = a3;
    return v16;
  }
  return result;
}

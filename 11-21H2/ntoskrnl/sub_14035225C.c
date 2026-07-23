/*
 * XREFs of sub_14035225C @ 0x14035225C
 * Callers:
 *     sub_140352090 @ 0x140352090 (sub_140352090.c)
 * Callees:
 *     sub_14024D0D4 @ 0x14024D0D4 (sub_14024D0D4.c)
 *     sub_1403523C0 @ 0x1403523C0 (sub_1403523C0.c)
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 *     sub_140366DA8 @ 0x140366DA8 (sub_140366DA8.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14035225C(__int64 *a1, unsigned __int64 *a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v9; // ebx
  int v10; // ebp
  int v11; // edi
  unsigned int v12; // eax
  int v14; // edx
  __int64 v15; // rax
  _BYTE v16[80]; // [rsp+40h] [rbp-78h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( !a6 || a6 > (unsigned __int16)word_140D05000 )
    return 3221225713LL;
  v9 = a6 - 1;
  if ( (a3 & 0x2000) != 0 )
  {
    *a1 = 0LL;
    v10 = a5 & 1;
    if ( (a5 & 1) != 0 )
      v14 = (a5 & 0x20) != 0 ? 1 : 6;
    else
      v14 = 5;
    v15 = sub_14024D0D4(0LL, v14, *a2, v9);
    if ( !v15 )
      return 3221225495LL;
    *a1 = v15;
  }
  else
  {
    v10 = a5 & 1;
  }
  v11 = 0;
  if ( (a3 & 0x1000) != 0 )
  {
    v12 = a5 & 0xFFFFFFDF;
    if ( v10 )
      v12 = a5;
    v11 = sub_1403523C0((_DWORD)a1, (_DWORD)a2, a3, a4, v12, v9, 0LL, (__int64)v16);
    if ( v11 < 0 || (v11 = sub_1403525F0(v16), v11 < 0) )
    {
      if ( (a3 & 0x2000) != 0 )
        sub_140366DA8(a1, a2, 0x8000LL);
      *a1 = 0LL;
    }
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  return (unsigned int)v11;
}

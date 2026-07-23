/*
 * XREFs of sub_1407F2A20 @ 0x1407F2A20
 * Callers:
 *     sub_1407EDD60 @ 0x1407EDD60 (sub_1407EDD60.c)
 *     sub_1407F32E0 @ 0x1407F32E0 (sub_1407F32E0.c)
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 *     sub_14099CBC8 @ 0x14099CBC8 (sub_14099CBC8.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_1409A447C @ 0x1409A447C (sub_1409A447C.c)
 */

ULONG __fastcall sub_1407F2A20(char a1, unsigned int a2)
{
  ULONG result; // eax
  ULONG v5; // ebx
  int v6; // [rsp+20h] [rbp-30h] BYREF
  char v7; // [rsp+24h] [rbp-2Ch]
  __int16 v8; // [rsp+25h] [rbp-2Bh]
  char v9; // [rsp+27h] [rbp-29h]
  int v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+2Ch] [rbp-24h]
  int *v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-14h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  ULONG v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v18; // [rsp+8Ch] [rbp+3Ch]

  result = 0;
  v8 = 0;
  v9 = 0;
  v11 = 0;
  v14 = 0;
  v17 = 0;
  LOBYTE(v18) = 0;
  if ( byte_140C5AE3C )
  {
    result = RtlGetActiveConsoleId();
    v16 = result;
    v5 = result;
    if ( result != -1 )
    {
      if ( sub_1407F0F98() )
      {
        return sub_1409A447C(v5, a2);
      }
      else
      {
        LOBYTE(v17) = a1;
        v6 = 1;
        v12 = &v17;
        v18 = a2;
        v7 = 0;
        v10 = 8;
        v13 = 0;
        v15 = 0LL;
        return ((__int64 (__fastcall *)(__int64, int *, __int64, ULONG *))sub_1407F2AD0)(5LL, &v6, 1LL, &v16);
      }
    }
  }
  return result;
}

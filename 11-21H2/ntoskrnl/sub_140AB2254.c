/*
 * XREFs of sub_140AB2254 @ 0x140AB2254
 * Callers:
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB2608 @ 0x140AB2608 (sub_140AB2608.c)
 *     sub_140AB26C8 @ 0x140AB26C8 (sub_140AB26C8.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB304C @ 0x140AB304C (sub_140AB304C.c)
 * Callees:
 *     sub_140AB32D4 @ 0x140AB32D4 (sub_140AB32D4.c)
 */

__int64 __fastcall sub_140AB2254(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  unsigned __int8 v7; // cl
  _BYTE *v8; // rsi
  int v10; // edi
  __int64 v11; // r11
  unsigned __int64 v12; // rsi
  __int64 result; // rax

  v5 = 0LL;
  v6 = a1;
  v7 = *(_BYTE *)(a1 + 26);
  v8 = a4;
  *a4 = *(_BYTE *)(a2 + 16);
  v10 = a2;
  *a5 = 0;
  v11 = 0LL;
  if ( (v7 & 0xC0) == 0xC0 )
  {
    LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
    v11 = sub_140AB32D4(v6, a2, v7 & 7, (_DWORD)a4, 1);
    *v8 = 0;
    *a5 = 1;
  }
  else if ( (v7 & 7) == 4 )
  {
    v12 = *(unsigned __int8 *)(v6 + 27);
    if ( (*(_BYTE *)(v6 + 27) & 7) != 5 || v7 >= 0x40u )
    {
      LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
      v11 = *(_QWORD *)sub_140AB32D4(v6, a2, v12 & 7, (_DWORD)a4, 0);
    }
    if ( (v12 & 0x38) != 0x20 || (*(_BYTE *)(v6 + 25) & 2) != 0 )
    {
      LOBYTE(a4) = (*(_BYTE *)(v6 + 25) & 2) != 0;
      v5 = *(_QWORD *)sub_140AB32D4(v6, v10, ((unsigned int)v12 >> 3) & 7, (_DWORD)a4, 0) << (v12 >> 6);
    }
  }
  else if ( v7 >= 0x40u || (v7 & 7) != 5 || (*(_BYTE *)(v6 + 25) & 1) != 0 )
  {
    LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
    v11 = *(_QWORD *)sub_140AB32D4(v6, a2, v7 & 7, (_DWORD)a4, 0);
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) + *(unsigned __int8 *)(v6 + 24);
  }
  result = v11 + v5 + *(int *)(v6 + 28);
  *a3 = result;
  return result;
}

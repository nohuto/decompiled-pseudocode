/*
 * XREFs of sub_1409630B0 @ 0x1409630B0
 * Callers:
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057ADE8 @ 0x14057ADE8 (sub_14057ADE8.c)
 *     sub_140630340 @ 0x140630340 (sub_140630340.c)
 *     sub_140963090 @ 0x140963090 (sub_140963090.c)
 */

__int64 __fastcall sub_1409630B0(unsigned __int64 a1)
{
  __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  __int64 v5; // rax

  if ( sub_14057ADE8(*((_BYTE *)KeGetCurrentThread() + 562)) )
  {
    v2 = *(_QWORD *)qword_140D3CDC8;
    if ( (*(_BYTE *)(qword_140D3CDC8 + 8) & 1) != 0 && v2 )
      v2 ^= qword_140D3CDC8;
    v3 = *(_BYTE *)(qword_140D3CDC8 + 8) & 1;
    while ( v2 )
    {
      v4 = sub_140963090(a1, v2);
      if ( v4 >= 0 )
      {
        if ( v4 <= 0 )
          break;
        v5 = *(_QWORD *)(v2 + 8);
      }
      else
      {
        v5 = *(_QWORD *)v2;
      }
      if ( v3 && v5 )
        v2 ^= v5;
      else
        v2 = v5;
    }
    if ( v2 && *(_BYTE *)(v2 + 40) && dword_140D069BC )
    {
      _InterlockedIncrement(&dword_140D3CAD4);
      if ( *(_BYTE *)(v2 + 40) )
        sub_14042A5E0(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 48));
      _InterlockedDecrement(&dword_140D3CAD4);
    }
  }
  else
  {
    v2 = 0LL;
  }
  if ( (BYTE8(xmmword_140D06900[0]) & 0x40) != 0 )
    sub_140630340(a1);
  return v2;
}

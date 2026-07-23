/*
 * XREFs of sub_14075B8A0 @ 0x14075B8A0
 * Callers:
 *     sub_14075B7F4 @ 0x14075B7F4 (sub_14075B7F4.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_14075BFBC @ 0x14075BFBC (sub_14075BFBC.c)
 *     sub_14075E0C8 @ 0x14075E0C8 (sub_14075E0C8.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_14075B8A0(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  _DWORD *v12; // r9
  int v13; // eax
  _DWORD *v14; // r9
  int v16; // edx

  if ( (unsigned __int16)sub_14079499C() == 0x9801
    && (v8 = (unsigned int)sub_14079422C(a1, a2) / 0xC, v9 = sub_14075B988(a1, a2), v10 = 0, (v11 = v9) != 0) )
  {
    v12 = a4 + 4;
    if ( (a4[5] & 1) != 0 )
    {
      v13 = sub_14075E0C8(v9, v8, a3, v12);
      if ( v13 && *v14 < v8 - 1 )
        v16 = *(_DWORD *)(v11 + 12LL * (unsigned int)(*v14 + 1) + 8);
      else
        v16 = 0;
      a4[2] = v16;
      a4[1] = 0;
    }
    else
    {
      v13 = sub_14075BFBC(v9, v8, a3, v12);
    }
    if ( v13 )
      return *(unsigned int *)(v11 + 12LL * (unsigned int)*v14 + 8);
    return v10;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetFirstIndexedRecord");
    return 0LL;
  }
}

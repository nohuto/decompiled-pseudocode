/*
 * XREFs of sub_14035D00C @ 0x14035D00C
 * Callers:
 *     sub_14035CE74 @ 0x14035CE74 (sub_14035CE74.c)
 *     sub_140572094 @ 0x140572094 (sub_140572094.c)
 * Callees:
 *     sub_140291EB8 @ 0x140291EB8 (sub_140291EB8.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 */

__int64 __fastcall sub_14035D00C(__int64 a1, int a2, char a3, _DWORD *a4)
{
  unsigned int v4; // edi
  int v8; // eax
  _WORD *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v14[0] = 0LL;
  v15 = 0LL;
  if ( !a3 && (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v9 = *(_WORD **)(a1 + 552);
    v8 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 588);
    v9 = *(_WORD **)(a1 + 576);
  }
  if ( a4 )
    *a4 = v8;
  v10 = qword_140D088C0[a2];
  if ( sub_140291EB8(v9, v10) )
  {
    if ( (*(_DWORD *)(a1 + 116) & 8) == 0 || a3 )
    {
      sub_140344DD0(a1, (__int64)v14, &v15, v11);
      *(_DWORD *)(a1 + 588) = a2;
      *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v10 + 208);
      if ( !a3 )
      {
        *(_DWORD *)(a1 + 196) = a2;
        *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
      }
      sub_140292818(v10, a1);
      sub_14035D0F8(v12, v14[0], v15);
    }
    else
    {
      *(_DWORD *)(a1 + 196) = a2;
      *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}

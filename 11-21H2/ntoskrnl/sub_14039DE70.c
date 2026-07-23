/*
 * XREFs of sub_14039DE70 @ 0x14039DE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039DECC @ 0x14039DECC (sub_14039DECC.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_140549468 @ 0x140549468 (sub_140549468.c)
 *     sub_1405496F8 @ 0x1405496F8 (sub_1405496F8.c)
 */

__int64 __fastcall sub_14039DE70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  _BYTE *i; // rcx
  unsigned __int64 v11; // r8

  v4 = sub_14039DECC(a1, a2, a1, a4);
  v7 = 0LL;
  if ( v4 )
  {
    if ( ((dword_140D0688C >> 8) & 0xF) + 4 > 0xE || (dword_140D0689C & 0x80u) == 0 )
      return sub_1405496F8(v6);
    else
      return sub_140549468(v6);
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
    if ( !byte_140D05016 )
    {
      for ( i = &unk_140D0CBD3; ; i += 4 )
      {
        if ( (v8 & 1) != 0 )
          v7 |= 1LL << *(i - 2);
        v11 = v8 >> 1;
        if ( !v11 )
          break;
        if ( (v11 & 1) != 0 )
          v7 |= 1LL << *i;
        v8 = v11 >> 1;
        if ( !v8 )
          break;
      }
      v8 = v7;
    }
    return (unsigned __int16)HvlInvokeHypercall(65547LL, v5, v8) != 0 ? 0xC0000001 : 0;
  }
}

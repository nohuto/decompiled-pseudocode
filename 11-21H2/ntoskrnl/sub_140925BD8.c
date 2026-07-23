/*
 * XREFs of sub_140925BD8 @ 0x140925BD8
 * Callers:
 *     sub_14091C3F0 @ 0x14091C3F0 (sub_14091C3F0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     sub_1406580FC @ 0x1406580FC (sub_1406580FC.c)
 *     sub_140925A8C @ 0x140925A8C (sub_140925A8C.c)
 *     sub_140925B7C @ 0x140925B7C (sub_140925B7C.c)
 *     sub_140925CC0 @ 0x140925CC0 (sub_140925CC0.c)
 *     sub_140925D1C @ 0x140925D1C (sub_140925D1C.c)
 *     sub_140925D8C @ 0x140925D8C (sub_140925D8C.c)
 *     sub_140925DFC @ 0x140925DFC (sub_140925DFC.c)
 *     sub_140925E5C @ 0x140925E5C (sub_140925E5C.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 */

__int64 __fastcall sub_140925BD8(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  NTSTATUS v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 8) & 0x1C) == 0 )
  {
    v3 = *(_DWORD *)(a2 + 12);
    if ( v3 > 6 )
    {
      v10 = v3 - 7;
      if ( !v10 )
        return (unsigned int)sub_140925D8C();
      v11 = v10 - 1;
      if ( !v11 )
        return (unsigned int)sub_140925DFC();
      v12 = v11 - 1;
      if ( !v12 )
        return (unsigned int)sub_140925CC0();
      if ( v12 == 1 )
        return (unsigned int)sub_1406580FC(a1, a2);
    }
    else
    {
      if ( v3 == 6 )
        return (unsigned int)sub_140925D1C();
      v4 = v3 - 1;
      if ( !v4 )
        return (unsigned int)sub_140925A8C(a1, a2);
      v5 = v4 - 1;
      if ( !v5 )
      {
        KeyHandle = 0LL;
        v9 = sub_140925ED0(a1, a2 + 32, 0x10000LL, &KeyHandle);
        if ( v9 >= 0 )
        {
          v9 = ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
        return (unsigned int)v9;
      }
      v6 = v5 - 1;
      if ( !v6 || (v7 = v6 - 1) == 0 )
        return (unsigned int)sub_140925E5C();
      if ( v7 == 1 )
        return (unsigned int)sub_140925B7C(a1, (UNICODE_STRING *)a2);
    }
    return v2;
  }
  return 0LL;
}

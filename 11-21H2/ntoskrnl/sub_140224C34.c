/*
 * XREFs of sub_140224C34 @ 0x140224C34
 * Callers:
 *     PoNotifyVSyncChange @ 0x140224940 (PoNotifyVSyncChange.c)
 *     sub_1405D77A0 @ 0x1405D77A0 (sub_1405D77A0.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 *     sub_14098CB20 @ 0x14098CB20 (sub_14098CB20.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_140224CC0 @ 0x140224CC0 (sub_140224CC0.c)
 *     sub_140224CF8 @ 0x140224CF8 (sub_140224CF8.c)
 *     sub_140224D54 @ 0x140224D54 (sub_140224D54.c)
 *     sub_140224DF0 @ 0x140224DF0 (sub_140224DF0.c)
 *     sub_140224E64 @ 0x140224E64 (sub_140224E64.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 */

__int64 sub_140224C34()
{
  unsigned int v0; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  __int64 v4; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140C23414 && (!byte_140C1FB82 && byte_140C22451 || byte_140C1FB81) )
    v0 = dword_140D053E4;
  else
    v0 = sub_140224CC0();
  result = (unsigned int)dword_140C0B8AC;
  if ( v0 != dword_140C0B8AC )
  {
    if ( (unsigned int)sub_140224E64() )
    {
      v2 = 1;
      if ( v0 > dword_140C0B8AC )
      {
        dword_140C0B8AC = v0;
        _InterlockedOr(v5, 0);
      }
    }
    else
    {
      v2 = 0;
    }
    sub_140224DF0(0LL, v0);
    dword_140C0B8D0 = v0;
    v3 = sub_140224D54(v0);
    result = sub_140224CF8();
    if ( (_BYTE)result || v3 )
    {
      if ( v2 )
      {
        LOBYTE(v4) = 1;
        result = sub_1402F374C(v4);
      }
    }
    dword_140C0B8AC = v0;
  }
  return result;
}

/*
 * XREFs of sub_14051C22C @ 0x14051C22C
 * Callers:
 *     sub_14051C010 @ 0x14051C010 (sub_14051C010.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050F040 @ 0x14050F040 (sub_14050F040.c)
 *     WheaAttemptClearPoison @ 0x140A08BE0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall sub_14051C22C(__int64 *a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rcx

  *((_BYTE *)a1 + 13) &= 0xFu;
  v3 = *((_BYTE *)a1 + 14) == 0;
  v5 = *a1;
  if ( v3 )
  {
    LOBYTE(a3) = 1;
    result = WheaAttemptPhysicalPageOffline(v5 >> 12, 0LL, a3, 0LL);
  }
  else
  {
    result = WheaAttemptClearPoison(v5);
  }
  v7 = (unsigned int)result;
  if ( byte_140C4C450 )
  {
    v8 = 0;
    if ( (_DWORD)v7 || byte_140D01199 )
    {
      if ( byte_140D01199 )
      {
        v8 = 64;
        if ( !(_DWORD)v7 )
          v8 = -64;
      }
      if ( qword_140C4C518 )
      {
        LOBYTE(v7) = v8;
        sub_14042A5E0(a1, v7);
      }
    }
    v9 = a1[2];
    if ( v9 )
    {
      result = qword_140C4C508;
      if ( qword_140C4C508 )
        return sub_14042A5E0(v9, v7);
    }
    else
    {
      return sub_14050F040(2);
    }
  }
  return result;
}

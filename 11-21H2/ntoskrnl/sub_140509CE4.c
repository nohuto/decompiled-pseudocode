/*
 * XREFs of sub_140509CE4 @ 0x140509CE4
 * Callers:
 *     sub_140506410 @ 0x140506410 (sub_140506410.c)
 *     sub_14051CCC0 @ 0x14051CCC0 (sub_14051CCC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140509CE4(__int64 a1, __int16 a2)
{
  char v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  bool v5; // zf

  v2 = 0;
  if ( byte_140D016E8 )
  {
    v3 = HIWORD(*(_QWORD *)(a1 + 72));
    v4 = HIDWORD(*(_QWORD *)(a1 + 72)) & 0xFFF;
    if ( v4 == 176 )
    {
      if ( (v3 & 0xFFFFFFFFFFFFFFEFuLL) == 0 )
        return 1;
      v5 = v3 == 1;
    }
    else
    {
      if ( v4 != 150 )
        return v2;
      v5 = v3 == 0;
    }
    if ( v5 )
      return 1;
  }
  else if ( *(_DWORD *)(a1 + 36) == 4 && (a2 & 0xE800) == 0x800 )
  {
    return (*(_DWORD *)(a1 + 40) & 0x170000) == 0;
  }
  return v2;
}

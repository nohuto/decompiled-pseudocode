/*
 * XREFs of sub_14094C6A8 @ 0x14094C6A8
 * Callers:
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 * Callees:
 *     sub_140561730 @ 0x140561730 (sub_140561730.c)
 */

char __fastcall sub_14094C6A8(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  const wchar_t *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax

  result = byte_140C0DD4A;
  if ( (byte_140C0DD4A & 8) != 0 && (byte_140C0DD4A & 0x20) != 0 && (byte_140C0DD4A & 0x10) != 0 )
  {
    v6 = (const wchar_t *)&dword_140A416D4;
    v7 = a2 + 80;
    if ( a3 < 0 )
    {
      v8 = *(_QWORD *)(a2 + 152);
      if ( (*(_DWORD *)(a2 + 16) & 3) != 0 )
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return sub_140561730(
                 v7,
                 (const EVENT_DESCRIPTOR *)qword_14003B360,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
      else
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return sub_140561730(
                 v7,
                 (const EVENT_DESCRIPTOR *)qword_14003B3D0,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
    }
    else
    {
      if ( *(_QWORD *)(a2 + 152) )
        v6 = *(const wchar_t **)(a2 + 152);
      return sub_140561730(
               v7,
               (const EVENT_DESCRIPTOR *)qword_14003B640,
               (__int64)v6,
               *(const wchar_t **)(a1 + 8),
               *(const wchar_t **)(a2 + 32),
               v7,
               v6,
               *(_QWORD *)(a2 + 184),
               *(_DWORD *)(a2 + 176),
               a3);
    }
  }
  return result;
}

/*
 * XREFs of sub_140A11E1C @ 0x140A11E1C
 * Callers:
 *     sub_140A11CF0 @ 0x140A11CF0 (sub_140A11CF0.c)
 * Callees:
 *     sub_140A111BC @ 0x140A111BC (sub_140A111BC.c)
 *     sub_140A16BE4 @ 0x140A16BE4 (sub_140A16BE4.c)
 *     sub_140A16C68 @ 0x140A16C68 (sub_140A16C68.c)
 *     sub_140A16D28 @ 0x140A16D28 (sub_140A16D28.c)
 */

__int64 __fastcall sub_140A11E1C(
        __int64 a1,
        wchar_t *a2,
        int a3,
        __int16 *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  HANDLE KeyHandle; // [rsp+50h] [rbp-38h] BYREF
  PVOID P; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  *a9 = 0;
  if ( (int)sub_140A16C68(&KeyHandle, &P, a1) >= 0 )
  {
    while ( (!(unsigned int)sub_140A111BC(KeyHandle, a2, a3, a4, a5, a6, Buf1, Size, a9) || !*a9)
         && (int)sub_140A16D28(&KeyHandle, P) >= 0 )
      ;
  }
  sub_140A16BE4(P);
  return 1LL;
}

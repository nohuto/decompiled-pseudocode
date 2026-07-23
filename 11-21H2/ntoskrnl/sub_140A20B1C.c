/*
 * XREFs of sub_140A20B1C @ 0x140A20B1C
 * Callers:
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A20B84 @ 0x140A20B84 (sub_140A20B84.c)
 * Callees:
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A206C8 @ 0x140A206C8 (sub_140A206C8.c)
 */

__int64 __fastcall sub_140A20B1C(__int64 **a1, int a2)
{
  __int64 result; // rax
  _OWORD *v3; // r10
  int v4; // edx
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  result = sub_140A206C8(a1, a2, &v5);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(v5 + 48);
    if ( (v4 & 4) != 0 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        sub_1408138F0(3LL, L"Translated a DontSync entry with ID 0x%x", *(unsigned int *)(v5 + 32));
        return 3221225508LL;
      }
      else
      {
        *v3 = *(_OWORD *)(v5 + 16);
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}

/*
 * XREFs of sub_140676AC0 @ 0x140676AC0
 * Callers:
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_1409D1418 @ 0x1409D1418 (sub_1409D1418.c)
 *     sub_1409D3004 @ 0x1409D3004 (sub_1409D3004.c)
 * Callees:
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1406775C8 @ 0x1406775C8 (sub_1406775C8.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     sub_1406C85A0 @ 0x1406C85A0 (sub_1406C85A0.c)
 */

__int64 __fastcall sub_140676AC0(PSID Sid, wchar_t **a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  size_t v12; // rdi
  wchar_t *v13; // rax
  const wchar_t *v14; // r8
  NTSTATUS v16; // eax
  wchar_t *v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v18 = 0LL;
  if ( Sid && a2 )
  {
    v9 = sub_1406775C8(0LL, Sid, v17, a6, (__int64)&v18);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(unsigned int *)(v9 + 12);
    }
    else
    {
      if ( !v18 )
      {
        v16 = sub_1406C85A0(Sid);
        if ( v16 < 0 )
          return RtlNtStatusToDosError(v16);
        return v6;
      }
      v11 = 2LL;
    }
    v12 = 2 * v11 + 2;
    v13 = (wchar_t *)sub_14067757C(v12);
    *a2 = v13;
    if ( v13 )
    {
      v14 = (const wchar_t *)(v10 + 2);
      if ( !v10 )
        v14 = L"SA";
      wcscpy_s(v13, v12 >> 1, v14);
    }
    else
    {
      return 8;
    }
    return v6;
  }
  return 87LL;
}

/*
 * XREFs of sub_140522324 @ 0x140522324
 * Callers:
 *     sub_1403BE570 @ 0x1403BE570 (sub_1403BE570.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14052CA64 @ 0x14052CA64 (sub_14052CA64.c)
 *     sub_14052CB50 @ 0x14052CB50 (sub_14052CB50.c)
 */

__int64 __fastcall sub_140522324(__int64 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  unsigned int v5; // eax
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v5 = *(unsigned __int16 *)(a1 + 68);
  a2[5] = 1;
  v12 = 0LL;
  if ( v5 < 0x1FF )
    v5 = 511;
  a2[4] = v5;
  v7 = *(unsigned __int8 *)(a1 + 70);
  v13 = 0LL;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 3221225485LL;
      a2[6] = 10;
    }
    else
    {
      a2[6] = 100;
    }
  }
  else
  {
    a2[6] = 1000;
  }
  LOBYTE(a2) = *(_BYTE *)(a1 + 36);
  v10 = *(_QWORD *)(a1 + 40);
  *a3 = 1072;
  LOBYTE(a3) = 3;
  result = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, __int128 *))sub_14052CA64)(v10, a2, a3, &v12);
  if ( (int)result >= 0 )
  {
    sub_14042A5E0(v13, v11);
    sub_14052CB50(&v12);
    result = 0LL;
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
  }
  return result;
}

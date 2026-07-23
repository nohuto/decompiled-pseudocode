/*
 * XREFs of sub_140544754 @ 0x140544754
 * Callers:
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 * Callees:
 *     sub_1403B6B58 @ 0x1403B6B58 (sub_1403B6B58.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405448D4 @ 0x1405448D4 (sub_1405448D4.c)
 */

__int64 __fastcall sub_140544754(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rax
  __int64 v6; // rax
  signed __int32 v7[12]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v1 = 0LL;
  if ( byte_140D0688B )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedOr(v7, 0);
    v10 = 0LL;
    v11 = 0LL;
    v9 = 0LL;
    if ( (dword_140D0688C & 0x80000) != 0 && (dword_140D0688C & 2) == 0 )
    {
      v4 = sub_14042A5E0(a1, 1LL);
      if ( !v4 )
        return 3221225626LL;
      *((_QWORD *)CurrentPrcb + 4321) = v4;
    }
    if ( (dword_140D0688C & 2) == 0 && (dword_140D0688C & 0x8000) != 0 )
    {
      v6 = sub_14042A5E0(a1, 1LL);
      if ( v6 )
        *((_QWORD *)CurrentPrcb + 4375) = v6;
    }
    if ( (dword_140D068B8 & 0x10) != 0 )
    {
      v8 = 0LL;
      if ( (int)sub_1405448D4(2LL, &v8, &v9) >= 0 )
        v1 = sub_14042A5E0(v9, 1LL);
      *((_QWORD *)CurrentPrcb + 4314) = v1;
    }
    sub_1403B6B58(0);
  }
  return 0LL;
}

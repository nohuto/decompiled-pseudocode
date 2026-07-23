/*
 * XREFs of sub_140394080 @ 0x140394080
 * Callers:
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 * Callees:
 *     sub_1402378F8 @ 0x1402378F8 (sub_1402378F8.c)
 *     sub_140237E3C @ 0x140237E3C (sub_140237E3C.c)
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140394080(_SLIST_HEADER *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  PSLIST_ENTRY v7; // rax
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v12; // xmm1
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v14; // [rsp+40h] [rbp-29h]
  __int128 v15; // [rsp+50h] [rbp-19h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  _OWORD v17[3]; // [rsp+70h] [rbp+7h] BYREF

  v4 = 0;
  memset(v17, 0, sizeof(v17));
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v14 = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 586) != 1 || *((_QWORD *)KeGetCurrentThread() + 23) == a1[411].Region )
  {
    sub_14030D5C0(a1[411].Region, 0LL, (__int64)v17, a4);
    v4 = 2;
    v7 = sub_1402378F8((__int64)a1);
    v8 = (__int64)v7;
    if ( v7 )
    {
      v9 = *a2;
      BugCheckParameter3[0] = (ULONG_PTR)a1;
      v15 = v9;
      v10 = a2[1];
      BugCheckParameter3[1] = (ULONG_PTR)a2;
      *(_QWORD *)&v14 = v7;
      v16 = v10;
      if ( (int)ntoskrnl_7((ULONG_PTR)sub_140391B10, (ULONG_PTR)BugCheckParameter3, 0x2000, 0, 0LL) < 0 )
      {
        sub_140237E3C(a1, v8);
        v4 = 3;
      }
      else if ( DWORD2(v14) )
      {
        v4 = 6;
      }
      else
      {
        v12 = v16;
        *a2 = v15;
        a2[1] = v12;
      }
    }
    sub_1402D0930((__int64)v17, 0LL);
  }
  return v4 >> 2;
}

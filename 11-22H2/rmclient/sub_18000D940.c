/*
 * XREFs of sub_18000D940 @ 0x18000D940
 * Callers:
 *     sub_18000DCE0 @ 0x18000DCE0 (sub_18000DCE0.c)
 *     sub_18000FAEC @ 0x18000FAEC (sub_18000FAEC.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000D168 @ 0x18000D168 (sub_18000D168.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 */

bool __fastcall sub_18000D940(RTL_SRWLOCK *a1)
{
  DWORD LastError; // eax
  bool v3; // zf
  __int64 v4; // rsi
  __int64 Ptr; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+38h] [rbp+10h] BYREF
  DWORD v9; // [rsp+3Ch] [rbp+14h]

  if ( !a1[3].Ptr )
  {
    v8 = 0;
    LastError = GetLastError();
    v3 = a1[3].Ptr == 0LL;
    v9 = LastError;
    if ( v3 )
    {
      if ( !a1[2].Ptr )
      {
        Ptr = (__int64)a1[1].Ptr;
        v7 = 0LL;
        if ( (int)sub_18000D3CC(Ptr, &v7) >= 0 && !a1[2].Ptr )
          a1[2].Ptr = v7;
      }
      v4 = ((__int64)a1[2].Ptr + 32) & -(__int64)(a1[2].Ptr != 0LL);
    }
    else
    {
      v4 = 0LL;
    }
    AcquireSRWLockExclusive(a1 + 4);
    v3 = a1[3].Ptr == 0LL;
    v7 = a1 + 4;
    if ( v3 )
      a1[3].Ptr = (PVOID)v4;
    sub_18000CE58(&v7);
    sub_18000D168((__int64)&v8);
  }
  return a1[3].Ptr != 0LL;
}

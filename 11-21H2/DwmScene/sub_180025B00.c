/*
 * XREFs of sub_180025B00 @ 0x180025B00
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 *     sub_180022F90 @ 0x180022F90 (sub_180022F90.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180025B00(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD pExceptionObject[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)a2 || (result = *((_QWORD *)a2 + 1)) != 0 )
  {
    v5 = (_QWORD *)o__aligned_malloc(160LL, 8LL);
    v6 = (__int64)v5;
    if ( !v5 )
    {
      sub_180022F90(pExceptionObject);
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    v5[19] = 127LL;
    v9 = *a2;
    v5[17] = 23LL;
    v5[18] = 0x1900000000LL;
    memset(v5, 0, 0x81uLL);
    sub_180022920((unsigned __int8 *)&v9, 0x10uLL, v6);
    *(_WORD *)(v6 + 22) = 46;
    v8 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v6;
    if ( v8 )
    {
      o__aligned_free(v8, v7);
      v6 = *(_QWORD *)(a1 + 112);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 144), 0LL);
    return sub_180025C4C((void *)v6);
  }
  return result;
}

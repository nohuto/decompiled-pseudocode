/*
 * XREFs of sub_180047A84 @ 0x180047A84
 * Callers:
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_180047C3C @ 0x180047C3C (sub_180047C3C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180047A84(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  volatile __int32 *v5; // rax
  __int64 v6; // r8
  __int32 v7; // r9d
  int v8; // eax
  _DWORD *v9; // rdx
  _QWORD *v10; // rcx
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  v2 = **(_QWORD ***)(a1 + 88);
  result = 0LL;
  while ( !*((_BYTE *)v2 + 25) )
  {
    v13 = v2[8] + 76LL;
    v11 = 1;
    sub_180030724(&v11);
    v5 = (volatile __int32 *)sub_18001DE70(v4);
    while ( _InterlockedExchange(v5, v7) )
      ;
    sub_180047C3C(a1, v6);
    v12 = 0;
    sub_18003070C(v13);
    v8 = sub_180030718(&v12);
    *v9 = v8;
    result = v2[2];
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = v2[1]; !*(_BYTE *)(result + 25) && v2 == *(_QWORD **)(result + 16); result = *(_QWORD *)(result + 8) )
        v2 = (_QWORD *)result;
      v2 = (_QWORD *)result;
    }
    else
    {
      v2 = (_QWORD *)v2[2];
      v10 = *(_QWORD **)result;
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          v2 = v10;
          result = *v10;
          v10 = (_QWORD *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  return result;
}

/*
 * XREFs of sub_18000FA24 @ 0x18000FA24
 * Callers:
 *     sub_18000FAEC @ 0x18000FAEC (sub_18000FAEC.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000FBE4 @ 0x18000FBE4 (sub_18000FBE4.c)
 *     sub_18000FC1C @ 0x18000FC1C (sub_18000FC1C.c)
 *     sub_18000FC54 @ 0x18000FC54 (sub_18000FC54.c)
 */

char __fastcall sub_18000FA24(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v9; // eax
  char v10; // bl
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 == 254 )
  {
    sub_18000FC54((PSRWLOCK)a1);
    return 1;
  }
  else if ( a3 < 0xC8 || (int)a3 >= 256 && a3 < 0x200 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)a1);
    v11 = (RTL_SRWLOCK *)a1;
    if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
    {
      sub_18000FC1C(a1 + 8, a3, a2);
      v10 = *(_BYTE *)(a1 + 64);
    }
    else
    {
      v10 = sub_18000FBE4(a1 + 72, a3, a2, a4, v11);
    }
    sub_18000CE58(&v11);
    return v10;
  }
  else
  {
    return 0;
  }
}

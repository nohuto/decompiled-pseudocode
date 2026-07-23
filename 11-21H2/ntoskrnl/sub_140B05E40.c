/*
 * XREFs of sub_140B05E40 @ 0x140B05E40
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140246420 @ 0x140246420 (sub_140246420.c)
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 *     sub_140B1A054 @ 0x140B1A054 (sub_140B1A054.c)
 *     sub_140B1A80C @ 0x140B1A80C (sub_140B1A80C.c)
 *     sub_140B1D5F4 @ 0x140B1D5F4 (sub_140B1D5F4.c)
 *     sub_140B252DC @ 0x140B252DC (sub_140B252DC.c)
 *     sub_140B2F9C4 @ 0x140B2F9C4 (sub_140B2F9C4.c)
 */

__int64 __fastcall sub_140B05E40(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rdi
  unsigned __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // rbp
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int16 *j; // rdi
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  __int16 v20; // si
  _QWORD *v21; // rcx
  char v22; // [rsp+30h] [rbp-78h] BYREF
  char v23; // [rsp+38h] [rbp-70h] BYREF

  v1 = qword_140C54120;
  v3 = sub_14026CF08(12);
  if ( !(unsigned int)sub_1403C289C(v3, v1, 0x8000000000uLL) )
    return 0LL;
  v4 = v1 + 0x7FFFFFFFFFLL;
  v5 = (unsigned __int64 *)&v23;
  v6 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v1;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  sub_140B1D5F4((unsigned int)&qword_140C51968, v1, v4, (unsigned int)&v22, 3);
  v7 = qword_140C51970;
  v8 = (_DWORD *)((((unsigned __int64)qword_140C51970 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < qword_140C51968; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)sub_140246420(5, v7, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_140C51968, i, 0x8000uLL);
    }
    v7 += 4096LL;
    v8 += 2;
  }
  qword_140C51968 = i;
  v10 = sub_14026CF08(11);
  if ( !(unsigned int)sub_1403C289C(v10, v11, 0x2000000000uLL) )
    return 0LL;
  memset(&dword_140C4F510, 0, 0xC8uLL);
  qword_140C4F548 = 8LL;
  qword_140C4F558 = (__int64)&qword_140C4F550;
  qword_140C4F550 = (__int64)&qword_140C4F550;
  qword_140C4F5A0 = (__int64)sub_1403DEB90;
  qword_140C4F540 = -1LL;
  qword_140C4F5D0 = -1LL;
  qword_140C4F518 = 0LL;
  qword_140C4F520 = 0LL;
  dword_140C4F514 = 1;
  qword_140C4F560 = 0LL;
  dword_140C4F584 = 0;
  word_140C4F580 = 0;
  dword_140C4F588 = 275;
  qword_140C4F5A8 = (__int64)&dword_140C4F510;
  qword_140C4F5C0 = 0LL;
  qword_140C4F598 = 0LL;
  qword_140C4F4E0 = 0LL;
  qword_140C4F4B8 = (__int64)&qword_140C4F4B0;
  qword_140C4F4B0 = (__int64)&qword_140C4F4B0;
  if ( dword_140D68158 != -1 )
  {
    v13 = (unsigned __int16 *)&unk_140C298A0;
    v14 = (unsigned __int16 *)((char *)&unk_140C298A0 + 2 * (((unsigned __int64)(unsigned int)dword_140D68158 - 2) >> 1));
    if ( &unk_140C298A0 < (_UNKNOWN *)v14 )
    {
      v15 = 0x100002601LL;
      do
      {
        v16 = *v13;
        if ( (unsigned __int16)v16 <= 0x20u && _bittest64(&v15, v16) || (_WORD)v16 == 12288 )
        {
          j = v13;
        }
        else
        {
          if ( (_DWORD)v16 == 42 )
          {
            byte_140C4F4A9 = 1;
            break;
          }
          for ( j = v13; j < v14; ++j )
          {
            v18 = *j;
            if ( (unsigned __int16)v18 <= 0x20u && _bittest64(&v15, v18) )
              break;
            if ( (_WORD)v18 == 12288 )
              break;
          }
          v19 = sub_1402828F0(64, 0x20uLL, 0x704C6D4Du);
          if ( !v19 )
            break;
          v20 = 2 * (j - v13);
          v19[3] = v13;
          *((_WORD *)v19 + 8) = v20;
          *((_WORD *)v19 + 9) = v20;
          v21 = (_QWORD *)qword_140C4F4B8;
          if ( *(__int64 **)qword_140C4F4B8 != &qword_140C4F4B0 )
            __fastfail(3u);
          *v19 = &qword_140C4F4B0;
          v19[1] = v21;
          v15 = 0x100002601LL;
          *v21 = v19;
          qword_140C4F4B8 = (__int64)v19;
        }
        v13 = j + 1;
      }
      while ( j + 1 < v14 );
    }
  }
  BugCheckParameter3 = 0LL;
  if ( !(unsigned int)sub_140B1A054(a1) )
    return 0LL;
  if ( !(unsigned int)sub_140B1A80C(a1) )
    return 0LL;
  sub_140B252DC(
    *(_QWORD *)(qword_140C4F4D0 + 48),
    *(_QWORD *)(qword_140C4F4D0 + 48) + *(unsigned int *)(qword_140C4F4D0 + 64));
  if ( !(unsigned int)sub_140B04F8C(a1) || !(unsigned int)sub_140B2F9C4() )
    return 0LL;
  sub_140B0DBD4(a1);
  result = 1LL;
  qword_140C4F4C8 = (__int64)&qword_140C4F4C0;
  qword_140C4F4C0 = &qword_140C4F4C0;
  return result;
}

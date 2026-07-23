/*
 * XREFs of sub_140AF968C @ 0x140AF968C
 * Callers:
 *     sub_140AF9204 @ 0x140AF9204 (sub_140AF9204.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 *     sub_140AFA228 @ 0x140AFA228 (sub_140AFA228.c)
 *     sub_140AFA274 @ 0x140AFA274 (sub_140AFA274.c)
 *     sub_140AFA7A8 @ 0x140AFA7A8 (sub_140AFA7A8.c)
 *     sub_140AFA864 @ 0x140AFA864 (sub_140AFA864.c)
 *     sub_140AFAB24 @ 0x140AFAB24 (sub_140AFAB24.c)
 *     sub_140B4C634 @ 0x140B4C634 (sub_140B4C634.c)
 */

__int64 __fastcall sub_140AF968C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  const void *v4; // rdx
  unsigned int v5; // eax
  size_t v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !byte_140C4BFE2 )
  {
    result = sub_140AF9A94();
    if ( (int)result < 0 )
      return result;
    v3 = sub_140213A40(a1, 1346584902, 0, 0);
    v4 = (const void *)v3;
    if ( !v3 )
      return 3221226021LL;
    v5 = *(_DWORD *)(v3 + 4);
    v6 = 276LL;
    if ( v5 < 0x114 )
      v6 = v5;
    memmove(&unk_140C4C020, v4, v6);
    sub_140AFAB24(&unk_140C4C020, a1);
    sub_140AFA864(&unk_140C4C020);
    if ( (dword_140C4C090 & 0x40000) != 0 )
      byte_140C4E840 = 1;
    if ( (dword_140C4C090 & 0x80000) != 0 )
      byte_140D011A0 = 1;
    sub_140AFA7A8(a1);
    sub_140AFA274(a1);
    LODWORD(v16) = 0;
    qword_140C4ACF8 = sub_140213A40(a1, 1413565768, 0, 0);
    if ( qword_140C4ACF8 )
    {
      if ( qword_140C4ACC8 )
      {
        if ( (int)sub_140B4C634(v7, 0LL, 0LL, &v16) >= 0 )
        {
          v12 = sub_1403BF104(v16, 1u);
          v14 = v12;
          if ( v12 )
          {
            if ( (int)sub_140B4C634(v13, v12, (unsigned int)v16, &v16) >= 0 )
              qword_140C4ACF0 = v14;
          }
        }
      }
    }
    qword_140C54C40 = 0LL;
    v8 = sub_140213A40(a1, 1414808656, 0, 0);
    v9 = v8;
    if ( v8 )
    {
      v15 = *(unsigned __int8 *)(v8 + 36);
      if ( *(unsigned int *)(v9 + 4) >= (unsigned __int64)*(unsigned int *)(v9 + 40) + 2 * v15 )
      {
        qword_140C54C48 = sub_1403BF104(136 * (int)v15, 1u);
        if ( qword_140C54C48 )
          qword_140C54C40 = v9;
      }
    }
    v10 = sub_140213A40(a1, 1413824855, 0, 0);
    if ( v10 )
      dword_140C4C200 = *(_DWORD *)(v10 + 36);
    if ( !qword_140C4C138 )
    {
      v16 = 0x100000LL;
      v11 = (void *)sub_140AF9E94(a1, &v16, 1LL, 0LL);
      qword_140C4C138 = v11;
      if ( v11 )
        qword_140C4C140 = sub_1403BF3B8((__int64)v11, 1LL, 1u, 0LL, 4u);
    }
    if ( (dword_140C4C090 & 3) == 0 )
      qword_140C4C000 = sub_1403BF3B8((__int64)qword_140C4C138, 1LL, 1u, 0LL, 4u);
    byte_140C4BFE2 = 1;
    qword_140C02188 = (__int64)sub_140372810;
    qword_140C02178 = (__int64)sub_140213A20;
    qword_140C02180 = (__int64)_misaligned_access;
    sub_140AFA228(a1);
  }
  return 0LL;
}

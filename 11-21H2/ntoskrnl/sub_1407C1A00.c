/*
 * XREFs of sub_1407C1A00 @ 0x1407C1A00
 * Callers:
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 * Callees:
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407D557C @ 0x1407D557C (sub_1407D557C.c)
 */

__int64 __fastcall sub_1407C1A00(__int64 a1, void *a2, size_t a3, int a4, char a5)
{
  void *v6; // rdi
  PVOID v9; // rax
  unsigned int v10; // edx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-88h] BYREF
  __int64 v13; // [rsp+38h] [rbp-80h] BYREF
  __int64 v14; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]
  char *v18; // [rsp+80h] [rbp-38h]
  __int64 v19; // [rsp+88h] [rbp-30h]
  __int64 *v20; // [rsp+90h] [rbp-28h]
  __int64 v21; // [rsp+98h] [rbp-20h]

  *(_QWORD *)a1 = a2;
  v6 = a2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !*((_QWORD *)&xmmword_140C490E0 + 1) || !a4 && (unsigned __int8)sub_1407D557C(a2) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 8) = v6;
    return 0LL;
  }
  if ( (unsigned int)dword_140C03868 > 5 && (byte_140C03878 & 4) != 0 && (qword_140C03880 & 4) == qword_140C03880 )
  {
    v13 = 1LL;
    v16 = &v13;
    v10 = a3;
    v12 = a5;
    v18 = &v12;
    v17 = 8LL;
    v19 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v11 = -1;
      if ( (_DWORD)a3 )
      {
        do
        {
          ++v11;
          v10 >>= 1;
        }
        while ( v10 );
      }
      v10 = 1 << (v11 + 1);
    }
    v14 = v10;
    v21 = 8LL;
    v20 = &v14;
    sub_1402A1A20((__int64)&dword_140C03868, (unsigned __int8 *)&dword_14002988C, a3, 5u, &v15);
  }
  if ( a3 <= 0x40 )
  {
    v6 = (void *)(a1 + 17);
    memset((void *)(a1 + 17), 0, a3);
    goto LABEL_10;
  }
  if ( a3 <= 0x1000 )
  {
    ++dword_140CE2414;
    v6 = ExpInterlockedPopEntrySList(&Lookaside);
    if ( v6
      || (++dword_140CE2418,
          (v6 = (void *)sub_14042A5E0((unsigned int)dword_140CE2424, (unsigned int)dword_140CE242C)) != 0LL) )
    {
      memset(v6, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_10;
    }
  }
  v9 = sub_140367AF0(a1, a3, 0x42424D43u);
  v6 = v9;
  if ( v9 )
  {
    memset(v9, 0, a3);
    goto LABEL_10;
  }
  return 3221225626LL;
}

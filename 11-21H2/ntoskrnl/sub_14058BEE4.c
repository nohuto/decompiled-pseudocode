/*
 * XREFs of sub_14058BEE4 @ 0x14058BEE4
 * Callers:
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 *     sub_14053B3F8 @ 0x14053B3F8 (sub_14053B3F8.c)
 *     sub_14058A4E8 @ 0x14058A4E8 (sub_14058A4E8.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058C2E4 @ 0x14058C2E4 (sub_14058C2E4.c)
 */

__int64 __fastcall sub_14058BEE4(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r15d
  unsigned __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 >= qword_140C592E8 )
      v6 = 0LL;
    else
      v6 = qword_140C592E8 - a2;
    v7 = 0;
  }
  else
  {
    v7 = 32;
    v6 = 0LL;
  }
  v8 = 1000LL * *(_QWORD *)(a1 + 16720) / qword_140C590D0;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 1696);
    v10 = v9;
    if ( v8 * (qword_140C4F118 / 0x3E8uLL) <= v9 )
      v10 = v8 * (qword_140C4F118 / 0x3E8uLL);
    if ( v10 )
    {
      v11 = v9 - v10;
      if ( v11 < 0x100000 )
        v11 = 0x100000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a2 )
          {
            if ( qword_140C592E8 <= v6 )
              return v2;
          }
          else
          {
            if ( !v7 || qword_140C592E8 < 9 * (qword_140C593D8 / 0xAuLL) )
              return v2;
            --v7;
          }
          if ( !(unsigned int)sub_14058C2E4() || *(_QWORD *)(a1 + 1696) <= v11 )
            return v2;
          if ( (++v3 & 0x3F) == 0 )
          {
            sub_140393EC0(a1, 0);
            if ( v3 >= 0x80 )
              sub_14053B3F8(0LL);
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
          }
          if ( *(_QWORD *)(a1 + 1704) == a1 + 1704 )
            break;
          if ( (unsigned int)sub_14058A4E8(a1) )
            goto LABEL_33;
        }
        if ( *(_QWORD *)(a1 + 1720) == a1 + 1720 )
        {
          if ( *(_DWORD *)(a1 + 108) || !(unsigned int)sub_14053B3F8(0LL) )
            return v2;
        }
        else if ( (int)sub_14058A6D4(a1) >= 0 )
        {
LABEL_33:
          v2 = 1;
        }
      }
    }
  }
  return 0LL;
}

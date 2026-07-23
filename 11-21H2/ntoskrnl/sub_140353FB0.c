/*
 * XREFs of sub_140353FB0 @ 0x140353FB0
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     sub_14022F96C @ 0x14022F96C (sub_14022F96C.c)
 *     sub_14022F99C @ 0x14022F99C (sub_14022F99C.c)
 *     sub_14022FA04 @ 0x14022FA04 (sub_14022FA04.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_14030A3C0 @ 0x14030A3C0 (sub_14030A3C0.c)
 *     sub_1403542B8 @ 0x1403542B8 (sub_1403542B8.c)
 *     sub_1403545B0 @ 0x1403545B0 (sub_1403545B0.c)
 *     sub_1403546D4 @ 0x1403546D4 (sub_1403546D4.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140353FB0(char a1, unsigned __int8 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  int v9; // ebx
  __int32 v10; // r15d
  __int64 v11; // r12
  unsigned __int64 v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // rdi
  bool v15; // cf
  bool v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rdx
  volatile signed __int32 *v19; // r8
  __int64 v20; // [rsp+40h] [rbp-78h] BYREF
  int v21; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-60h] BYREF
  int v24; // [rsp+60h] [rbp-58h] BYREF
  LARGE_INTEGER v25; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-48h] BYREF

  v6 = a3;
  v20 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  v23 = 0LL;
  if ( byte_140D06A50 && !(_BYTE)dword_140D05304 )
  {
    if ( a3 <= (unsigned int)dword_140C2B1C8 )
    {
      v9 = 2;
LABEL_5:
      v21 = v9;
      if ( (DWORD2(xmmword_140D06900) & 0x100000) != 0 )
      {
        v26[1] = 1LL;
        v26[0] = &v21;
        sub_14035EDE4((unsigned int)v26, 1, 1074790400, 3929, 1538);
      }
      return;
    }
    if ( a3 > qword_140D05110 )
    {
      ++dword_140C2B14C;
      v6 = qword_140D05110;
    }
    v10 = _InterlockedExchange(&dword_140D31000, 3);
    if ( !(unsigned __int8)sub_1403545B0() )
    {
      v9 = 1;
      goto LABEL_40;
    }
    if ( !a1 && (unsigned __int8)sub_1403542B8() )
    {
      v9 = 6;
    }
    else
    {
      v11 = MEMORY[0xFFFFF78000000008];
      sub_14030A3C0((__int64)CurrentPrcb, 1u, MEMORY[0xFFFFF78000000008], a1, a2, &v23, &v24);
      v12 = v23;
      if ( a4 )
      {
        v13 = KeQueryInterruptTimePrecise(&v25);
LABEL_17:
        if ( v12 > v13 + (unsigned __int64)(unsigned int)dword_140D050C8 )
        {
          v14 = v12 - v13;
          if ( v14 > v6 )
            v14 = v6;
          v22 = v14;
          if ( a4 )
          {
            if ( !a1 )
            {
              v14 = v22;
              if ( v22 > (unsigned int)dword_140D053FC )
              {
                v14 = (unsigned int)dword_140D053FC;
                v22 = (unsigned int)dword_140D053FC;
              }
            }
          }
          sub_14042A5E0(1LL, v14);
          sub_14022F99C((__int64)CurrentPrcb, v13, v14, v20, 1);
          sub_14022F96C(1);
          qword_140C2B1B8 = v13;
          sub_14022FA04(1, v10, &v20, (__int64 *)&v22);
          if ( a4 )
            byte_140C2B1B0 = 1;
          if ( (unsigned __int8)sub_1403542B8() )
            byte_140C2B1B1 = 1;
          ++qword_140C2B150;
          v10 = 1;
          v15 = v14 < qword_140C2B188;
          *((_BYTE *)CurrentPrcb + 33) = 0;
          if ( v15 )
            qword_140C2B188 = v14;
          if ( v14 > qword_140C2B180 )
            qword_140C2B180 = v14;
          if ( a1 )
            byte_140C2B580 = 1;
          v16 = dword_140C2B980 > 0;
          if ( (_DWORD)dword_140D06884 )
          {
            v17 = qword_140D088C0;
            v18 = (unsigned int)dword_140D06884;
            do
            {
              v19 = *(volatile signed __int32 **)(*v17 + 35000);
              if ( v19 && (dword_140D068EC & 0x40) != 0 )
              {
                if ( v16 )
                  _InterlockedOr(v19, 0x80000u);
                else
                  _InterlockedAnd(v19, 0xFFF7FFFF);
              }
              ++v17;
              --v18;
            }
            while ( v18 );
          }
          qword_140C2B1A0 = v13 + v20;
          *((_QWORD *)CurrentPrcb + 4624) = v13 + v20;
          goto LABEL_36;
        }
LABEL_43:
        v9 = 4;
        goto LABEL_40;
      }
      if ( v23 > v11 + (unsigned __int64)(unsigned int)dword_140C2B1C8 )
      {
        if ( !a1 && !(unsigned __int8)sub_1403546D4(v11) )
        {
          v9 = 3;
          goto LABEL_40;
        }
        v13 = KeQueryInterruptTimePrecise(&v25);
        if ( v12 <= v13 + (unsigned __int64)(unsigned int)dword_140C2B1C8 )
          goto LABEL_43;
        goto LABEL_17;
      }
      v9 = 2;
    }
LABEL_40:
    if ( v10 == 4 )
    {
LABEL_37:
      if ( !v9 )
        return;
      goto LABEL_5;
    }
LABEL_36:
    _InterlockedExchange(&dword_140D31000, v10);
    goto LABEL_37;
  }
}

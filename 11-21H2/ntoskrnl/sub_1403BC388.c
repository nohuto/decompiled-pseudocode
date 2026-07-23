/*
 * XREFs of sub_1403BC388 @ 0x1403BC388
 * Callers:
 *     sub_1403BBAC8 @ 0x1403BBAC8 (sub_1403BBAC8.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_1403B54DC @ 0x1403B54DC (sub_1403B54DC.c)
 *     sub_1403BBD58 @ 0x1403BBD58 (sub_1403BBD58.c)
 *     sub_1403BBEC4 @ 0x1403BBEC4 (sub_1403BBEC4.c)
 *     sub_1403BC620 @ 0x1403BC620 (sub_1403BC620.c)
 *     sub_1403BC6B8 @ 0x1403BC6B8 (sub_1403BC6B8.c)
 *     sub_1403BC758 @ 0x1403BC758 (sub_1403BC758.c)
 *     sub_1403BEB18 @ 0x1403BEB18 (sub_1403BEB18.c)
 *     sub_14050D760 @ 0x14050D760 (sub_14050D760.c)
 *     sub_14050E038 @ 0x14050E038 (sub_14050E038.c)
 */

__int64 __fastcall sub_1403BC388(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG_PTR *v3; // rbp
  ULONG_PTR *v4; // rsi
  ULONG_PTR *v5; // rdi
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  ULONG_PTR *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  ULONG_PTR *v20; // rax
  __int64 v21; // rdi
  ULONG_PTR *v23; // rcx
  int v24; // edx
  ULONG_PTR *v25; // rax
  ULONG_PTR v26; // rax
  ULONG_PTR *v27; // rax
  ULONG_PTR *v28; // rdi

  v2 = 0;
  if ( byte_140C4E4F8 )
    goto LABEL_6;
  do
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = sub_1403ACEFC(1, 2, 24576, 0, 0);
    if ( !v5 )
    {
      v5 = sub_1403ACEFC(3, 2, 24576, 0, 0);
      if ( !v5 )
      {
        v5 = sub_1403ACEFC(6, 2, 24576, 0, 0);
        if ( !v5 )
        {
          v5 = sub_1403ACEFC(2, 0, 0, 0, 0);
          if ( !v5 )
          {
            v23 = (ULONG_PTR *)qword_140C4E4E0;
            if ( (ULONG_PTR *)qword_140C4E4E0 == &qword_140C4E4E0 )
              goto LABEL_56;
            do
            {
              v5 = v23;
              v23 = (ULONG_PTR *)*v23;
              v24 = *((_DWORD *)v5 + 46);
              if ( (v24 & 1) == 0 )
              {
                if ( v5[22] )
                  v3 = v5;
                if ( (v5[28] & 2) != 0 && v5[24] )
                {
                  if ( (v24 & 8) == 0 )
                  {
                    if ( v5 )
                      goto LABEL_3;
                    goto LABEL_56;
                  }
                  if ( !v4 )
                    v4 = v5;
                }
              }
            }
            while ( v23 != &qword_140C4E4E0 );
            if ( v3 )
            {
              v5 = v3;
              goto LABEL_3;
            }
            if ( v4 )
            {
              *((_DWORD *)v4 + 46) &= ~8u;
              v5 = v4;
              goto LABEL_3;
            }
LABEL_56:
            dword_140C4E844 = 19;
            return (unsigned int)-1073741823;
          }
        }
      }
    }
LABEL_3:
    if ( (int)sub_1403BC620(v5) >= 0 )
    {
      sub_1403BBEC4((__int64)v5);
      byte_140C4E4F8 = 1;
    }
  }
  while ( !byte_140C4E4F8 );
LABEL_6:
  while ( !qword_140C4E4B0 )
  {
    v6 = sub_1403BEB18();
    v7 = v6;
    if ( !v6 )
      goto LABEL_60;
    if ( (int)sub_1403BC620(v6) >= 0 )
    {
      *(_DWORD *)(v7 + 184) |= 4u;
      qword_140C4E4B0 = v7;
      break;
    }
  }
  while ( 2 )
  {
    if ( qword_140C4E390 && (*(_DWORD *)(qword_140C4E390 + 184) & 4) != 0 && qword_140C4E390 != qword_140C4E4B0 )
      goto LABEL_15;
    v8 = sub_1403BC758();
    v9 = v8;
    if ( !v8 )
    {
      dword_140C4E844 = 21;
      return (unsigned int)-1073741823;
    }
    if ( (int)sub_1403BC620(v8) < 0 )
      continue;
    break;
  }
  qword_140C4E390 = v9;
  sub_1403B54DC(v9, a2);
  *(_DWORD *)(v9 + 184) |= 4u;
LABEL_15:
  v10 = qword_140C4E4C0;
  if ( (*(_DWORD *)(qword_140C4E4C0 + 224) & 0x2000) != 0 || qword_140C4E4C0 == qword_140C4E4B0 )
  {
    v10 = qword_140C4E390;
    qword_140C4E4C0 = qword_140C4E390;
  }
  else
  {
    *(_DWORD *)(qword_140C4E4C0 + 184) |= 4u;
  }
  if ( v10 != qword_140C4E3F8 )
    *(_DWORD *)(qword_140C4E3F8 + 184) |= 4u;
  if ( !qword_140C4E4F0 )
  {
    v11 = sub_1403ACEFC(15, 1048578, 24576, 0, 0);
    v12 = (__int64)v11;
    if ( v11 )
    {
      if ( v11[24] <= 0x3B9ACA00 && (int)sub_1403BC620(v11) >= 0 )
      {
        *(_DWORD *)(v12 + 184) |= 4u;
        qword_140C4E4F0 = v12;
      }
    }
  }
  while ( !qword_140C4E4C8 )
  {
    if ( _bittest((const signed __int32 *)(qword_140C4E4B0 + 224), 0xFu) )
      break;
    v13 = sub_1403BC6B8(0LL);
    v14 = v13;
    if ( !v13 )
      break;
    if ( (int)sub_1403BC620(v13) >= 0 )
    {
      *(_DWORD *)(v14 + 184) |= 4u;
      qword_140C4E4C8 = v14;
      break;
    }
  }
  v15 = qword_140C4E4B0;
  if ( (*(_DWORD *)(qword_140C4E4B0 + 224) & 1) == 0 )
  {
    if ( (int)sub_14050D760(qword_140C4E4B0, 0LL) < 0 )
    {
      qword_140C4E4B0 = 0LL;
      goto LABEL_60;
    }
    v25 = sub_1403ACEFC(12, 32, 0, 3840, 0);
    qword_140C4E4B0 = (ULONG_PTR)v25;
    if ( v25 )
    {
      if ( (int)sub_1403BC620(v25) >= 0 )
      {
        v15 = qword_140C4E4B0;
        *(_DWORD *)(qword_140C4E4B0 + 184) |= 4u;
        goto LABEL_26;
      }
      v26 = qword_140C4E4B0;
      dword_140C4E844 = 20;
      if ( qword_140C4E4B0 )
      {
        *(_DWORD *)(qword_140C4E4B0 + 252) = 20;
        *(_QWORD *)(v26 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
        *(_DWORD *)(v26 + 256) = 2;
        *(_DWORD *)(v26 + 272) = 3280;
      }
    }
    else
    {
LABEL_60:
      dword_140C4E844 = 20;
    }
    return (unsigned int)-1073741823;
  }
LABEL_26:
  if ( !qword_140C4E4C8 || (*(_DWORD *)(qword_140C4E4C8 + 224) & 1) != 0 || (*(_DWORD *)(v15 + 224) & 1) == 0 )
    goto LABEL_27;
  LOBYTE(a2) = 1;
  if ( (int)sub_14050D760(qword_140C4E4C8, a2) < 0 )
  {
    qword_140C4E4C8 = 0LL;
    goto LABEL_81;
  }
  v27 = sub_1403ACEFC(12, 32, 0, 3840, 0);
  qword_140C4E4C8 = (ULONG_PTR)v27;
  if ( !v27 )
  {
LABEL_81:
    dword_140C4E844 = 33;
    return (unsigned int)-1073741823;
  }
  *((_DWORD *)v27 + 46) |= 4u;
LABEL_27:
  while ( !qword_140C4E500
       && (!_bittest((const signed __int32 *)(qword_140C4E390 + 224), 0xFu)
        || !_bittest((const signed __int32 *)(qword_140C4E4C0 + 224), 0xFu)) )
  {
    LOBYTE(v15) = 1;
    v16 = sub_1403BC6B8(v15);
    v17 = v16;
    if ( !v16 )
      break;
    if ( (int)sub_1403BC620(v16) >= 0 )
    {
      *(_DWORD *)(v17 + 184) |= 4u;
      qword_140C4E500 = v17;
      break;
    }
  }
  while ( !qword_140C4E380 && off_140C02520 == &off_1400032A0 )
  {
    v28 = sub_1403ACEFC(0, 65, 0, 3840, 0);
    if ( !v28 && ((unsigned int)sub_1403B3BA0() != 1 || (v28 = sub_1403ACEFC(0, 64, 0, 3840, 0)) == 0LL) )
    {
      dword_140C4E844 = 23;
      break;
    }
    if ( (int)sub_1403BC620(v28) >= 0 )
    {
      *((_DWORD *)v28 + 46) |= 4u;
      qword_140C4E380 = (__int64)v28;
      sub_14050E038();
      break;
    }
  }
  if ( (*(_DWORD *)(qword_140C4E390 + 224) & 1) != 0 )
  {
    while ( !qword_140C4E480 )
    {
      v18 = sub_1403BC758();
      v19 = v18;
      if ( !v18 )
      {
        dword_140C4E844 = 22;
        break;
      }
      if ( (int)sub_1403BC620(v18) >= 0 )
      {
        *(_DWORD *)(v19 + 184) |= 4u;
        qword_140C4E480 = v19;
        break;
      }
    }
  }
  if ( !byte_140C4C6C0 )
  {
    v20 = sub_1403BBD58();
    v21 = (__int64)v20;
    if ( v20 )
    {
      if ( (int)sub_1403BC620(v20) >= 0 )
      {
        *(_DWORD *)(v21 + 184) |= 4u;
        qword_140C4E3E8 = v21;
      }
    }
  }
  return v2;
}

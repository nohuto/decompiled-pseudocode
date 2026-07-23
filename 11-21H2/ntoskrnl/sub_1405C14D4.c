/*
 * XREFs of sub_1405C14D4 @ 0x1405C14D4
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 * Callees:
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057F4C8 @ 0x14057F4C8 (sub_14057F4C8.c)
 *     sub_1405BE6F4 @ 0x1405BE6F4 (sub_1405BE6F4.c)
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1405C1218 @ 0x1405C1218 (sub_1405C1218.c)
 */

__int64 __fastcall sub_1405C14D4(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 *a7,
        char a8,
        _QWORD *a9)
{
  __int64 v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned int v14; // edi
  __int64 v15; // r10
  char v16; // r15
  int v17; // eax
  unsigned int v19; // r9d
  int v20; // r11d
  int v21; // eax
  _DWORD *v22; // rdi
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v28; // rdx
  bool v29; // zf
  signed __int32 v30; // eax
  _QWORD v31[18]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+47h]
  _DWORD *v35; // [rsp+108h] [rbp+77h]

  memset(v31, 0, 0x58uLL);
  v11 = (__int64)a7;
  v12 = 0;
  v13 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
  v32 = qword_1400161D0[(*(_DWORD *)(a1 + 48) >> 19) & 3];
  if ( !a7 )
    goto LABEL_6;
  v11 = *a7;
  v13 = *a7;
  v14 = sub_1405BE6F4(*a7, 4, 1, a3);
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( !(unsigned int)sub_14032A4B0(v11, a3, 0) )
    {
      v14 = -1073741523;
LABEL_43:
      sub_1405BF468(v13, 4, 1, a3);
      return v14;
    }
    v12 = 3;
LABEL_6:
    if ( (unsigned int)sub_1402821F4((ULONG_PTR *)v13, a3, 0LL) )
    {
      v12 |= 4u;
      v15 = 0LL;
      if ( v11 || (_DWORD)v32 != 16 || a3 >= 0x200 )
      {
        v16 = a6;
      }
      else
      {
        v16 = a6;
        if ( (*(_DWORD *)(v13 + 4) & 0x20) == 0 )
        {
          v17 = sub_1405C0828(a1, a2, a3, a5, a6, a9);
          v15 = 16LL * a9[8];
          if ( v17 >= 0 )
            return 0LL;
        }
      }
      v19 = *(_DWORD *)(a1 + 48);
      v20 = dword_140015AB0[(v19 >> 7) & 0x1F];
      if ( a5 )
      {
        v21 = a5 - 1;
        if ( a5 - 1 >= (unsigned int)(unsigned __int16)word_140D05000 )
        {
          v14 = -1073741811;
LABEL_27:
          if ( v12 >= 4 )
          {
            v26 = a3;
            if ( (ULONG_PTR *)v13 == &StartContext )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v28 = *((int *)CurrentPrcb + 8615);
              if ( (_DWORD)v28 != -1 )
              {
                if ( a3 + v28 <= 0x100 )
                {
                  do
                  {
                    if ( a3 >= 0x80000 )
                      break;
                    v30 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v28 + a3, v28);
                    v29 = (_DWORD)v28 == v30;
                    LODWORD(v28) = v30;
                    if ( v29 )
                      goto LABEL_40;
                  }
                  while ( v30 != -1 && a3 + v30 <= 0x100 );
                }
                if ( (int)v28 > 192
                  && (_DWORD)v28 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v28) )
                {
                  v26 = a3 + (int)v28 - 192;
                }
              }
            }
            if ( v26 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 16960), v26);
          }
LABEL_40:
          if ( (v12 & 2) != 0 )
            sub_14028CE10(v13, a3);
          if ( (v12 & 1) == 0 )
            return v14;
          goto LABEL_43;
        }
      }
      else
      {
        v21 = sub_14057F4C8(a1);
      }
      v31[4] = __PAIR64__(v20, v21);
      v31[1] = v13;
      v31[9] = v15;
      v31[2] = a3;
      v31[7] = a2;
      v22 = (_DWORD *)(qword_140C506D8 + 4LL * v21 * (unsigned int)(unsigned __int16)word_140D05000);
      v35 = &v22[(unsigned __int16)word_140D05000];
      v23 = 0;
      if ( (v19 & 0x1A00000) == 0x1A00000 )
        v23 = 8;
      v31[5] = -1LL;
      LODWORD(v31[0]) = v23;
      v31[3] = a4;
      if ( (a8 & 0x10) != 0 )
        LODWORD(v31[0]) = v23 | 0x10;
      v31[10] = a9;
      sub_1405C1218(a1, a2 + (v15 << 12), a3 - v15, (__int64)v31);
      sub_1405C0D40((unsigned int *)v31);
      v24 = v31[9];
      v25 = v31[2];
      if ( v31[9] == v31[2] )
        return 0;
      do
      {
        if ( v16 )
          break;
        if ( ++v22 == v35 )
          break;
        LODWORD(v31[4]) = *v22;
        sub_1405C0D40((unsigned int *)v31);
        v24 = v31[9];
        v25 = v31[2];
      }
      while ( v31[9] != v31[2] );
      if ( v24 == v25 )
        return 0;
      sub_14026E05C(v13, (__int64)a9, (LODWORD(v31[0]) >> 3) & 1, 0LL);
    }
    v14 = -1073741670;
    goto LABEL_27;
  }
  return v14;
}

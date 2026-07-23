/*
 * XREFs of sub_140266158 @ 0x140266158
 * Callers:
 *     sub_1403523C0 @ 0x1403523C0 (sub_1403523C0.c)
 * Callees:
 *     sub_140263068 @ 0x140263068 (sub_140263068.c)
 *     sub_1402662A0 @ 0x1402662A0 (sub_1402662A0.c)
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B7574 @ 0x1405B7574 (sub_1405B7574.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 */

__int64 *__fastcall sub_140266158(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rsi
  unsigned __int64 v5; // rbp
  BOOL v6; // ebx
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  bool v24; // zf
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h]
  int v27; // [rsp+48h] [rbp-C0h]
  _DWORD v28[32]; // [rsp+4Ch] [rbp-BCh] BYREF

  v3 = a1;
  memset(v28, 0, sizeof(v28));
  if ( !*(_QWORD *)(qword_140C54F90 + 24512 * v3 + 22608) && (dword_140D06880 & 0x30) != 0 )
    return 0LL;
  v4 = 0LL;
  v5 = a2 >> 9;
  v27 = 16;
  v6 = qword_140C590C8 > 0x110000;
  v25 = 1;
  v26 = 0;
  v7 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = sub_1402662A0((unsigned int)&StartContext, v3, 512, 512, 0LL, 0, v6, 1);
      v12 = v8;
      if ( !v8 )
        break;
      if ( (unsigned int)sub_140268620(v8, v9, v10, v11) && (dword_140D0689C & 0x200000) != 0 )
      {
        if ( (unsigned int)sub_1405B7574(&v25, 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4), 1LL) )
          sub_1405B7E7C(&v25, v17, v18, v19);
        v20 = (unsigned __int8)sub_1402F2700(v12);
        *(_QWORD *)(v12 + 16) = sub_14033B6A0(*(_QWORD *)(v12 + 16), 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v13 = -1LL << ((unsigned __int8)v20 + 1);
              v15 = *((_QWORD *)CurrentPrcb + 4375);
              v23 = ~(unsigned __int16)v13;
              v24 = (v23 & *(_DWORD *)(v15 + 20)) == 0;
              v14 = (unsigned int)v23 & *(_DWORD *)(v15 + 20);
              *(_DWORD *)(v15 + 20) = v14;
              if ( v24 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v20);
      }
      ++v7;
      *(_QWORD *)v12 = v4;
      v4 = (__int64 *)v12;
      if ( v7 >= v5 )
        goto LABEL_6;
    }
    sub_140263068(v4);
    v4 = 0LL;
LABEL_6:
    if ( v26 )
      sub_1405B7E7C(&v25, v13, v14, v15);
  }
  return v4;
}

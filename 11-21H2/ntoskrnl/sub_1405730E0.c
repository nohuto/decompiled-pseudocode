/*
 * XREFs of sub_1405730E0 @ 0x1405730E0
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140573374 @ 0x140573374 (sub_140573374.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 */

bool __fastcall sub_1405730E0(__int64 a1, __int64 a2, unsigned __int8 a3, char a4)
{
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *i; // rdi
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // r15d
  bool v17; // [rsp+20h] [rbp-78h]
  _QWORD v18[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v20[4]; // [rsp+60h] [rbp-38h] BYREF

  v7 = a1;
  if ( (dword_140D069BC & 2) == 0 && (!a3 || (dword_140D069BC & 1) == 0) )
    return 0;
  v17 = 0;
  CurrentPrcb = 0LL;
  v10 = *(_QWORD *)(a2 + 248);
  v11 = *((_QWORD *)KeGetCurrentThread() + 68);
  _InterlockedAdd(&dword_140C2ADA8, 1u);
  for ( i = *(__int64 **)(qword_140C2ADB0 + 8 * ((v10 >> 4) & 0x3FFF)); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v17 = *(_BYTE *)v10 != 0xCC;
      goto LABEL_30;
    }
    if ( v10 == i[1] && (!*((_BYTE *)i + 50) || v11 == i[2]) )
      break;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
LABEL_16:
    if ( a4 )
    {
      v14 = i[2];
      if ( !v14 || *((_BYTE *)i + 50) || v14 == v11 )
      {
        if ( *((_BYTE *)i + 24) )
        {
          if ( (unsigned __int8)sub_14042A5E0(a2, i[4]) )
            goto LABEL_14;
          v7 = a1;
        }
        v20[0] = v7;
        v20[1] = a2;
        v20[2] = a3;
        v16 = sub_140AB28B8((char *)i + 52, v20, v11);
        if ( v16 >= 0 && *((_BYTE *)i + 25) )
          sub_14042A5E0(a2, i[5]);
LABEL_29:
        v17 = v16 >= 0;
        goto LABEL_30;
      }
      v19[0] = a1;
      v19[1] = a2;
      v19[2] = a3;
      v15 = sub_140AB28B8((char *)i + 52, v19, v11);
    }
    else
    {
      v15 = sub_140573374(i, 0LL, v11, a1);
    }
    v16 = v15;
    goto LABEL_29;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *((_DWORD *)CurrentPrcb + 59);
  if ( (v13 & 0x800) == 0 )
  {
    *((_DWORD *)CurrentPrcb + 59) = v13 | 0x800;
    goto LABEL_16;
  }
  CurrentPrcb = 0LL;
  v18[0] = a1;
  v18[1] = a2;
  v18[2] = a3;
  if ( (int)sub_140AB28B8((char *)i + 52, v18, v11) >= 0 )
LABEL_14:
    v17 = 1;
LABEL_30:
  if ( CurrentPrcb )
    *((_DWORD *)CurrentPrcb + 59) &= ~0x800u;
  _InterlockedDecrement(&dword_140C2ADA8);
  return v17;
}

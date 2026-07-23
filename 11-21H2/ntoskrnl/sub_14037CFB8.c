/*
 * XREFs of sub_14037CFB8 @ 0x14037CFB8
 * Callers:
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 *     sub_14037D8B8 @ 0x14037D8B8 (sub_14037D8B8.c)
 *     sub_140393778 @ 0x140393778 (sub_140393778.c)
 * Callees:
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037A5B0 @ 0x14037A5B0 (sub_14037A5B0.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037D1B0 @ 0x14037D1B0 (sub_14037D1B0.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 *     sub_140397F20 @ 0x140397F20 (sub_140397F20.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14037CFB8(__int64 *a1, __int64 a2, int a3, int *a4)
{
  int v4; // r15d
  __int16 v6; // r14
  int v9; // r15d
  int v10; // ebx
  unsigned __int64 *v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // r9
  struct _MDL *v14; // r9
  __int64 v16; // r10
  struct _KTHREAD *v17; // r10
  __int64 v18; // r11
  unsigned __int64 *v19; // rcx
  unsigned int PriorityThread; // eax
  unsigned __int64 *v21; // r9
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+38h] [rbp-28h]
  __int16 v24; // [rsp+3Ch] [rbp-24h]
  __int16 v25; // [rsp+3Eh] [rbp-22h]
  unsigned __int64 *v26; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v27; // [rsp+48h] [rbp-18h]
  __int128 v28; // [rsp+50h] [rbp-10h]

  v4 = *a4;
  v27 = (unsigned __int64 *)&v26;
  v6 = a3;
  v26 = 0LL;
  v28 = 0LL;
  v9 = v4 & 7;
  v10 = sub_14037D1B0((_DWORD)a1, a2, a3, (_DWORD)a4, (__int64)&v26);
  if ( v10 < 0 )
  {
    v14 = (struct _MDL *)v28;
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_3;
    if ( *(_QWORD *)(a2 + 1848) )
    {
      v22 = *a1;
      v23 = a4[6];
      v25 = 0;
      v24 = v6;
      sub_14042A5E0(a2, &v22);
    }
    if ( (*(_BYTE *)(*(_QWORD *)sub_14035F5E8(a2, v6 & 0x3FF) + 6021LL) & 4) != 0
      && (a4[2] & 0x4000000) != 0
      && (int)sub_14033D760(v16) >= 2 )
    {
      if ( v27 != (unsigned __int64 *)&v26 )
      {
        v19 = v26;
        v26 = (unsigned __int64 *)(*v26 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v19 == v27 )
        {
          v26 = 0LL;
          v27 = (unsigned __int64 *)&v26;
        }
        else
        {
          *v27 = *v27 & 7 | (8 * (*v27 >> 3) - 8);
        }
      }
      *(_OWORD *)(a4 + 10) = 0LL;
      *(_OWORD *)(a4 + 14) = 0LL;
      *(_OWORD *)(a4 + 18) = 0LL;
      *((_QWORD *)a4 + 9) = v18;
      *((_QWORD *)a4 + 10) = a2 + 464;
      PriorityThread = KeQueryPriorityThread(v17);
      sub_140397F20(a2 + 464, a4 + 10, PriorityThread);
    }
    else
    {
LABEL_3:
      if ( v27 != (unsigned __int64 *)&v26 )
      {
        v11 = v26;
        v26 = (unsigned __int64 *)(*v26 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v11 == v27 )
        {
          v26 = 0LL;
          v27 = (unsigned __int64 *)&v26;
        }
        else
        {
          *v27 = *v27 & 7 | (8 * (*v27 >> 3) - 8);
        }
      }
      v12 = (_QWORD *)sub_14035F5E8(a2, v6 & 0x3FF);
      sub_14037D2EC(*v12, v13, 0LL);
    }
    v14 = 0LL;
    *(_QWORD *)&v28 = 0LL;
    v10 = 0;
  }
  if ( v14 )
    sub_14037AE58(a2 + 1536, 5, -1LL, v14);
  while ( v27 != (unsigned __int64 *)&v26 )
  {
    v21 = v26;
    v26 = (unsigned __int64 *)(*v26 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( v21 == v27 )
    {
      v26 = 0LL;
      v27 = (unsigned __int64 *)&v26;
    }
    else
    {
      *v27 = *v27 & 7 | (8 * (*v27 >> 3) - 8);
    }
    sub_14037A5B0(a2, v21, -1LL);
  }
  return (unsigned int)v10;
}

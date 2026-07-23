/*
 * XREFs of sub_140283C50 @ 0x140283C50
 * Callers:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_14029E64C @ 0x14029E64C (sub_14029E64C.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_140283E8C @ 0x140283E8C (sub_140283E8C.c)
 *     sub_1402867DC @ 0x1402867DC (sub_1402867DC.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 */

__int64 __fastcall sub_140283C50(int a1, __int64 *a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // r12
  int v14; // edi
  unsigned int v16; // r14d
  __int64 v17; // rax
  struct _FILE_OBJECT *v18; // rsi
  int v19; // r13d
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+60h] [rbp-10h]
  struct _KTHREAD *v23; // [rsp+B8h] [rbp+48h]
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v25 = 0LL;
  v6 = a3;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v25;
    v25 = v7;
  }
  v8 = a5;
  *a5 = 0;
  *((_QWORD *)v8 + 1) = a3;
  if ( !(unsigned int)sub_140283E8C(a1, (_DWORD)a2, a3, 0, (__int64)&v20) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = v20;
  v23 = CurrentThread;
  LOBYTE(v25) = *((_BYTE *)CurrentThread + 1388);
  v11 = a6;
  *((_BYTE *)CurrentThread + 1388) = 1;
  if ( (v11 & 1) != 0 )
  {
    v16 = 0;
    v17 = sub_14027A794(v10, 1666411853LL);
    v12 = v22;
    v18 = (struct _FILE_OBJECT *)v17;
    v13 = *((_QWORD *)&v21 + 1);
    v19 = a6;
    do
    {
      v14 = sub_1407F099C(v18);
      if ( v14 < 0 )
        break;
      v14 = sub_140329730(*((_QWORD *)&v20 + 1), v21, v13, v12, 0LL, v19, v8);
      sub_1407F0748(v18);
      if ( v14 != -1073741740 )
        break;
      ++v16;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
    }
    while ( v16 < 5 );
    v10 = v20;
    sub_140230680((signed __int64 *)(v20 + 64), (unsigned __int64)v18, 0x63536D4Du);
    CurrentThread = v23;
    v6 = a3;
  }
  else
  {
    v12 = v22;
    v13 = *((_QWORD *)&v21 + 1);
    v14 = sub_140329730(*((_QWORD *)&v20 + 1), v21, *((_QWORD *)&v21 + 1), v22, 0LL, v11, v8);
  }
  if ( v14 < 0 || *((_QWORD *)v8 + 1) )
    *((_QWORD *)v8 + 1) += (unsigned int)(DWORD2(v22) << 12);
  else
    *((_QWORD *)v8 + 1) = v6;
  *((_BYTE *)CurrentThread + 1388) = v25;
  sub_1402867DC(v10, v13, v12);
  return (unsigned int)v14;
}
